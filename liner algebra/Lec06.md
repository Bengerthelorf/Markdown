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