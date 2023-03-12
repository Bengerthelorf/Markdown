## 

$$
\begin{equation} 
    \sigma(x) = \frac{exp(x)}{exp(x) + exp(0)}
\end{equation}
$$

$$
\begin{equation}
    \frac{d}{dx} \sigma(x) = \sigma(x) (1 - \sigma(x))
\end{equation}
$$

$$
\begin{equation}
    1 - \sigma(x) = \sigma(-x)
\end{equation}
$$

$$
\begin{equation}
    log \sigma(x) = - \zeta(-x)
\end{equation}
$$

$$
\begin{equation}
    \frac{d}{dx} \zeta(x) = - \sigma(x)
\end{equation}
$$

$$
\begin{equation}
    \char"2C6F x \in (0,1), \sigma ^{-1} (x) = log(\frac{x}{1-x})
\end{equation}
$$

$$
\begin{equation}
    \char"2C6F x > 0, \zeta ^{-1} (x) = log(exp(x) - 1)
\end{equation}
$$

$$
\begin{equation}
    \zeta(x) = \int ^{x} _{-\infty} \sigma(y) dy
\end{equation}
$$

$$
\begin{equation}
    \zeta(x) - \zeta(-x) = x
\end{equation}
$$

# 3.33

$$
\begin{align*}
    \sigma(x) &= \frac{1}{1 + exp(-x)} \\
    &= \frac{1}{1 + e ^{-1}} \\
    &= \frac{1}{1 + \frac{1}{e ^{x}}} \\
    &= \frac{1}{\frac{e ^{x} + 1}{e ^{x}}} \\
    &= \frac{e ^{x}}{e ^{x} + 1} \\
    &= \frac{exp(x)}{exp(x) + exp(0)}
\end{align*}
$$

换一种写法:

$$
\begin{align*}
    \sigma(x) &= \frac{1}{1 + exp(-x)} \\
    &= \frac{1}{1 + \frac{1}{exp(x)}} \\
    &= \frac{1}{\frac{exp{x} + 1}{exp(x)}} \\
    &= \frac{exp(x)}{exp(x) + exp(0)}
\end{align*}
$$

# 3.34

$$
\begin{align*}
    \frac{d}{dx} \sigma(x) &= \frac{d}{dx} \frac{exp(x)}{exp(x) + exp(0)} \\
    &= \frac{exp(x) \cdot (exp(x) + exp(0)) - exp(x) \cdot exp(x)}{(exp(x) + exp(0)) ^{2}} \\
    &= \frac{(exp(x)) ^{2}}{(exp(x) + exp(0)) ^{2}} \\
\end{align*}
$$

$$
\begin{align*}
    \sigma(x) (1 - \sigma(x)) &= \frac{exp(x)}{exp(x) + exp(0)} \cdot \frac{exp(0)}{exp(x) + exp(0)} \\
    &= \frac{exp(x) \cdot exp(0)}{(exp(x) + exp(0)) ^{2}} \\
    &= \frac{(exp(x)) ^{2}}{(exp(x) + exp(0)) ^{2}} \\
\end{align*}
$$

所以: 

$$
\frac{d}{dx} \sigma(x) = \frac{(exp(x)) ^{2}}{(exp(x) + exp(0)) ^{2}} = \sigma(x) (1 - \sigma(x)) \\
$$

# 3.35

$$
1 - \sigma(x) = \frac{exp(0)}{exp(0) + exp(x)} \\
$$

$$
\begin{align*}
    \sigma(-x) &= \frac{exp(-x)}{exp(-x) + exp(0)} \\
    &= \frac{\frac{1}{exp(x)}}{\frac{1}{exp(x)} + exp(0)} \\
    &= \frac{1}{exp(x)} \cdot \frac{exp(x)}{exp(x) + exp(0)} \\
    &= \frac{1}{exp(x) + exp(0)}
\end{align*}
$$

So:

$$
1 - \sigma(x) = \frac{exp(0)}{exp(0) + exp(x)} = \frac{1}{exp(x) + exp(0)} = \sigma(-x)
$$

# 3.36

$$
log \sigma(x) = log \frac{exp(x)}{exp(x) + exp(0)} \\
$$

$$
\begin{align*}
    - \zeta(-x) &= - log (exp(0) + exp(-x)) \\
    &= log (\frac{1}{exp(0) + exp(-x)}) \\
    &= log (\frac{1}{\frac{1}{exp(x)} + exp(0)}) \\
    &= log (\frac{1}{exp(x) + exp(0)}) \\
\end{align*}
$$

So:

$$
log \sigma(x) = log (\frac{1}{exp(x) + exp(0)}) = - \zeta(-x)
$$

# 3.37

$$
\begin{align*}
    \frac{d}{dx} \zeta(x) &= \frac{d}{dx} log (exp(0) + exp(x)) \\
    &= \frac{exp(x)}{exp(x) + exp(0)} \\
    &= \sigma(x)
\end{align*}
$$

# 3.38

已知: 

$$
\sigma ^{-1} (x)
$$

为sigmiod函数的逆函数, 即:

$$
\sigma(\sigma ^{-1} (x)) = x
$$

代入sigmiod函数:

$$
\sigma(\sigma ^{-1} (x)) = \frac{1}{1 + exp(-\sigma ^{-1} (x))} = x \\ 
\Downarrow \\
\begin{align}
    1 + exp(-\sigma ^{-1} (x)) &= \frac{1}{x} \\
    exp(-\sigma ^{-1} (x)) &= \frac{1 - x}{x}
\end{align}
$$

啊啊啊啊, 怎么关掉这个 #tag 呀, 捏麻麻捏, 手写吧, 算了