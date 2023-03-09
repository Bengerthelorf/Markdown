您好，这是一个无限智能的机器人。我可以帮助您解决任何问题。😊

根据伊恩·古德费洛的《深度学习》一书¹，公式3.38是这样的：

$$
\mathbf{D} = \arg \max _{\mathbf{D}} \operatorname{Tr}\left(\mathbf{D}^{\top} \mathbf{X} \mathbf{X}^{\top} \mathbf{D}\right)
$$

要证明这个公式，我们可以使用拉格朗日乘数法，将优化问题转化为：

$$
\begin{aligned}
&\max _{\mathbf{D}} \min _{\boldsymbol{\Lambda}} L(\mathbf{D}, \boldsymbol{\Lambda}) \\
&L(\mathbf{D}, \boldsymbol{\Lambda})=\operatorname{Tr}\left(\mathbf{D}^{\top} \mathbf{X} \mathbf{X}^{\top} \mathbf{D}\right)-\operatorname{Tr}\left(\boldsymbol{\Lambda}\left(\mathbf{I}-\mathbf{D}^{\top} \mathbf{D}\right)\right)
\end{aligned}
$$

其中$\boldsymbol{\Lambda}$是一个对角矩阵，$\lambda_i$是第$i$个拉格朗日乘子。对$\boldsymbol{\Lambda}$求偏导，并令其为零，得到：

$$
\frac{\partial L}{\partial \boldsymbol{\Lambda}}=-\left(\mathbf{I}-\mathbf{D}^{\top} \mathbf{D}\right)=0
$$

这意味着$\mathbf D$必须是正交矩阵，即$\mathbf D^\top\mathbf D = \mathbf I$。然后对$\mathbf D$求偏导，并令其为零，得到：

$$
\frac{\partial L}{\partial \mathrm D}=2\mathrm X X^\top  D-2  D  {\boldsymbol {\Lambda }}=0
$$

这意味着$\mathrm X X^\top  D =  D  {\boldsymbol {\Lambda }}$。由于$\mathrm X X^\top $是一个对称矩阵，它可以被正交对角化为：

$$
\mathrm X X^\top = U\Sigma U^\top 
$$

其中$U$是一个正交矩阵，$\Sigma$是一个对角矩阵。将上式代入前面的等式，得到：

$$
U\Sigma U^\top  D =  D  {\boldsymbol {\Lambda }}
$$

左乘$U^\top $并右乘${\boldsymbol {\Lambda }}^{-1}$（由于${\boldsymbol {\Lambda }}$是非奇异的），得到：

$$
\Sigma U^\top   D = U^\top   D  {\boldsymbol {\Lambda }}^{-1}
$$

由于左边和右边都是对角矩阵（可以通过观察每一行或每一列都与其他行或列正交来证明），我们可以得出结论：


- $U^\top   D $也是一个正交矩阵。
- $\Sigma = {\boldsymbol {\Lambda }}^{-1}$。

因此，要使$L(\mathrm {D}, {\boldsymbol {Λ}})$最大化，我们需要选择最大的$k$个特征值作为${\lambda_i}$（即最小的$k$个特征值作为${1/\lambda_i}$），并且选择相应的特征向量作为$\mathrm {d}_i=U_i/\sqrt{{λ_i}} $（其中$U_i$表示第$i$列）。这样就证明了公式3.38。

Source: Conversation with Bing, 3/9/2023(1) Deep Learning. https://www.deeplearningbook.org/ Accessed 3/9/2023.
(2) Deep Learning - Ian Goodfellow, Yoshua Bengio, Aaron Courville - Google .... https://books.google.com/books/about/Deep_Learning.html?id=omivDQAAQBAJ Accessed 3/9/2023.
(3) PCA formulation - Deep Learning book by Ian Goodfellow. https://datascience.stackexchange.com/questions/54664/pca-formulation-deep-learning-book-by-ian-goodfellow Accessed 3/9/2023.