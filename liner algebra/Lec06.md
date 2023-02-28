so first let's correct the definition we gave in the lecture 6 note. here is the correct definition:

A subspaces is a space that, say two vectors of this subspace, can be added together, and the result will be in the subspace. and, any vector in the subspace can be multuplied by a real number, and the result will still be in the subspace. 

so, here will give a question. say there is a 3 dimensional space, and a plane "$ \mathbf{P} $" and a line "$ \mathbf{L} $" inside of it, both go through the origin. will the uninon of these two "$ \mathbf{P} \cup \mathbf{L} $" be a subspace? 

the answer is no. because, if you take one vector from the plane, and one vector from the line, and combine them together, the result will not be in the subspace. so, although any vector in this space, not a subspace, can be multiplied by a real number, and the result will still be in the space, the space is not a subspace.

well, what about "$ \mathbf{P} \cap \mathbf{L} $"? will it be a subspace? 

the answer is yes. because, if the line is in the plane, then, $ \mathbf{P} \cap \mathbf{L} $ will still be the plane. and if the line is not in the plane, then the combine itself will be the only origin, or the zero vector, and every zero vector times a real number will still be zero vector, and every zero vector combine with another zero vector will still be zero vector too, so the answer is absolutely ture.

and when we spare this result as a general one, it comes the result below:

- $ \mathbf{S _1} \cup \mathbf{S _2} $ is not a subspace.
- $ \mathbf{S _1} \cap \mathbf{S _2} $ is a subspace.

OK let's dive into some real matter discussion. here is the question:

# in $ \mathbf{A} \mathbf{x} = \mathbf{b} $, what b allows this system to be solvable?

it is a very important question, which will lead us to the column space. 

so, to make all the prove clear, we take an example, say 4 dimensional and 3 unknowns:

$$
\begin{bmatrix}
1 & 1 & 2 \\
2 & 1 & 3 \\
3 & 1 & 4 \\
4 & 1 & 5
\end{bmatrix}
$$

so, let's place it in the equations:

$$
\begin{bmatrix}
1 & 1 & 2 \\
2 & 1 & 3 \\
3 & 1 & 4 \\
4 & 1 & 5
\end{bmatrix}
\begin{bmatrix}
x_1 \\
x_2 \\
x_3
\end{bmatrix} = 
\begin{bmatrix}
b_1 \\
b_2 \\
b_3 \\
b_4
\end{bmatrix}
$$

so, first "sub" question is: will the $ \mathbf{b} $s fill the whole 4 dimensional space?

the answer is no. well we need to think this using linear combination mathod, and 3 linear independent vectors can't fill the whole 4 dimensional space. accrording to the ituition, 3 vector can only determine a 3 dimensional space (1 vector determine a line, which we call is a 1 dimensional space; 2 vector determine a plane, which we call is a 2 dimensional space.). so there will be a branch of $ \mathbf{b} $ getting out of this 3 dimensional space.

Now let's real start to discuss the question wroten in the title.

the answer is:

It can solve $ \mathbf{A} \mathbf{x} = \mathbf{b} $ exactly when $ \mathbf{b} $ is in the column space of $ \mathbf{A} $, which called as $ \mathbf{C(A)} $.

but in this case, we may meet another problem. can I throw one column away, and still get the same result?

## pivot column

well in ther previous example, it would be a 4 dimensional space, which is not so easy to visualize. so let's take another example, say 3 dimensional and 3 unknowns:

$$
\begin{bmatrix}
1 & 1 & 2 \\
2 & 1 & 3 \\
3 & 1 & 4
\end{bmatrix}
$$

so, let's seperate it into 3 parts:

$$
\begin{bmatrix}
1 & 1 & 2 \\
2 & 1 & 3 \\
3 & 1 & 4
\end{bmatrix} \Rightarrow
\mathbf{Col _1:} 
\begin{bmatrix}
1 \\
2 \\
3
\end{bmatrix} \quad
\mathbf{Col _3:} 
\begin{bmatrix}
1 \\
1 \\
1
\end{bmatrix} \quad
\mathbf{Col _2:} 
\begin{bmatrix}
2 \\
3 \\
4
\end{bmatrix}
$$

it's apparent that the third colmn is the combination of the first and the second, which means it should be the most likely to be able to trown away, and do not affect the result. so let's try it:

how to prove it? well, visualizing it is the best way, but we don't need to actually draw this pictre, what we need to do is to find out whether the vector (2,3,4) is in the plane determined by (1,1,1) and (1,2,3).

how to solve this? I come up with a method, which may help, we need to fina a vector which is vertical for the plane:

so let's suppose the vector is (a,b,c), and the plane is determined by (1,1,1) and (1,2,3), then we can get:

$$
\begin{cases}
    a + b + c = 0 \\
    a + 2b + 3c = 0
\end{cases} \rightarrow
\begin{cases}
    a = c \\
    b = -2c
\end{cases}
$$

so now we need to check whether the vector is vertical for the plane, which means:  

$$
(a,-2a,a) \cdot (2,3,4) = 2a-6a+4a = 0
$$

so, those two vectors are vertical for each other, which means the vector (2,3,4) is in the plane determined by (1,1,1) and (1,2,3), which means the third column: $ \begin{bmatrix} 2 \\ 3 \\ 4 \end{bmatrix} $ do not contribute to the result, and we can throw it away.

and it can be discribed as:

>***if a column is a linear combination of other columns, then it is not a pivot column.***

in this case, the first column and the second column are pivot columns, and the third column is not a pivot column.

## two dimensional subspace of $ \mathbf{R ^4} $

getting back to primary example, we can see that the first two columns are pivot columns, and the third column is not a pivot column. which means, the thrid column is not independent. it gives nothing new.  so we can throw it away, and still get the same result.

so that, the matrix becomes:

$$
\begin{bmatrix}
1 & 1 \\
2 & 1 \\
3 & 1 \\
4 & 1
\end{bmatrix}
$$

and it's 2 dimensional subspace if $ \mathbf{R ^4} $

# Null space

let's me do a deffinition here:

any vector in the null space times anyany columns of matrix $ \mathbf{A} $ will be a zero vector.

In the previous example, the null space is:

$$
\begin{bmatrix}
r \\
r \\
-2r 
\end{bmatrix}: r \in \mathbb{R}
$$

but now, we have a new question:

is the null space actually a subspace?

we can prove it by the following method:

assume $ \mathbf{v} $ and $ \mathbf{w} $ are two vectors in the null space, and if we need our null space to be a subspace, then we need to prove that:

$$
\begin{cases}
    \mathbf{A} \mathbf{v} = 0 \\
    \mathbf{A} \mathbf{w} = 0 
\end{cases} \rightarrow
\mathbf{A} (\mathbf{v} + \mathbf{w}) = 0 \rightarrow
\mathbf{A} \mathbf{v} + \mathbf{A} \mathbf{w} = 0 
$$

because $ \mathbf{A} \mathbf{v} = 0 $ and $ \mathbf{A} \mathbf{w} = 0 $, and $ \vec{0} + \vec{0} = \vec{0} $, so $ \mathbf{A} \mathbf{v} + \mathbf{A} \mathbf{w} = 0 $, which means this null space is a subspace.

but will there be a situation that the null space is not a subspace?

yes, there will be. let's take a look at the following example:

$$
\begin{bmatrix}
1 & 1 & 2 \\
2 & 1 & 3 \\
3 & 1 & 4 \\
4 & 1 & 5
\end{bmatrix}
\begin{bmatrix}
    x _1 \\
    x _2 \\
    x _3
\end{bmatrix} =
\begin{bmatrix}
    1 \\
    2 \\
    3 \\
    4
\end{bmatrix}
$$

in this case, if:

$$
\begin{bmatrix}
    x _1 \\
    x _2 \\
    x _3
\end{bmatrix} =
\begin{bmatrix}
    1 \\
    0 \\
    0
\end{bmatrix} or \cdots
$$

then, yes equation is met, but there is point, the orgin do can not make the equition met, and a subspace should contain the orgin, so this null space is not a subspace. bingo!