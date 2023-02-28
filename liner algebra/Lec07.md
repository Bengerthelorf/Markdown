To start this lecture, we need to take another example first. So, let's take a look at the following example:

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    2 & 4 & 6 & 8 \\
    3 & 6 & 8 & 10
\end{bmatrix}
$$

and let's do the elimination process:

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    2 & 4 & 6 & 8 \\
    3 & 6 & 8 & 10
\end{bmatrix}
\rightarrow
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    0 & 0 & 2 & 4 \\
    0 & 0 & 2 & 4
\end{bmatrix}
\rightarrow
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    0 & 0 & 2 & 4 \\
    0 & 0 & 0 & 0
\end{bmatrix}
$$

and in accordance with practice, we call the: 

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    2 & 4 & 6 & 8 \\
    3 & 6 & 8 & 10
\end{bmatrix} \quad as \quad \mathbf{A}, \quad and \quad
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    0 & 0 & 2 & 4 \\
    0 & 0 & 0 & 0
\end{bmatrix} \quad as \quad \mathbf{U}
$$

and obivously, the $ \mathbf{U} $ is not a upper triangular matrix, so we give it another name so-called the **echelon form**, means staircase form. 

BTW, the what we call echelon form is not always need to have the same line in every stair, it can be like this:

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    0 & 0 & 2 & 4 \\
    0 & 0 & 0 & 1
\end{bmatrix} is \quad also \quad an \quad echelon \quad form
$$

so kown we can talk about the rank of a matrix.

# rank

## definition

> the rank of a matrix is the number of pivots in the echelon form of the matrix.

say in the example above, there are 2 pivots in the echelon form of the matrix, so the rank of the matrix is 2

## usage

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    0 & 0 & 2 & 4 \\
    0 & 0 & 0 & 1
\end{bmatrix} \\
\uparrow \quad \uparrow \quad  \uparrow \quad \uparrow \\
1' \quad 2' \quad 3' \quad 4'
$$

pivot appera in the 1st and 3rd column, so these columns are called the **pivot columns**; and the 2nd and 4th column, who without the pivot, are called the **free columns**.

### why it's called pivot columns and free columns

free columns: means we can assign any value to these columns, say $ x _{1} $ and $ x _{3} $ in this case,  and the matrix is still a matrix, or say the equation is still a equation.

pivot columns: it will have a completely defferent situation. these comlumns, say $ x _{2} $ and $ x _{4} $ in this case, will affect matrix itself, which means there value are not free, kinde specific.

## reduce row echelon form

well, maybe you will say, hey where's the gauss-jordan elimantion? let's do it:

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    0 & 0 & 2 & 4 \\
    0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{bmatrix}
    1 & 2 & 0 & -2 \\
    0 & 0 & 2 & 4 \\
    0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{bmatrix}
    1 & 2 & 0 & -2 \\
    0 & 0 & 1 & 2 \\
    0 & 0 & 0 & 0
\end{bmatrix}
$$

and to get it more simplified, we can switch the columns:

$$
\begin{bmatrix}
    1 & 2 & 0 & -2 \\
    0 & 0 & 1 & 2 \\
    0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{bmatrix}
    1 & 0 & 2 & -2 \\
    0 & 1 & 0 & 2 \\
    0 & 0 & 0 & 0
\end{bmatrix}
$$

and we call that matrix: matrix $ \mathbf{R} $, and let's call it:

$$
rref \quad form
$$

so, you can see that we have been though:

$$
\mathbf{Ax} = 0 \Rightarrow \mathbf{Ux} = 0 \Rightarrow \mathbf{Rx} = 0
$$

# rref form

typical rref form:

$$
\begin{bmatrix}
    R & F \\
    0 & 0
\end{bmatrix}
$$

$ \mathbf{R} $ stand for the pivot columns; and $ \mathbf{F} $ stand for the free columns.

but since, we usally make the pivot columns a identity matrix, so we can write it like this:

$$
\begin{bmatrix}
    I & F \\
    0 & 0
\end{bmatrix}
$$

HEY! COOL THING COMES!

## the null space

we have got the typical form of the rref form, let's put nullspace into it:

$$
\begin{bmatrix}
    I & F \\
    0 & 0
\end{bmatrix}
\begin{bmatrix}
    x_1 \\
    x_2 
\end{bmatrix} = 
\begin{bmatrix}
    0 \\
    0
\end{bmatrix}
$$

so what is the solution of it? yes you are right!

$$
\begin{bmatrix}
    x_1 \\
    x_2
\end{bmatrix} =
\begin{bmatrix}
    -F \\
    I
\end{bmatrix}
$$

## PS

if we do a transpose to the matrix $ \mathbf{A} $ in the begining, what will happen?

$$
\begin{bmatrix}
    1 & 2 & 3 \\
    2 & 4 & 6 \\
    2 & 6 & 8 \\
    2 & 8 & 10
\end{bmatrix}
\rightarrow
\begin{bmatrix}
    1 & 2 & 3 \\
    0 & 0 & 0 \\
    0 & 2 & 2 \\
    0 & 4 & 4
\end{bmatrix}
\rightarrow
\begin{bmatrix}
    1 & 2 & 3 \\
    0 & 2 & 2 \\
    0 & 4 & 4 \\
    0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{bmatrix}
    1 & 0 & 1 \\
    0 & 1 & 1 \\
    0 & 0 & 0 \\
    0 & 0 & 0
\end{bmatrix}
$$

and we can see that the rank of the matrix is 2, and the null space is:

$$
\begin{bmatrix}
    -F \\
    I
\end{bmatrix} =
C \times
\begin{bmatrix}
    -1 \\
    -1 \\
    1
\end{bmatrix}
$$

row rank and column rank are the same.