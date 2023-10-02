> Define $\hat{y _{i}} = {x _i} ^{\top} \beta$. Let the intercept be included in the regression model. Define the total sum of squares ( $TSS$ ) and explained sum of squares ( $ESS$ ) as follows
> 
> $$
> \begin{align*}
>     TSS = \sum _{i} (y _{i} - \bar{y}) ^{2} \\
>     ESS = \sum _{i} (\hat{y _{i}} - \bar{y}) ^{2}
> \end{align*}
> $$
> 
> Please prove:
> 
> $$
>     TSS = ESS + RSS
> $$

$$
\begin{align*}
    TSS &= \sum (y_i - \bar{y}) ^{2} \\
    &= \sum ((y_i - \hat{y_i}) + (\hat{y_i} - \bar{y})) ^{2} \\
    &= \sum ((y_i - \hat{y_i}) ^{2} + (\hat{y_i} - \bar{y}) ^{2} + 2(y_i - \hat{y_i})(\hat{y_i} - \bar{y})) \\
    &= RSS + ess + 2 \sum (y_i - \hat{y_i})(\hat{y_i} - \bar{y})
\end{align*}
$$

所以:

$$
\begin{align*}
    \sum (y_i - \hat{y_i})(\hat{y_i} - \bar{y}) &= \sum (y_i - \hat{\beta_0} - \hat{\beta_1}x_i)(\hat{\beta_0} + \hat{\beta_1}x_1 - \bar{y}) \\
    &= \sum (y_i - \bar{y} + \hat{\beta_1} \bar{x} - \hat{\beta_1} x_i)(\bar{y} - \hat{\beta_0} + \hat{\beta_1}x - \bar{y}) \\
    &= \sum ((y_i - \bar{y}) - \hat{\beta_1} (x_1 - \bar{x}) )\hat{\beta_1}(x_i - \bar{x}) \\
    &= \sum (\hat{\beta_1}(x_i - \bar{x})(y_i - \bar{y}) - \hat{\beta_1} ^{2}(x_1 - \bar{x})^{2}) \\
    &= \hat{\beta_1} \sum (x_i - \bar{x})(y_i - \bar{y}) - \hat{\beta_1} ^{2} \sum (x_1 - \bar{x})^{2} \tag{⑨} \\
\end{align*}
$$

由于: 

$$
\hat{\beta_1} = \frac{\sum (x_i - \bar{x})(y_i-\bar{y})}{\sum (x_i - \bar{x})^{2}}
$$

所以, 对于$⑨$, 易得:

$$
\begin{align*}
    ⑨ &= \frac{[\sum (x_i - \bar{x})(y_i - \bar{y}] ^{2})}{\sum (x_i - \bar{x})^{2}} - \frac{[\sum (x_i - \bar{x})(y_i - \bar{y})] ^{2} \cdot \sum (x_i - \bar{x})^{2}}{[\sum (x_i - \bar{x})^{2}] ^{2}} \\
    &= \frac{[\sum (x_i - \bar{x})(y_i - \bar{y}] ^{2})}{\sum (x_i - \bar{x})^{2}} - \frac{[\sum (x_i - \bar{x})(y_i - \bar{y}] ^{2})}{\sum (x_i - \bar{x})^{2}} \\
    &= 0
\end{align*}
$$

由此, 可证: 

$$
\begin{align*}
    TSS &= RSS + ESS + 0 \\
    &= RSS + ESS
\end{align*}
$$

