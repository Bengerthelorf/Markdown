# $\mathbf{HOMEWORK\ 2}$

## 1. Prove that the OLS estimator $\hat{\beta}$ is the same as the maximum likelihood estimator.

### 极大似然估计

在线性回归中, 我们假设误差项$\epsilon$服从均值为零, 方差为$\sigma^2$的正态分布, 即$\epsilon \sim N(0, \sigma^2)$.

则线性回归模型的似然函数为: 

$$
L(\beta, \sigma ^{2} |y, X) = \prod_{i=1}^{n} \frac{1}{\sqrt{2 \pi \sigma ^{2}}} e
 ^ {- \frac{(y_i - X_i \beta)^2}{2 \sigma ^{2}}}
$$

对该表达式取对数, 得到对数似然函数:

$$
\begin{align*}
    \ln L(\beta, \sigma ^{2} |y, X) &= \sum_{i=1}^{n} \ln \frac{1}{\sqrt{2 \pi \sigma ^{2}}} e
 ^ {- \frac{(y_i - X_i \beta)^2}{2 \sigma ^{2}}} \\
    &= - \frac{n}{2} \ln 2 \pi \sigma ^{2} - \frac{1}{2 \sigma ^{2}} \sum_{i=1}^{n} (y_i - X_i \beta)^2
\end{align*}
$$

求一阶导数并令其为零, 我们得到:

$$
\begin{align*}
    \frac{\partial \ln L(\beta, \sigma ^{2} |y, X)}{\partial \beta} &= \frac{1}{\sigma ^{2}} \sum_{i=1}^{n} X_i (y_i - X_i \beta) \\
    &= \frac{1}{\sigma ^{2}} (X 
    ^{\top} y - X ^{\top} X \beta) = 0
\end{align*}
$$

易得其正规方程为: 

$$
X ^{\top} y = X ^{\top} X \beta
$$

解出$\beta$, 我们得到:

$$
\hat{\beta} = (X ^{\top} X) ^{-1} X ^{\top} y
$$

### OLS

易得, 其在数学上可以写成:

$$
\hat{\beta} = \arg \min _{\beta} \sum_{i=1}^{n} (y_i - X_i \beta)^2
$$

同样的, 对其求导并令其为零, 我们得到:

$$
\begin{align*}
    \frac{\partial \sum_{i=1}^{n} (y_i - X_i \beta)^2}{\partial \beta} &= -2 \sum_{i=1}^{n} X_i (y_i - X_i \beta) \\
    &= -2 (X ^{\top} y - X ^{\top} X \beta) = 0
\end{align*}
$$

易得其正规方程为:

$$
X ^{\top} y = X ^{\top} X \beta
$$

解出$\beta$, 我们得到:

$$
\hat{\beta} = (X ^{\top} X) ^{-1} X ^{\top} y
$$

### 总结

由上述过程可知, OLS估计量$\hat{\beta}$与最大似然估计量相同.

## 2. Prove the Gauss-Markov Theorem.

首先, 我们定义一个线性无偏估计量$\tilde{\beta}$为:

$$
\tilde{\beta} = A y
$$

其中, $A$是一个$k \times n$的矩阵. 为了使$\tilde{\beta}$无偏, 我们必须有:

$$
\begin{align*}
    E(\tilde{\beta}) &= E(A y) \\
    &= A E(y) \\
    &= A E(X \beta + \epsilon) \\
    &= A X \beta + A E(\epsilon) \\
    &= A X \beta + 0 \\
    &= A X \beta
\end{align*}
$$

等于$\beta$. 因此, 我们得到:

$$
A X = I_k
$$

其次, 我们计算$\tilde{\beta}$的方差:

$$
\begin{align*}
    Var(\tilde{\beta}) &= Var(A y) \\
    &= A Var(y) A ^{\top} \\
    &= A Var(X \beta + \epsilon) A ^{\top} \\
    &= A Var(\epsilon) A ^{\top} \\
    &= A (\sigma^2 I_n) A ^{\top} \\
    &= \sigma^2 A A ^{\top}
\end{align*}
$$

最后, 我们比较$\tilde{\beta}$和$\hat{\beta}$的方差. 根据高斯消元法, 我们可以将矩阵$A$分解为:

$$
A = (X ^{\top} X) ^{-1} X ^{\top} + D
$$

其中, $D$是一个$k \times n$的矩阵, 满足:

$$
D X = 0
$$

将上式代入$\tilde{\beta}$的方差中, 我们得到:

$$
\begin{align*}
    Var(\tilde{\beta}) &= \sigma^2 (A A ^{\top}) \\
    &= \sigma^2 ((X ^{\top} X) ^{-1} X ^{\top} + D)((X ^{\top} X) ^{-1} X ^{\top} + D) ^{\top} \\
    &= \sigma^2 ((X ^{\top} X) ^{-1} X ^{\top} + D)(X (X ^{\top} X) ^{-1} + D ^{\top}) \\
    &= \sigma^2 ((X ^{\top} X) ^{-1} + D D ^{\top})
\end{align*}
$$

由于$D D ^{\top}$是一个半正定矩阵, 即对任意非零向量$v$, 都有$v ^{\top} D D ^{\top} v \geq 0$, 因此我们有:

$$
Var(\tilde{\beta}) - Var(\hat{\beta}) = \sigma^2 D D ^{\top} \geq 0
$$

即$\tilde{\beta}$的方差不小于$\hat{\beta}$的方差. 

高斯-马尔可夫定理得证. 

## 3. Prove $E(\hat{\sigma} ^{2}) = \sigma ^{2}$

要证明$E(\hat{\sigma}^2) = \sigma^2$，我们需要假设误差项$\epsilon$服从均值为零，方差为$\sigma^2$的正态分布，即$\epsilon \sim N(0, \sigma^2)$。这意味着因变量$y$也服从均值为$X\beta$，方差为$\sigma^2$的正态分布，即$y \sim N(X\beta, \sigma^2)$。

给定$X$和$\beta$时，$y$的似然函数为：

$$L(y|X,\beta) = \prod_{i=1}^n f(y_i|x_i,\beta)$$

其中$f(y_i|x_i,\beta)$是正态分布的概率密度函数在$y_i$处的取值。代入正态密度的公式，我们得到：

$$L(y|X,\beta) = \prod_{i=1}^n \frac{1}{\sqrt{2\pi\sigma^2}} \exp\left(-\frac{(y_i - x_i'\beta)^2}{2\sigma^2}\right)$$

对两边取自然对数，我们得到对数似然函数：

$$\log L(y|X,\beta) = -\frac{n}{2} \log(2\pi\sigma^2) - \frac{1}{2\sigma^2} \sum_{i=1}^n (y_i - x_i'\beta)^2$$

要找到$\sigma^2$的最大似然估计量，我们需要对$\sigma^2$最大化对数似然函数。求一阶导数并令其为零，我们得到：

$$\frac{\partial \log L(y|X,\beta)}{\partial \sigma^2} = -\frac{n}{2\sigma^2} + \frac{1}{2(\sigma^2)^2} \sum_{i=1}^n (y_i - x_i'\beta)^2 = 0$$

解出$\sigma^2$，我们得到：

$$\hat{\sigma}^2_{MLE} = \frac{1}{n} \sum_{i=1}^n (y_i - x_i'\beta)^2$$

这与OLS估计量$\hat{\sigma}^2$完全相同。因此，我们证明了$E(\hat{\sigma}^2) = \sigma^2$。

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