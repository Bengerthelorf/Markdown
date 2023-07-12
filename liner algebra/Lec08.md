OK, first, let's start with a example, the same as the matrix we use last time:

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 \\
    2 & 4 & 6 & 8 \\
    3 & 6 & 8 & 10
\end{bmatrix}
$$

so, let's get `A` and `b` some kind of relations. the method we use here is call augmented matrix:

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 & b _1 \\
    2 & 4 & 6 & 8 & b _2 \\
    3 & 6 & 8 & 10 & b _3
\end{bmatrix}
$$

elimination:

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 & b _1 \\
    0 & 0 & 2 & 4 & b _2 - 2b _1 \\
    0 & 0 & 2 & 4 & b _3 - 3b _1
\end{bmatrix} \Rightarrow
\begin{bmatrix}
    1 & 2 & 2 & 2 & b _1 \\
    0 & 0 & 2 & 4 & b _2 - 2b _1 \\
    0 & 0 & 0 & 0 & b _3 - b _2 - b _1
\end{bmatrix}
$$

so, we get:

$$
b _3 - b _2 - b _1 = 0 \rightarrow b _3 = b _2 + b _1
$$

and, we get this rule:

if a combination of rows of `A` gives a zero row, then the corresponding combination of elements of `b` must give zero number.

but hey, how to use it? everything comes up with meaning, well, this will help us to get a particular solution, and which will help us to describe all the solutions of the equiation.

so, let's get a particular solution, we can use the rule we get above, and we can get:

say, `Xp` as x particular, then, let's get a easiest way to get it. set free variable to zero, and get the particular solution:

oh we need to randomly pick values of `b`, so let's say: 

$$ b _1 = 1, b _2 = 5, b _3 = 6 $$

, an then the augmented matrix will be:

$$
\begin{bmatrix}
    1 & 2 & 2 & 2 & 1 \\
    0 & 0 & 2 & 4 & 3 \\
    0 & 0 & 0 & 0 & 0
\end{bmatrix}
$$

and then, set free variable to zero, we get: 

$$ x _2 = 0, x  _4 = 0 $$

, so that:

$$
\mathbf{X _p} =
\begin{bmatrix}
    -2 \\
    0 \\
    \frac{3}{2} \\
    0 \\
\end{bmatrix}
$$

then, how to get all the solutions? do you remember what we talked about at last lecture? the nullspace.

$$
\mathbf{Ax = b} \\
\mathbf{A} \times nullspace = 0
$$

so here is what we get:

$$
\mathbf{Ax} + \mathbf{A} \times nullspace = \mathbf{b} + 0 \\
\downarrow \\
\mathbf{A} \times (\mathbf{x} + nullspace) = \mathbf{b} \\
\Downarrow \\
\mathbf{A} \times (\mathbf{x _p} + nullspace) = \mathbf{b}
$$

and x particular is a particular solution, not a space, but nullspaces are. so by adding x particular to nullspace, we will get a space, and which includes the particular spaces, and further more, it includes all the particular solutions. 

and we call the:

$$
\mathbf{x _p + nullspace} = \mathbf{X _{complete}}
$$

so using the method we get in the last lecture:

$$
nullspace = 
\begin{bmatrix}
    -F \\
    I \\
    0
\end{bmatrix}
$$

so in this case, the nullspace is:

$$
nullspace =
\begin{bmatrix}
    -2 \\
    1 \\
    0 \\
    0
\end{bmatrix} and
\begin{bmatrix}
    2 \\
    0 \\
    -2 \\
    1
\end{bmatrix}
$$

> yes, nullspces will have two columns, cuz there is two free variables, remenber, so in the identity matrix, there will definitely be two columns.

and $ x _{complete} $ (x<sub>complete</sub>) is:

$$
x _{complete} = 
x _p + nullspace =
\begin{bmatrix}
    -2 \\
    0 \\
    \frac{3}{2} \\
    0 \\
\end{bmatrix} +
C _1
\begin{bmatrix}
    -2 \\
    1 \\
    0 \\
    0
\end{bmatrix} +
C _2
\begin{bmatrix}
    2 \\
    0 \\
    -2 \\
    1
\end{bmatrix}
$$

# full rank

since we already know about what is rank, which basically means the number of pivots. so let's say there is a m by n matrix, and what's the relations between m, n and rank(r)?

$$
\begin{cases}
    r \geq m \\
    r \geq n \\
\end{cases}
$$

## full column rank

full column rank means:

$$
r = n
$$

### and what is that means? 

that means there will have `n` pivots, and means no free variables at all. you may think about why it is not `m-n`? cuz it's a m by n matrix dude, which one should be bigger? `m` or `n`? `n`, right? well, if `m` gets bigger, just do a transpose man.

### so what about the nullspaces in this case?

it has no free variables, which means in the $ \begin{bmatrix} -F \\ I \end{bmatrix} $ matrix, the $ I $ matrix will be a zero matrix, so the nullspace will be a zero matrix too.

### so, how many solutions in this case?

in this case, there is only one solution if the solution exist, cuz there is no nullspace at all, so that no subspace at all. using the math way, we can say that:

$$
\mathbf{X _{complete}} = \mathbf{X _p} \quad or \quad 0
$$

oh! I worng at the statment above about "why `m` has to smaller then `n`?" actucally, it's not, the magnitude of `m` and `n` in indeterminate. 

## full row rank

full column rank means:

$$
r = m
$$