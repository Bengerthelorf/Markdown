> $$
> \begin{align*}
> \frac{\partial A ^{-1}}{\partial \alpha} &= \lim_{\Delta \alpha \to 0} \frac{(A + \Delta A) ^{-1} - A ^{-1}}{\Delta \alpha} \\
> &= \lim_{\Delta \alpha \to 0} \frac{(A + \Delta A) ^{-1} A A ^{-1} - (A + \Delta A) ^{-1} (A + \Delta A) A ^{-1}}{\Delta \alpha} \\
> &= \lim_{\Delta \alpha \to 0} \frac{(A + \Delta A) ^{-1} (- \Delta A) A ^{-1}}{\Delta \alpha} \\
> &= - A ^{-1} \lim_{\Delta \alpha \to 0} \frac{\Delta A}{\Delta \alpha} A ^{-1} \\
> &= - A ^{-1} \frac{\partial A}{\partial \alpha} A ^{-1}
> \end{align*}
> $$

$$
-A ^{-1} \frac{\partial A}{\partial \alpha} A ^{-1}
$$

The solution of the minimization problem is given by the **normal equation**:

$$
\hat{a} = (X^{\top}X)^{-1}X^{\top}y
$$

This can be derived by taking the derivative of the objective function with respect to a and setting it to zero. Then, solving for a gives the desired result. You can find more details about this method [here].

> 将目标函数写成矩阵形式：
> 
> $$
> f(a) = || Xa - y || _{2}^{2} = (y - Xa)^{\top}(y - Xa)
> $$
> 
> 对f(a)关于a求导，利用矩阵求导的一些性质，可以得到：
> 
> $$
> \frac{\partial f(a)}{\partial a} = 2X^{\top}(Xa - y)
> $$
> 
> 令导数等于零，得到：
> 
> $$
> \frac{\partial f(a)}{\partial a} = 0 \implies X^{\top}(Xa - y) = 0
> $$
> 
> 左乘$(X^{\top}X)^{-1}$，并利用矩阵乘法的结合律和逆矩阵的性质，可以得到：
> 
> $$
> \begin{align*}
> (X^{\top}X)^{-1}X^{\top}(Xa - y) &= 0 \\ 
> (X^{\top}X)^{-1}X^{\top}Xa - (X^{\top}X)^{-1}X^{\top}y &= 0 \\ 
> a - (X^{\top}X)^{-1}X^{\top}y &= 0 \\
> \hat{a} &= (X^{\top}X)^{-1}X^{\top}y
> \end{align*}
> $$


> 将目标函数写成矩阵形式：
> 
> $$
> \begin{align*}
> f(a) &= || Xa - y || _{2}^{2} \\
> &= (y - Xa)^{\top}(y - Xa) \\
> &= y ^ \top y - y ^ \top X a - a ^ \top X ^ \top y + b ^ \top X ^ \top X a \\
> &= y ^ \top y - 2 y ^ \top X a + a ^ \top X ^ \top X a
> \end{align*}
> $$
>
> 易得可以将去其分为三个部分: 
>
> $$
> \begin{align}
> \frac{\partial y ^ \top y}{\partial a} \\
> 2 \frac{\partial y ^ \top X a}{\partial a} \\
> \frac{a ^ \top X ^ \top X a}{\partial a}
> \end{align}
> $$
>
> 则, 分别求导: 
>
> 对 $(1)$ 式: 
>
> $$
> \frac{\partial y ^ \top y}{\partial a} = 
> \begin{bmatrix}
> 0 \\
> 0 \\
> \vdots \\
> 0\\
> \end{bmatrix} _{p \times 1}
> $$
>
> 对 $(2)$ 式, 由 $4.(a)$ 得: 
>
> $$
> 2 \frac{\partial y ^ \top X a}{\partial a} = 2 (X ^ \top y)
> $$
>
> 对 $(3)$ 式, 由 $4.(c)$ 得:
>
> $$
> \begin{align*}
> \frac{a ^ \top X ^ \top X a}{\partial a} &= (X ^ \top X + X ^ \top X)a \\
> &= 2 X ^ \top X a
> \end{align*}
> $$
>
> 则: 
>
> $$
> \frac{\partial (y - Xa)^{\top}(y - Xa)}{\partial a} = - 2 X ^ \top y + 2 X ^ \top X a
> $$
>
> 令其导数为 0, 则: 
>
> $$
> 2 X ^ \top X a - 2 X ^ \top y = 0 \\
> \implies \hat{a} = (X ^ \top X) ^ {-1} X ^ \top y
> $$