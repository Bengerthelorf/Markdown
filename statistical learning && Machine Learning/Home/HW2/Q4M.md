### $(0.1)$

由于, $\hat{\beta}$ 是一个线型函数 $\epsilon$ 的函数, 而 $\epsilon$ 服从正态分布，所以根据正态分布的性质，$\hat{\beta}$ 也服从正态分布。我们只需要计算 $\hat{\beta}$ 的均值和方差即可。

由于 $E(\epsilon) = 0$ 所以：

$$
\begin{align*}
    E(\hat{\beta}) &= E((X ^{\top} X) ^{-1} X ^{\top} y) \\
    &= E((X ^{\top} X) ^{-1} X ^{\top} (X \beta + \epsilon)) \\
    &= E((X ^{\top} X) ^{-1} X ^{\top}X \beta + (X ^{\top}X) ^{-1} X ^{\top} \epsilon) \\
    &= E(\beta + (X ^{\top}X) ^{-1} X ^{\top} \epsilon) \\
    &= \beta + (X ^{\top}X) ^{-1} X ^{\top} E(\epsilon) \\
    &= \beta + 0 \\
    &= \beta
\end{align*}
$$

由于 $cov(\epsilon) = \sigma ^{2} I _{N}$, 所以：

$$
\begin{align*}
    cov(\hat{\beta}) &= cov((X ^{\top} X) ^{-1} X ^{\top} y) \\
    &= cov((X ^{\top} X) ^{-1} X ^{\top} (X \beta + \epsilon)) \\
    &= cov((X ^{\top} X) ^{-1} X ^{\top}X \beta + (X ^{\top}X) ^{-1} X ^{\top} \epsilon) \\
    &= cov((X ^{\top}X) ^{-1} X ^{\top} \epsilon) \\
    &= (X ^{\top}X) ^{-1} X ^{\top} cov(\epsilon) X (X ^{\top}X) ^{-1} \\
    &= (X ^{\top}X) ^{-1} X ^{\top} \sigma ^{2} I _{N} X (X ^{\top}X) ^{-1} \\
    &= \sigma ^{2} (X ^{\top}X) ^{-1}
\end{align*}
$$

所以 $\hat{\beta} \sim N(\beta, \sigma ^{2} (X ^{\top} X) ^{-1})$.

### $(0.2)$

由于 $\hat{\sigma} ^{2}$ 是一个$\epsilon$的二次函数，而 $\epsilon$ 服从正态分布，所以根据卡方分布的性质，$\hat{\sigma} ^{2}$ 也服从卡方分布：

