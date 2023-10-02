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

由 $E(\epsilon) = 0$: 

$$
\begin{align*}
    E((N - p) \hat{\sigma} ^{2}) &= E(\sum_{i=1}^{N}(y_i-\hat y_i)^2) \\
    &= E(\sum_{i=1}^{N}(X\beta+\epsilon_i-X\hat\beta)^2) \\
    &= E(\sum_{i=1}^{N}(X(\beta-\hat\beta)+\epsilon_i)^2) \\
    &= E(\sum_{i=1}^{N}\epsilon_i^2+(\beta-\hat\beta)^T(X^T\epsilon+\epsilon^T\hat\beta)) \\
    &= E(\sum_{i=1}^{N}\epsilon_i^2+0) \\
    &= E(tr(\epsilon^T\epsilon)) \\
    &= tr(E(\epsilon^T\epsilon)) \\
    &= tr(cov(\epsilon)) \\
    &= tr(\sigma^2I_N) \\
    &= N\sigma^2
\end{align*}
$$

由于 $cov(\epsilon) = \sigma ^{2} I _{N}$，所以 $\epsilon$ 的每个分量都互相独立，并且都服从正态分布，所以根据卡方分布的性质，$(N - p) \hat\sigma^2$ 的自由度等于 $\epsilon$ 的秩，即 $N$ 减去 $X$ 的秩，即 $N - p$。

综上所述，我们可以得出结论：$(N - p) \hat{\sigma} ^{2} \sim \sigma ^{2} {X _{N-p}} ^{2}$