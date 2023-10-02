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

由上述过程可知, OLS估计量$\hat{\beta}$与最大似然估计量相同

