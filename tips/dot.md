# Torch.tensor.dot

## 1. torch.dot

> `torch.dot(input, other, *, out=None) → Tensor`

### 1.1. Example

```python
>>> torch.dot(torch.tensor([2, 3]), torch.tensor([2, 1]))
tensor(7)
```

### 1.2. Mathematical Definition

for $2 \times 2$ matrix $A$ and $B$:

$$
\text{torch.dot}(A, B) = A_{1,1} \times B_{1,1} + A_{1,2} \times B_{1,2} + A_{2,1} \times B_{2,1} + A_{2,2} \times B_{2,2}
$$

or say, for $n \times n$ matrix $X$ and $y$:

$$
\text{torch.dot}(X, Y) = \sum_{i=1}^{n} \sum_{j=1}^{n} X_{i,j} \times Y_{i,j}
$$

And so on.

## 2. torch.tensordot

> `torch.tensordot(a, b, dims=2, out=None)`

### 2.1. Examples

```python
>>> a = torch.arange(60.).reshape(3, 4, 5)
>>> b = torch.arange(24.).reshape(4, 3, 2)
>>> torch.tensordot(a, b, dims=([1, 0], [0, 1]))
tensor([[4400., 4730.],
        [4532., 4874.],
        [4664., 5018.],
        [4796., 5162.],
        [4928., 5306.]])

>>> a = torch.randn(3, 4, 5, device='cuda')
>>> b = torch.randn(4, 5, 6, device='cuda')
>>> c = torch.tensordot(a, b, dims=2).cpu()
tensor([[ 8.3504, -2.5436,  6.2922,  2.7556, -1.0732,  3.2741],
        [ 3.3161,  0.0704,  5.0187, -0.4079, -4.3126,  4.8744],
        [ 0.8223,  3.9445,  3.2168, -0.2400,  3.4117,  1.7780]])

>>> a = torch.randn(3, 5, 4, 6)
>>> b = torch.randn(6, 4, 5, 3)
>>> torch.tensordot(a, b, dims=([2, 1, 3], [1, 2, 0]))
tensor([[  7.7193,  -2.4867, -10.3204],
        [  1.5513, -14.4737,  -6.5113],
        [ -0.2850,   4.2573,  -3.5997]])
```

### 2.2. Mathematical Definition

Returns a contraction of a and b over multiple dimensions.

`tensordot` implements a generalized matrix product.

$$
\begin{align}
\text{tensordot}(a, b, dims) &= r_{i_{0}, \cdots, i_{m-d}, i_{d}, \cdots, i_{n}} \\
=& \sum_{k_{0}, \cdots, k_{d-1}}{a_{i_{0}, \cdots, i_{m-d}, k_{0}, \cdots, k_{d-1}} \times b_{k_{0}, \cdots, k_{d-1}, i_{d}, \cdots, i_{n}}}
\end{align}
$$

### 2.3. `dims`

when it comes to the parameter `dims`, it start from the last dimension of the matrix.

i.e. for a 3D matrix, it has 3 axes, x, y and z. When we set `dims=0`, it means we are contracting the ***z-axis***, for the same reason, `dims=1` means contracting the ***y-axis***, and so on.

because The equation of `dims` is equivalent to function `torch.einsum`:

```python
>>> import torch
>>> x = torch.tensor([[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]])
>>> y = torch.tensor([[1, 0, -1, 2, 3], [4, 5, 6, -4, -3], [7, 8, 9, 6, 5], [10, 11, 12, 0, -1]])
>>> a = torch.einsum('ij,jk->ik', x, y)
>>> print(a)
tensor([[ 70,  78,  86,  12,   8],
        [158, 174, 190,  28,  24],
        [246, 270, 294,  44,  40]])
```

***Which is apparently that the `einsum` is a ==multiplication== but an addition.***

In order to better understand the `dims` with only one parameter, we can assume that a `torch.ones` with the same shape of the one needed to be contracted, and then use `torch.einsum` to calculate the result, which will give the same result as ==addition== in phenomenon.

## 3. torch.vdot

> `torch.vdot(input, other, *, out=None) → Tensor`

### 3.1. Example

```python
>>> torch.vdot(torch.tensor([2, 3]), torch.tensor([2, 1]))
tensor(7)
>>> a = torch.tensor((1 +2j, 3 - 1j))
>>> b = torch.tensor((2 +1j, 4 - 0j))
>>> torch.vdot(a, b)
tensor([16.+1.j])
>>> torch.vdot(b, a)
tensor([16.-1.j])
```
