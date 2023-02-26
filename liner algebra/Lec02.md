- [elimination](#elimination)
  - [prologue of back substitution](#prologue-of-back-substitution)
  - [back substitution](#back-substitution)
- [inverse of a matrix](#inverse-of-a-matrix)


# elimination

well, let's start with a new equiation:

$$
\begin{cases}
    x + 2y + z = 2 \\
    3x + 8y + z = 12 \\
    4y + z = 2
\end{cases}
$$

make it a matrix: ($ \mathbf{A} x = \mathbf{b} $)

$$
\mathbf{A} =
\begin{bmatrix}
    1 & 2 & 1 \\
    3 & 8 & 1 \\
    0 & 4 & 1
\end{bmatrix} \quad
x = 
\begin{bmatrix}
    x \\
    y \\
    z
\end{bmatrix} \quad
\mathbf{b} =
\begin{bmatrix}
    2 \\
    12 \\
    2
\end{bmatrix}
$$

OK, let's start with the first row, make the frist element to be pivot:

$$
\begin{bmatrix}
    1 & 2 & 1 \\
    3 & 8 & 1 \\
    0 & 4 & 1
\end{bmatrix}
$$

so what we gonna do next is to make the frist element of the second row to be zero:

$$
\begin{bmatrix}
    1 & 2 & 1 
\end{bmatrix} \times 3
\rightarrow
\begin{bmatrix}
    3 & 6 & 3
\end{bmatrix} \\ 
\downarrow \\
\begin{bmatrix}
    3 & 8 & 1
\end{bmatrix} - 
\begin{bmatrix}
    3 & 6 & 3
\end{bmatrix} 
\rightarrow 
\begin{bmatrix}
    0 & 2 & -2
\end{bmatrix}\\
\downarrow \\
\begin{bmatrix}
    1 & 2 & 1 \\
    0 & 2 & -2 \\
    0 & 4 & 1
\end{bmatrix}
$$

and let's call this matrix $ \mathbf{A(1-1)} $, we will need it later.

well the next step is to make the frist element of the third row to be zero, but clearly in this case the first element of the third row is already zero, so we don't need to do anything. But next time if you need to do this, you need to use the ==first column's element== to make the third row one zero.

so now you show have already know the basic idea of elimination, which is use first column's element to make the other rows' frist element to be zero, and use the second column's element to make the other rows' second element to be zero, and so on. 

If we write it in a short way, it will be like this: 

> use $ i $ row's $ i $ element to make the other rows' $ i $ element to be zero.

so now using this idea, we can do the elimination for the whole matrix, and the result will be:

$$ 
\begin{bmatrix}
    1 & 2 & 1 \\
    0 & 2 & -2 \\
    0 & 0 & 5
\end{bmatrix}
$$

and now let's call this matrix $ \mathbf{U} $, a upper triangular matrix. and the purpose of this elimination is to get from $ \mathbf{A} $ to $ \mathbf{U} $.

Oh, and BTW, the pivot can't be zero, otherwise the elimination will fail and the reason is obvious, any explanation is unnecessary. but here is a trick which is impoetant, ***if the pivot is zero, you can swap the row with another row, and the result will be the same*** , in this case we call it **temporary failure**. well, but it still can be failed if the pivot is zero in the last row, which means you can swap the row, and for this case, we call it a singular matrix, in the case above, if the last element of the third row is -4, it would have meant failure, and we call it **completely failure**.

so now let's do the 

# prologue of back substitution

first, let's bring the $ \mathbf{b} $ in, so it will be like this:

$$
\begin{bmatrix}
    1 & 2 & 1 & 2 \\
    3 & 8 & 1 & 12 \\
    0 & 4 & 1 & 2
\end{bmatrix}
$$

and we call this matrix a ***augmented matrix***. basically means tack something on, a extra column.

and what we did to the left side should also be done to the right side, so let's do the elimination for the right side, and the result will be:

$$
\begin{bmatrix}
    1 & 2 & 1 & 2 \\
    0 & 2 & -2 & 6 \\
    0 & 0 & 5 & -10
\end{bmatrix}
$$

and now we separate the left side and the right side.

$$
\begin{bmatrix}
    1 & 2 & 1 \\
    0 & 2 & -2 \\
    0 & 0 & 5
\end{bmatrix}
\begin{bmatrix}
    2 \\
    6 \\
    -10
\end{bmatrix}
$$

and yes, the left-hand side's result we call it: $ \mathbf{U} $, and the right-hand side's result we call it $ \mathbf{c} $.

so $ \mathbf{U} $ is what happened to $ \mathbf{A} $, and $ \mathbf{c} $ is what happened to $ \mathbf{b} $.

and now let's really get into the back substitution.

# back substitution

OK, let's get back to the equation, after the elimination, it will be like this:

$$
\begin{cases}
    x + 2y + z = 2 \\
    2y - 2z = 6 \\
    5z = -10
\end{cases}
$$

So, we can solve the last equation first, and the result will be:

$$
z = -2
$$

and then let's solve the whole equation, and the result will be:

$$
\begin{cases}
    x = 2 \\
    y = 1 \\
    z = -2
\end{cases}
$$

OK, it's clear. so what do we actually wanna do in the back substitution? 

YES! to do the exact the same thing we did in the elimination, but in the opposite direction!

but, hey, wait a minute, what about the matrix?

so, let's think about what matrix multiple $ \mathbf{A} $ can be the the result of $ \mathbf{A(1-1)} $?

$$
\begin{bmatrix}
     &  &  \\
     &  &  \\
     &  & 
\end{bmatrix}
\begin{bmatrix}
    1 & 2 & 1 \\
    3 & 8 & 1 \\
    0 & 4 & 1
\end{bmatrix} = 
\begin{bmatrix}
    1 & 2 & 1 \\
    0 & 2 & -2 \\
    0 & 4 & 1
\end{bmatrix}
$$

YES! it's 

$$
\begin{bmatrix}
    1 & 0 & 0 \\
    -3 & 1 & 0 \\
    0 & 0 & 1
\end{bmatrix}
$$

you can understand it like this: the first row $ \begin{bmatrix} 1 & 0 & 0 \end{bmatrix} $ means take 1 times the first row, zero times the second row, zero times the third row, and add them together, and the second row $ \begin{bmatrix} -3 & 1 & 0 \end{bmatrix} $ means take -3 times the first row, 1 times the second row, zero times the third row, and add them together, and the third row $ \begin{bmatrix} 0 & 0 & 1 \end{bmatrix} $ means take zero times the first row, zero times the second row, 1 times the third row, and add them together.

and with this logic, we can tell why the identity matrix times any matrix will be the same matrix, because the identity matrix means take 1 times the first row, 1 times the second row, 1 times the third row, and add them together, which means nothing will change.

well, and we call the matrix we use to make matrix $ \mathbf{A} $ to $ \mathbf{A(1-1)} $ a **elementary matrix**, $ \mathbf{E} $. and specifically, the one we use above will be put on indexes 2, 1, $ \mathbf{E_{2 1}} $, because it's the matrix we needed to fix the $ (2, 1) $ position, (make the $ (2, 1) $ position to be zero).

and the next step's elementary matrix, $ \mathbf{E_{3 2}} $ will be:

$$
\begin{bmatrix}
    1 & 0 & 0 \\
    0 & 1 & 0 \\
    0 & -2 & 1
\end{bmatrix}
$$

and there can be an another elementary matrix, which can exchange the order of the rows, like making the first row to be the second row, and the second row to be the first row, but remains the third row, it will be:

$$
\begin{bmatrix}
    0 & 1 & 0 \\
    1 & 0 & 0 \\
    0 & 0 & 1
\end{bmatrix} \times
\begin{bmatrix}
    1 & 2 & 1 \\
    3 & 8 & 1 \\
    0 & 4 & 1
\end{bmatrix} =
\begin{bmatrix}
    3 & 8 & 1 \\
    1 & 2 & 1 \\
    0 & 4 & 1
\end{bmatrix}
$$

and we call it $ \mathbf{P} $, for permutation. and we can also use this logic to exchange the order of the columns:

$$
\begin{bmatrix}
    1 & 2 & 1 \\
    3 & 8 & 1 \\
    0 & 4 & 1
\end{bmatrix} \times
\begin{bmatrix}
    0 & 1 & 0 \\
    1 & 0 & 0 \\
    0 & 0 & 1
\end{bmatrix} =
\begin{bmatrix}
    2 & 1 & 1 \\
    8 & 3 & 1 \\
    4 & 0 & 1
\end{bmatrix}
$$

as you can see, column 1 and column 2 are exchanged. and please note that, the two $ \mathbf{P} $ lay on different positions, on the left of $ \mathbf{A} $ will operate on the rows, and on the right of $ \mathbf{A} $ will operate on the columns.

but, since we didn't use it in this example, so the rest discussion will not include it.

OK, and now let's put them together:

$$
\mathbf{E_{3 2}} (\mathbf{E_{2 1}} \mathbf{A}) = \mathbf{U}
$$

and we move those parentheses, and we can get:

$$
(\mathbf{E_{3 2}} \mathbf{E_{2 1}}) \mathbf{A} = \mathbf{U}
$$

but discuss what's the result of $ \mathbf{E_{3 2}} \mathbf{E_{2 1}} $ is useless, it just a matrix can make we from $ \mathbf{A} $ to $ \mathbf{U} $, and we can't do anything with it, so let's just ignore it.

but here's the thing, how can we get from $ \mathbf{A(1-1)} $ back to $ \mathbf{A} $, or how to get from $ \begin{bmatrix}
    2 \\
    6 \\
    2
\end{bmatrix} $ back to the original $ \mathbf{b} $?

# inverse of a matrix

well, it demands us to make a matrix which times $ \mathbf{E _{2 1}} $ can produce $ \mathbf{I} $. It looks like this:

$$
\begin{bmatrix}
    & & & \\
    & & & \\
    & & & 
\end{bmatrix} \times
\begin{bmatrix}
    1 & 0 & 0 \\
    -3 & 1 & 0 \\
    0 & 0 & 1
\end{bmatrix} = 
\begin{bmatrix}
    1 & 0 & 0 \\
    0 & 1 & 0 \\
    0 & 0 & 1
\end{bmatrix}
$$

how to get it? for the first row, obviously, we don't need to do anything, and the same as the third row. so how to make the second row to be $ \begin{bmatrix} 0 & 1 & 0 \end{bmatrix} $? well, 3 times of the first row may help. so the result will be:

$$
\begin{bmatrix}
    1 & 0 & 0 \\
    -3 & 1 & 0 \\
    0 & 0 & 1
\end{bmatrix} \times
\begin{bmatrix}
    1 & 0 & 0 \\
    0 & 3 & 0 \\
    0 & 0 & 1
\end{bmatrix} =
\begin{bmatrix}
    1 & 0 & 0 \\
    0 & 1 & 0 \\
    0 & 0 & 1
\end{bmatrix}
$$