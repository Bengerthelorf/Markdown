# $\mathbf{HOMEWORK\ 2}$

## 1. Prove that the OLS estimator $\hat{\beta}$ is the same as the maximum likelihood estimator.

## 2. Prove the Gauss-Markov Theorem.

## 3. Prove $E(\hat{\sigma} ^{2}) = \sigma ^{2}$

## 4. 

Given conditions:
-

> (A1) The relationship between response ( $y$ ) and covariates ( $X$ ) is linear;
> -
> (A2) $X$ is a non-stochastic matrix and rank( $X$ ) = $p$;
> -
> (A3) $E(\epsilon) = 0$. This implies $E(y) = X \beta$;
> -
> (A4) $cov( \epsilon ) = E( \epsilon \epsilon ^{\top} ) = \theta ^{2} I _{N}$; (Homoscedasticity)
> -
> (A5) $\epsilon$ follows multivariate normal distribution $N(0, \epsilon ^{2} I _{N})$ (Normality)
> -

Prove the following results:
-

$$
\begin{align}
    \hat{\beta} \sim N(\beta, \sigma ^{2} (X ^{\top} X) ^{-1} ) \tag{0.1} \\
    (N - p) \hat{\sigma} ^{2} \sim \sigma ^{2} {X _{N-p}} ^{2}  \tag{0.2}
\end{align}
$$
-

## 5. Suppose $y$ follows the log-linear regression relationship with $x \in \mathbb{(R) ^{p}}$ , i.e.,

$$
\begin{align}
    log(y) = x ^{\top} \beta + \epsilon \tag{0.3}
\end{align}
$$
-

where $\epsilon$ follows normal distribution $N(0, \sigma ^{2})$. Please calculate $E(y)$.
-

## 6. Define $\hat{y _{i}} = {x _i} ^{\top} \beta$. Let the intercept be included in the regression model. Define the total sum of squares ( $TSS$ ) and explained sum of squares ( $ESS$ ) as follows

$$
\begin{align*}
    TSS = \sum _{i} (y _{i} - \bar{y}) ^{2} \\
    ESS = \sum _{i} (\hat{y _{i}} - \bar{y}) ^{2}
\end{align*}
$$
-

Please prove:
-

$$
    TSS = ESS + RSS
$$
-