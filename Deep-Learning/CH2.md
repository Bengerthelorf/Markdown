# 监督学习, 半监督学习与非监督学习

## 监督学习与半监督学习

$$
D _{tr} = {(x_1,y_1)} ^{M} _{i = 1}
$$

i.e.
- SL: M = 1000

- Semi-SL: 
  - M = 50
  - N = 100000

N: 未标注数据的数量

半监督学习可能有退化的状态, 即: unlabelled data 增加后可能甚至不如没有 unlabelled data 的结果好

## 弱监督学习

i.e.

照片中有人, 但是不标注人在哪里

## 无监督学习

完全没有标注数据

即, 一下公式中

$$
D _{tr} = {(x_1,y_1)} ^{M} _{i = 1}
$$

相当于把 y 都设为 0

# three components of a deep learning

- Model
- Optimization on Training Data
- Generalization on Test Data

# 无监督学习

- 找到数据隐含的结构 (hidden structure)

i.e.
可能数据中有很多维, 但是其实际上有意义的只有一部分 (rank?)

降维 (dimensionality reduction)

## self-supervised learning 

same impoet data, no labels

有 y, 而无监督学习没有 y, 用于数据的预处理 (?)

