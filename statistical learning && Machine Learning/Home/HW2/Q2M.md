高斯-马尔可夫定理

在线性回归模型中, 我们假设:

$$
y = X \beta + \epsilon
$$

其中, $y$是$n \times 1$的因变量向量, $X$是$n \times k$的自变量矩阵, $\beta$是$k \times 1$的参数向量, $\epsilon$是$n \times 1$的误差项向量.

高斯-马尔可夫定理的内容是: 在线性回归模型中, 如果误差项$\epsilon$满足以下条件:

- 均值为零: $E(\epsilon) = 0$
- 同方差: $Var(\epsilon) = \sigma^2 I_n$
- 无自相关: $Cov(\epsilon_i, \epsilon_j) = 0, i \neq j$

则最小二乘法(OLS)估计量$\hat{\beta}$是最优线性无偏估计量(BLUE), 即在所有线性无偏估计量中, $\hat{\beta}$具有最小的方差.

证明如下:

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

即$\tilde{\beta}$的方差不小于$\hat{\beta}$的方差. 这就证明了高斯-马尔可夫定理.