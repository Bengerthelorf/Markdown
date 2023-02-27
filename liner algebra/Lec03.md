well, this lecture is about matrix **multiplication** and  **inverses**, and so on, which I do not have interest in, so I just skip it.

go python, `import numpy as np`, then you can do anything you want.

OHH, I just come up with a new idea about what actually the inverse of a matrix is. well, if you do the elimination of a matrix, an upper triangular matrix will be obtained, right? but how to get a identity matrix? you need to `inverses` the matrix, in which you need to do an another elimination, but from the bottom to the top, using this method, you will get a identity matrix, right. so the from bottom to the top elimination is actually what the inverse of a matrix looks like. so if you want to find out whether a matrix is invertible, just do the inverse-elimination, then the result will should the answer.

well I thinks it is still needed to write some down. so, let's take a example:

$$
\begin{bmatrix}
1 & 3 \\
2 & 7
\end{bmatrix} \times
\begin{bmatrix}
a & c \\
b & d
\end{bmatrix} =
\begin{bmatrix}
1 & 0 \\
0 & 1
\end{bmatrix}
$$

as you can see above, the matrix $ \begin{bmatrix} 1 & 3 \\ 2 & 7 \end{bmatrix} $ is the matrix we want to find out its inverse, and the matrix $ \begin{bmatrix} a & c \\ b & d \end{bmatrix} $ is the one we assume to be the inverse matrix. an how to solve it? well, let's get a augmented matrix:

$$
\begin{bmatrix}
1 & 3 & 1 & 0 \\
2 & 7 & 0 & 1
\end{bmatrix}
$$

then we can do the elimination, and we will get:

$$
\begin{bmatrix}
1 & 3 & 1 & 0 \\
0 & 1 & -2 & 1
\end{bmatrix}
$$

then we can do the elimination upwards, of course. and we will get:

$$
\begin{bmatrix}
1 & 0 & 7 & -3 \\
0 & 1 & -2 & 1
\end{bmatrix}
$$

so the inverse matrix is:

$$
\begin{bmatrix}
    a & c \\
    b & d
\end{bmatrix} =
\begin{bmatrix}
    7 & -3 \\
    -2 & 1
\end{bmatrix}
$$

now let's dive into the proof:

so, according to the definition of the inverse matrix, we have $ \mathbf{E _{21}} \mathbf{E _{32}} \cdots \mathbf{A} = \mathbf{I} $, well, to write it in a short-hand way, we call the overall $ \mathbf{E _{21}} \mathbf{E _{32}} \cdots $ as $ \mathbf{E} $, so we can write the formula above as $ \mathbf{E} \mathbf{A} = \mathbf{I} $. so it would be clear that $ \mathbf{E} $ is the inverse of $ \mathbf{A ^{-1}} $.

so let's take a look at the elimination process, we need to make $ \mathbf{A} $ become $ \mathbf{I} $, an identity matrix, so we get $ \mathbf{E} $ in. and because of the way we do in the augmented matrix need us to operate both sides of the matrix at the very same time, which looks like this: 

$$ 
\mathbf{E} \times 
\begin{bmatrix} 
    \mathbf{A} & \mathbf{I} 
\end{bmatrix} 
$$

and becasue $ \mathbf{E} = \mathbf{A ^{-1}} $, $ \mathbf{A ^{-1}} \times \mathbf{A} = \mathbf{I} $ and $ \mathbf{A ^{-1}} \times \mathbf{I} = \mathbf{A ^{-1}} $, so we can write the above formula as:

$$
\mathbf{E} \times 
\begin{bmatrix} 
    \mathbf{A} & \mathbf{I} 
\end{bmatrix} = 
\begin{bmatrix} 
    \mathbf{A ^{-1}} \times \mathbf{A} & \mathbf{A ^{-1}} \times \mathbf{I}
\end{bmatrix}  =
\begin{bmatrix} 
    \mathbf{I} & \mathbf{A ^{-1}}
\end{bmatrix}
$$

problem solved.