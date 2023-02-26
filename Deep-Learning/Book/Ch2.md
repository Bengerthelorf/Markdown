# 标量, 向量, 矩阵和张量

## 标量, 向量, 矩阵和张量的定义
- scalar: 标量
- vector: 向量
- matrix: 矩阵
- tensor: 张量

## 标量, 向量, 矩阵和张量的一些重要概念

- 转置: transpose
- 主对角线: main diagonal
  $$ (\mathbf{A} ^ \top) _{(i, j)} = \mathbf{A} _{(j, i)} $$
  - 应用:
    - 列向量变为行向量
    - 转置成可以运算的形式
    - 另: 标量转置仍未标量:  $ a ^ \top = a $
- 广播: broadcasting
  矩阵与向量相加
    $$ \mathbf{A} = \begin{bmatrix} X _{(1, 1)} & X _{(1, 2)} & ... & X _{1, (j-1)} & X _{(1, j)} \\ X _{(2, 1)} & X _{(2, 2)} & ... & X _{(2, j-1)} & X _{(2, j)} \\ . & . & ... & . & . \\ . & . & ... & . & . \\ . & . & ... & . & . \\ X _{(i-1, 1)} & X _{(i-1, 2)} & ... & X _{(i-1, j-1)} & X _{(i-1, j)} \\ X _{(i, 1)} & X _{(i, 2)} & ... & X _{(i, j-1)} & X _{(i, j)} \end{bmatrix} $$
    $$ \mathbf{b} = \begin{bmatrix} b _{1} & b _{2} & ... & b _{(j-1)} & b _{j} \end{bmatrix} $$
    $$ \mathbf{c} = \begin{bmatrix} c _{1} \\ c _{2} \\ ... \\ c _{(i-1)} \\ c _{i} \end{bmatrix} $$
    $$ \mathbf{A} + \mathbf{b} = \begin{bmatrix} X _{(1, 1)} + b _{1} & X _{(1, 2)} + b _{2} & ... & X _{(1, j-1)} + b _{(j-1)} & X _{(1, j)} + b _{j} \\ X _{(2, 1)} + b _{1} & X _{(2, 2)} + b _{2} & ... & X _{(2, j-1)} + b _{(j-1)} & X _{(2, j)} + b _{j} \\ . & . & ... & . & . \\ . & . & ... & . & . \\ . & . & ... & . & . \\ X _{(i-1, 1)} + b _{1} & X _{(i-1, 2)} + b _{2} & ... & X _{(i-1, j-1)} + b _{(j-1)} & X _{(i-1, j)} + b _{j} \\ X _{(i, 1)} + b _{1} & X _{(i, 2)} + b _{2} & ... & X _{(i, j-1)} + b _{(j-1)} & X _{(i, j)} + b _{j} \end{bmatrix} $$
    $$ \mathbf{A} + \mathbf{c} = \begin{bmatrix} X _{(1, 1)} + c _{1} & X _{(1, 2)} + c _{1} & ... & X _{(1, j-1)} + c _{1} & X _{(1, j)} + c _{1} \\ X _{(2, 1)} + c _{2} & X _{(2, 2)} + c _{2} & ... & X _{(2, j-1)} + c _{2} & X _{(2, j)} + c _{2} \\ . & . & ... & . & . \\ . & . & ... & . & . \\ . & . & ... & . & . \\ X _{(i-1, 1)} + c _{(i-1)} & X _{(i-1, 2)} + c _{(i-1)} & ... & X _{(i-1, j-1)} + c _{(i-1)} & X _{(i-1, j)} + c _{(i-1)} \\ X _{(i, 1)} + c _{i} & X _{(i, 2)} + c _{i} & ... & X _{(i, j-1)} + c _{i} & X _{(i, j)} + c _{i} \end{bmatrix} $$

# 矩阵与向量相乘

## 矩阵乘 or 叉乘

左边矩阵取行, 右边矩阵取列, 然后相乘, 最后相加.
也就是要求第 $i$ 行, 第 $j$ 列的值, 就用左边矩阵的第 $i$ 行乘以右边矩阵的第 $j$ 列, 然后相加.

$$ \mathbf{C} _{(i, j)} = \sum _{k=1} ^{n} \mathbf{A} _{(i, k)} \mathbf{B} _{(k, j)} $$

![matrixProdct](https://dsm04pap003files.storage.live.com/y4mP1aFWahvq3hK6RAjEA92EGlGQ_CR-UiyzK3wOMxyIl_EMiW9YfJIgM0l1ZEAuzjvuqI5IE8rHFUbD7h80S3WcbaGkacHuQQmBRVXDYEdq9KH0UmVcyM4X3y0cQBKRQZU3tvEEAVp62wh4lxMToS-5uzB1aK5VrVnpAjdevAwNf9hdTWfuf90irmDHn03Ffe6?width=744&height=308&cropmode=none)

## 点乘 or 元素对应乘积 or Hadamard乘积

$$ \mathbf{C} _{(i, j)} = \mathbf{A} _{(i, j)} + \mathbf{B} _{(i, j)} $$

![dotProduct_1](https://dsm04pap003files.storage.live.com/y4mx9rtbBv9fvztqac7cKE7CzxTFYhrGBgvZlu1lLYuEz9m5uk27aHxLoz9W9OIW-Bw4liTmQ9RKnZDUn-dDEbU1akjasYFwQOYJQzbcMGkvYX8aZSwGi12-D2gTQfVs9vT6L4KT-a4bgNYkkJvQ2d2itfFoTeFsnuAgopcc3YBLLhiq0wKqNzg5s_2DuCGkFdd?width=840&height=123&cropmode=none)
![dorProduct_2](https://dsm04pap003files.storage.live.com/y4muFzyyoLfWGOz3mlcLmITML-yqE4YAfd81OFm_0JK_CduY6bpJ2AIN6PjW49nhHvku9S1qBR9tqH2-ZbU29sYI_KCFct4QOzN2jSt_z1SVlN0rpvvgnviMRPIPdqlLVZr4bf8bfNbhLvSuxjgZtyK03Zm_mP-SmGXGFj6VgEjjKFK5K8xLAmRPiaOOXY_mnGp?width=991&height=120&cropmode=none)

||数乘|矩阵乘积|矩阵点积|
|:-:|:-:|:-:|:-:|
|交换律|√|×|√|
|结合律|√|√|√|
|分配律|√|√|√|


$$
2x + 2y = -1 \\ 4x - 2y = -1
$$

$$
x = - \frac{1}{3} \\
y = - \frac{1}{6}
$$

$$
\begin{bmatrix} 2 & 2 \\ 4 & -2 \end{bmatrix} \begin{bmatrix} x \\ y \end{bmatrix} = \begin{bmatrix} -1 \\ -1 \end{bmatrix}
$$