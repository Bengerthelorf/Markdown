# 1st

> spaCy 更好

todo list

- [ ] regex

## subword tokenization

将单词分成更小的部分: 中间状态

### Byte-Pair Encoding (BPE)

OpenAI的选择.

> - token learner:
> 它接受原始训练语料库并生成一个词汇表（一组标记）。大多数子词算法在空格分隔的标记内运行。
> 因此，我们通常在训练语料库中的空格之前添加一个特殊的词尾符号“_”。
>
> > 训练阶段
>
> - token segmenter:
>  这个函数接受一个原始的测试句子，并根据词汇表对其进行分词。

### Unigram language modeling tokenization

### WordPiece

## Minimum Edit Distance

$$
\begin{align*}
X_i & = \text{the first i characters of X} \\
Y_j & = \text{the first j characters of Y} \\
D(i, j) & = \text{the minimum edit distance between } X_i \text{ and } Y_j \\
& \text{i: the first i characters of X} \\
& \text{j: the first j characters of Y} \\
\end{align*}
$$

$$
\begin{pmatrix}
N & 9 & 8 & 9 & 10 & 11 & 12 & 11 & 10 & 9 & 8 \\
\end{pmatrix}
$$