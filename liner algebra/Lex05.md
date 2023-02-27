# permutation

so, first we need to remain what we talk about in last class, at that lecture, we talk about $ \mathbf{A} = \mathbf{L} \mathbf{U} $, but at that case, well, that's a very special case, we don't need to exchange the row at all, which make the formula very simple, but in general, we may need to exchange the row, so we need to make a matrix to exchange the row, and we call it $ \mathbf{P} $, permutation matrixs. so the general formula will be:

$$
\mathbf{P} \mathbf{A} = \mathbf{L} \mathbf{U}
$$

and with this factorization as the general case, it's for **any** invertible matrix, $ \mathbf{A} $. 

and now let's give $ \mathbf{P} $ a definition:

## permutation matrix definition

What $ \mathbf{P} $ was? it is a identity matrix with reorded rows. 

and to understand what we said above, here is the thing that we need to keep in mind all the time, that a matrix can exchange any number of the rows, any position of the rows, and keep it the same. and of couse this how we make a permutation matrix possible, and we can use this to understand why the matrix $ \mathbf{P} $ will stay as a identity matrix but exchange the row.

so, base on this theory, we can get this:

$$
\mathbf{P} = \mathbf{P ^{-1}} = \mathbf{P ^T} = \mathbf{I}
$$

# transpose

since it's too simple to understand, let's go to the next one:

## symmetric matrix

it means:

$$
\mathbf{A} = \mathbf{A ^T} 
$$

and here is a quality:

$ \mathbf{A} \times \mathbf{A ^T} $ is a symmetric matrix.

<br/>

***NOW HERE THE HARD PART COMES:***

# vector space

## vector space definition

vector space is a set of vectors, and we can add, subtract, and multiply them by a scalar, and the result will be a vector, and the result will also be in the vector space.

## some examples

well let's get a example:

> if we have a two dimensional vector space (well, it's the easist to imagine), and for example, we take a quater, of this two dimensional plane, say the first quadrant, and whatever the vector in this plane we take, if we times it with a negative number, the result will be in other quadrant, so in this case, the first quadrant is not a vector space.

a vector space must be closed under multiplication by all **real** numbers. (keyword is "real number")

and now you have already know what a vector space is, and we can go to the next part:

# subspaces

## subspace definition

subspace is a subset of a vector space, and it's also a vector space. which means, it's now the whole vector space, but it's still "safe" to multiply by any real numbers.

## create subspaces out of vector

let's still remain in a two dimensional plane, and, say a not zero vecto, cause if the vector is zreo, it would be no sense to talk about it, so back to the vector we take. if we multiply it with a real number, the result will be in the same line, so in this case, the ***line*** is a subspace.

but is that any line in the plane will be a subspace? no! the line has to go through the origin (zero vector).

## create subspaces out of matrix

### from columns -- column space

all their linear combinations form a subspace.

called column space, or $ \mathbf{C(A)} $
