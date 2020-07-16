
<!-- README.md is generated from README.Rmd. Please edit that file -->

# bigsimr <a href='https://github.com/SchisslerGroup/bigsimr'><img src='man/figures/logo.png' align="right" height="139" /></a>

Simulate arbitrary multivariate distributions efficiently in R.

<!-- badges: start -->

[![Travis build
status](https://travis-ci.com/adknudson/bigsimr.svg?branch=master)](https://travis-ci.com/adknudson/bigsimr)
<!-- badges: end -->

## Installation

You can install the released version of bigsimr from
[github](https://github.com/) with:

``` r
# install.packages("devtools")
devtools::install_github("SchisslerGroup/bigsimr")
```

This package relies on
[reticulate](https://rstudio.github.io/reticulate/) to draw on the speed
of Google’s [jax](https://github.com/google/jax) library. The easiest
way to get a working python environment is to use miniconda and create a
new environment. We provide a handy function for making the conda
environment.

``` r
library(bigsimr)
install_bigsimr(method = "conda", envname = "bigsimr")
```

### Development version

To get a bug fix or to use a feature from the development version, you
can install the development version of bigsimr from GitHub:

``` r
# install.packages("devtools")
devtools::install_github("SchisslerGroup/bigsimr", ref="develop")
```

### GPU version

Since jax has the ability to compile code to the CPU and GPU, bigsimr
also has the ability to benefit from GPU acceleration. Follow the [jax
installation guide](https://github.com/google/jax#installation) for
getting a GPU version.

## Overview

  - `rvec()` simulates multivariate data with specified marginal
    distributions and correlation
  - `cor_rand_PD()` generate a random postitive definite correlation
    matrix
  - `cor_rand_PSD()` generate a random postitive semidefinite
    correlation matrix
  - `cor_convert()` convert *from* one correlation *to* another
  - `cor_bounds()` compute the theoretical lower and upper correlations
    for a target multivariate distribution

## Usage

Reticulate needs to be able to find the python binary with `jax`
installed. It is recommended to use Miniconda.

``` r
# reticulate::use_condaenv("bigsimr-cpu")
library(bigsimr)
```

to generate multivariate data, we need a list of marginals (and their
parameters), and a correlation structure (matrix). The marginal
distributions can be built up using R’s special `alist` function. This
means that you can enter the distributions without evaluation.

``` r
margins = alist(
  qnorm(mean = 3.14, sd = 0.1),
  qbeta(shape1 = 1, shape2 = 4),
  qnbinom(size = 10, prob = 0.75)
)
```

The next step is to define a correlation structure for the multivariate
distribution. This correlation matrix can either come from observed
data, or we can set it ourselves, or we can generate a random
correlation matrix via `bigsimr::cor_rand_PSD()`.

``` r
rho <- cor_rand_PSD(d = 3)
```

Finally we can generate a random vector with our specified marginals and
correlation structure. The last argument, `type`, is looking to know
what kind of correlation matrix it is receiving. Right now it can handle
the Pearson product-moment correlation, Spearman’s \(\rho\), or
Kendall’s \(\tau\).

``` r
x <- rvec(100, rho, margins, type = "pearson")
```

``` r
# Sample correlation
cor(x)
#>             [,1]       [,2]        [,3]
#> [1,]  1.00000000 -0.7867505 -0.05127327
#> [2,] -0.78675047  1.0000000 -0.10084351
#> [3,] -0.05127327 -0.1008435  1.00000000
```

``` r
# Estimated upper and lower correlation bounds
cor_bounds(margins, type = "pearson")
#> $upper
#>           [,1]      [,2]      [,3]
#> [1,] 1.0000000 0.9537673 0.9704338
#> [2,] 0.9537673 1.0000000 0.9830820
#> [3,] 0.9704338 0.9830820 1.0000000
#> 
#> $lower
#>            [,1]       [,2]       [,3]
#> [1,]  1.0000000 -0.9528355 -0.9698956
#> [2,] -0.9528355  1.0000000 -0.8673128
#> [3,] -0.9698956 -0.8673128  1.0000000
```

## Appendix

``` r
all_dists <- alist(
  qbeta( shape1, shape2 ),
  qbinom( size, prob ),
  qcauchy( location, scale ),
  qchisq( df ),
  qexp( rate ),
  qf( df1, df2 ),
  qgamma( shape, rate ),
  qgeom( prob ),
  qhyper( m, n, k ),
  qlogis( location, scale ),
  qlnorm( meanlog, sdlog ),
  qnbinom( size, prob ),
  qnorm( mean, sd ),
  qpois( lambda ),
  qt( df ),
  qunif( min, max ),
  qweibull( shape, scale ),
  qwilcox( m, n ),
  qsignrank( n )
)
```
