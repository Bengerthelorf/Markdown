# linear combination of the columns

First let's take a example, ==two equations and two unknowns==:

$$
\begin{cases} 2x - y = 0 \\ -x + 2y = 3 \end{cases}
$$

We can write it in matrix form:

$$
\begin{bmatrix} 2 & -1 \\ -1 & 2 \end{bmatrix}
\begin{bmatrix} x \\ y \end{bmatrix} =
\begin{bmatrix} 0 \\ 3 \end{bmatrix}
$$

And then we can think the first matrix: $ \begin{bmatrix} 2 & -1 \\ -1 & 2 \end{bmatrix} $ as matrix $ \mathbf{A} $, and the second matrix: $ \begin{bmatrix} 0 \\ 3 \end{bmatrix} $ as matrix $ \mathbf{b} $, and the third matrix: $ \begin{bmatrix} x \\ y \end{bmatrix} $ as matrix $ \mathbf{x} $, then we can write the equation as:

$$
\mathbf{A}\mathbf{x} = \mathbf{b}
$$

And apparently, this equation's solution is $ \begin{cases} x = 1 \\ y = 2 \end{cases} $, but how to solve a two unknows equation is not the thing we want to talk about, so now let's get into the topic, linear regression.

## Linear combination

### What is linear combination?

#### linear combination of the columns

Now let's get into the column picture, using the example above, we can write the equation as:

$$
x\begin{bmatrix} 2 \\ -1 \end{bmatrix} +
y\begin{bmatrix} -1 \\ 2 \end{bmatrix} =
\begin{bmatrix} 0 \\ 3 \end{bmatrix}
$$

##### how to define it?

 well you can see there is the first column, $ \begin{bmatrix} 2 \\ -1 \end{bmatrix} $ and the second column, $ \begin{bmatrix} -1 \\ 2 \end{bmatrix} $, and the thid column on the other side of the equal sign, $ \begin{bmatrix} 0 \\ 3 \end{bmatrix} $, and the first column combined with $ x $, the second column combined with $ y $, and the third column, well you can assume it combined with $ 1 $, so here it is, not any definitions are needed, just think about it, and you will get it, ituitively.

well now you can draw the picture of the two vectors above, and the, vector $ (2, -1) $ and vector $ (-1, 2) $, I can't draw it here, just think about it, draw it in your mind. 

So now let's get a combination, we need to take A right combination witch can produce the third column $ (0, 3) $, so let's try $ x = 1, y = 2 $, and we get the result. (Of course, you can try to draw the picture of it, make the vector 2 twice the length, and combine with vector 1, and you will get the vetctor 3, but anyway, it doesn't matter, it's no needed to waste time on it.)

##### Well, if we take all the xs and ys, all the combinations, what would be all the results?

It's obvious that all the results, all the vectors we get will fill the whole plane

# three equations and three unknowns

well it' easy to figure out two equiations' example, cause it's very easy to pictire the 2 by 2 case, now let's move on to the 3 by 3 case.

$$
\begin{cases} 2x - y = 0 \\ -x + 2y - z = -1 \\  -3y + 4z = 4 \end{cases}
$$

Now it's three equations. In three dimensions.

Well, let's write it in a short-hand way:

$$
A = 
\begin{bmatrix} 2 & -1 & 0 \\ -1 & 2 & -1 \\ 0 & -3 & 4 \end{bmatrix} \quad
B =
\begin{bmatrix} 0 \\ -1 \\ 4 \end{bmatrix}
$$

OK, now let's try to solve it. the very first thing we need to undrstand is that the result of every singal equation in this equations will be a plane, and, well, two plane dicided a line, and three planes somehow will definitely dicided a point.

when we look at three planes meeting, it's not so clear, and in four dimensions probably kinda "a little" less clear. so let's quit the picture, and now let's solve it.

let's take a column picture:

$$
x\begin{bmatrix} 2 \\ -1 \\ 0 \end{bmatrix} +
y\begin{bmatrix} -1 \\ 2 \\ -3 \end{bmatrix} +
z\begin{bmatrix} 0 \\ -1 \\ 4 \end{bmatrix} =
\begin{bmatrix} 0 \\ -1 \\ 4 \end{bmatrix}
$$

and now let's see what we get, on the left-hand side it's a linear combination, three vectors and three scalars. and what we need to find out is what the linear combination is can produce the right-hand side vector.

now to make it more clear, list all the vectors we have:

$$
\begin{bmatrix} 2 \\ -1 \\ 0 \end{bmatrix} \quad
\begin{bmatrix} -1 \\ 2 \\ -3 \end{bmatrix} \quad
\begin{bmatrix} 0 \\ -1 \\ 4 \end{bmatrix} = 
\begin{bmatrix} 0 \\ -1 \\ 4 \end{bmatrix}
$$

well the result is obvious, it's $ x = 0, y = 0, z = 1 $, and we get the result.

OK, now it give us a question:

-  Can we solve $ A x = b $ for every $ b $?

so now let' put this words into linear combination words:

## Do the linear combinations of the columns fill the whole three-dimensional space?

First, for this equations the answer will be **YES**
- because this matrix is a non-singular matrix, a invertible matrix.

well, if you want to find a matrix that can't fill the whole three-dimensional space, it's easy to find one, we can make all three columns lay on the same plane. and for this case the answer will be **NO**, and this matrix will be called as a singular matrix, a non-invertible matrix.
> well, I know that you will think like, what about two columns lay on the same plane, it will still make the answer **NO**, isn't it? well, it's not, think about it and you will find it out.

Ok, now let's get back to the matrix form of the equations, and how to calculate it.

## Multiplication

let's get back to the general form of the matrix form of the equations:

$$
\mathbf{A}\mathbf{x} = \mathbf{b}
$$

let's get a example:

$$
\mathbf{A} = 
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix} \quad
\mathbf{x} =
\begin{bmatrix} 1 \\ 2 \end{bmatrix}
$$

### how to multiply a matrix bt a vector?

well it has two ways.

let's start with the:

## One column at a time

$$
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix}
\begin{bmatrix} 1 \\ 2 \end{bmatrix}
$$

can be written as:

$$
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix}
\begin{bmatrix} 1 \\ 2 \end{bmatrix}
$$

and well obviously, we can calculate it like this:

$$
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix}
\begin{bmatrix} 1 \\ 2 \end{bmatrix} =
1 \times \begin{bmatrix} 2 \\ 1 \end{bmatrix} +
2 \times \begin{bmatrix} 5 \\ 3 \end{bmatrix} =
\begin{bmatrix} 2 \times 1 + 5 \times 2 \\ 1 \times 1 + 3 \times 2 \end{bmatrix} =
\begin{bmatrix} 12 \\ 7 \end{bmatrix}
$$

boom! we get the result.

but now let's try to do it in another way:

## One row at a time

This is the idea of dot product.

$$
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix}
\begin{bmatrix} 1 \\ 2 \end{bmatrix} =
\begin{bmatrix} 2 \times 1 + 5 \times 2 \\ 1 \times 1 + 3 \times 2 \end{bmatrix} =
\begin{bmatrix} 12 \\ 7 \end{bmatrix}
$$

well it's kinda like:

$$
\begin{bmatrix} 2 & 5 \\ 1 & 3 \end{bmatrix}
\begin{bmatrix} 1 \\ 2 \end{bmatrix} =
\begin{bmatrix} 2 & 5 \end{bmatrix} \cdot \begin{bmatrix} 1 \\ 2 \end{bmatrix} +
\begin{bmatrix} 1 & 3 \end{bmatrix} \cdot \begin{bmatrix} 1 \\ 2 \end{bmatrix} 
$$

well since I'm not very good at LaTeX, just keep in mind the keyword is： ***KINDA LIKE***

but hey, now the key point is:

# $ \mathbf{A} \mathbf{x} $ is the combination of the columns of $ \mathbf{A} $ 

$ \mathbf{A} \mathbf{x} $ is the combination of the columns of $ \mathbf{A} $ 