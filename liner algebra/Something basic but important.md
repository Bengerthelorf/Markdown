the multiple of matrixes, is the the left one's column times the right one's row. For example, if you have a matrix like this:
```math
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix}
```
and another matrix like this:
```math
\begin{bmatrix} 1 \\ 2 \end{bmatrix}
```
then the multiple of them is:
```math
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix}
\begin{bmatrix} 1 \\ 2 \end{bmatrix} =
1 \times \begin{bmatrix} 2 \\ 1 \end{bmatrix} +
2 \times \begin{bmatrix} 5 \\ 3 \end{bmatrix} =
\begin{bmatrix} 2 \times 1 + 5 \times 2 \\ 1 \times 1 + 3 \times 2 \end{bmatrix} =
\begin{bmatrix} 12 \\ 7 \end{bmatrix}
```
and the result is:
```math
\begin{bmatrix} 12 \\ 7 \end{bmatrix}
```

so please remember that, `column times row = result`, `colume to row`

well, If you looking for some kinda "traditional" way to do it, then `row to column` actually.

$$
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix}
\begin{bmatrix} 1 \\ 2 \end{bmatrix} =
\begin{bmatrix}
    \begin{bmatrix} 2 \\ 5 \end{bmatrix} .
    \begin{bmatrix} 1 \\ 2 \end{bmatrix} \\
    \begin{bmatrix} 1 \\ 3 \end{bmatrix} .
    \begin{bmatrix} 1 \\ 2 \end{bmatrix}
\end{bmatrix} =
\begin{bmatrix} 12 \\ 7 \end{bmatrix}
$$