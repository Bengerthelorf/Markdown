## basic operations to get the properties from one specific matrix:

```python
import torch
x = torch.ones(2.2, dtype = torch.*X*)  # the *X* here represents all the data types, such as floats, integers, and strings, etc...
print(x.size())  # print the size of the x, i.e. the number of x's lines and columns, line first.
print(x.dtype()) # print the dtype of the x.
```

## basic operations to modify mutiple matrices:

```python
import torch
x = torch.rand(2, 3)  # randomly generate a 2 by 3 matrix, you can still use "dtype" to specify the dtype of the matrix, but "torch.int" won't work.
y = torch.rand(2, 3)

## add
z = x + y
z = torch.add(x, y) # equal to "z = x + y"
y.add_(x)  # equal to "y = x - y"

## minus
z = x - y
z = torch.sub(x, y)  # equal to "z = x -y"
y.sub_(x)  # equal to "y = y - x"

## multiply
z = x * y
z = torch.mul(x, y)
y.mul_(x)

## division
z = x / y
z = torch.div(x, y)
y.div_(x)
```
## basic operations to modify one specific matrix:
```python
import torch

x = torch.rand(5, 3)
'''
assuming that the output is 
[[ 1,  2,  3]
 [ 4,  5,  6]
 [ 7,  8,  9]
 [10, 11, 12]
 [13, 14, 15]]
'''
print(x[:, 0])  # the output is [1, 4, 7, 10, 13]
print(x[0, :])  # the output is [1, 2, 3]
print(x[0, 0])  # the output is [1]

print(x[0, 0].item())  # the output is 1, get the actual value.

## resize a tensor
x = x.size(a, b)
```

## torch and numpy

### from torch.tensor to numpy.ndarray
```python
import torch
import numpy as np
a = torch.ones(5)
print(a)  # the output is "tensor([1., 1., 1., 1., 1.])"
print(type(a))  # the output is "<class 'torch.Tensor'>"

b = a.numpy()
print(b)  # the output is "[1, 1, 1, 1, 1]"
print(type(b))  # the output is "<class 'numpy.ndarray'>"

## ATTENTION: IF YOU CHANGE THE A, YOU WILL GET B CHANGE AT THE SAME TIME!

a.add_(1)
print(a)  # the output will be "tensor([2., 2., 2., 2., 2.])"
print(b)  # the output will be "[2. 2. 2. 2. 2.]"
```

### from numpy.ndarray to torch.tensor
```python
import numpy as np
import torch
a = np.ones(5)  # ATTENTION: if has use import A as B, then you you should use B rather than A, or you will get this masage: NameError: name 'A' is not defined.

b = torch.from_numpy(a)
print(b)  # the output will be "tensor([1., 1., 1., 1., 1.], dtype=torch.float64)", YES, as you can see, the default data type is float64. You can specify the data type by "dtype = torch.%dataType%"

## ATTENTION: JUST LIKE THE torch.tensor TO numpy.ndarray, IF YOU CHANGE THE A, YOU WILL GET B CHANGE AT THE SAME TIME!

a += a
print(a)  # the output will be "[2. 2. 2. 2. 2.]"
print(b)  # the output will be "tensor([1., 1., 1., 1., 1.], dtype=torch.float64)"
```

> ATTENTION: Numpy can only handle the CPU calculation, which means if the *torch.tensor* is on the GPU(CUDA), the `b = a.numpy()` will return an error, so a `a = a.to("cpu")` is needed, and which also means that the `b = torch.from_numpy(a)` can only returns A tensor running in CPU, so that a `b = b.to("cuda")` is needed while at the second condition and you want to run is on GPU.
