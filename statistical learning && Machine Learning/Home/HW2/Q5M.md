由于 $log(y) = x ^{\top} \beta + \epsilon$，而 $\epsilon \sim N(0, \sigma ^{2})$，所以把 $log(y)$ 看作是一个服从正态分布的随机变量,  由于$y = e^{log(y)} = e^{x ^{\top} \beta + \epsilon}$，而 $\epsilon$ 和 $x ^{\top} \beta$ 是相互独立的随机变量（因为 $\epsilon$ 和 $x$ 都是非随机的），所以我们可以把 $y$ 看作是两个相互独立的随机变量的乘积，即 $y = e^{x ^{\top} \beta}e^{\epsilon}$, 易得: 

$$
\begin{align*}
    E(y) &= E(e^{x ^{\top} \beta}e^{\epsilon}) \\ 
    &= E(e^{x ^{\top} \beta})E(e^{\epsilon}) \\ 
    &= e^{x ^{\top} \beta}e^{E(\epsilon) + \frac{1}{2}Var(\epsilon)} \\
    &= e^{x ^{\top} \beta + 0 + \frac{1}{2}\sigma^2} \\
    &= e^{x ^{\top} \beta + \frac{1}{2}\sigma^2}
\end{align*}$$

综上: 
$$
\begin{align*}
    E(y) = e^{x ^{\top} \beta + \frac{1}{2}\sigma^2}
\end{align*}
$$
