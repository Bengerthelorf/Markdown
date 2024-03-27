# 3rd

for

$$
\hat{\theta} = \arg \min _{\theta} \mathbb{l} (\theta) = \frac{1}{m} ...
$$

其中的 $\frac{1}{m}$ 可有可无，与结果无关

## GD

p 47

> 4-gram model on tiny data will just memorize the data ==> overfitting

此时，参数空间远大于样本空间，模型会过拟合

## evaluation methodology

|  | urgent | normal | spam |
| :--: | :--: | :--: | :--: |
| urgent | 8 | 10 | 1 |
| normal | 2 | 20 | 0 |
