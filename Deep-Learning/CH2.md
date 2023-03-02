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

# 损失函数

## 优缺点

|损失函数|适用问题|优点|缺点|
|:-:|:-:|:-:|:-:|
|交叉熵损失函数|分类问题，尤其是多分类问题|避免梯度消失，加快收敛速度	|可能导致过拟合，需要正则化
|平方损失函数|回归问题|保证损失函数是凸函数，便于求解最优解|对离群值敏感，容易受到噪声影响|
|0-1损失函数|分类问题|直观简单，反映模型准确率|	不连续不可导，难以优化|

| 损失函数 | 优点 | 缺点 | 适用问题 |
| :---: | :---: | :---: | :---: |
| 0-1损失函数 | 直接对应分类错误个数 | 非凸，难以优化 | 分类 |
| 绝对值损失函数 | 减少离群值影响 | 不连续不可导，难以优化 | 回归 |
| 平方损失函数 | 连续可导，易于优化 | 对离群值敏感，容易过拟合 | 回归 |
| log对数损失函数 | 能表征概率分布，能反映置信度差异 | 对预测值偏离真实值较大时惩罚过重，容易陷入局部最优解或鞍点 | 分类、回归 |
| 指数损失函数 | 能生成加性模型，能处理非线性问题 | 对离群值敏感，计算量大 | 分类、回归 |
| Hinge损失函数 | 能生成最大间隔分类器，能处理非线性问题 | 不连续不可导，在间隔内无法区分好坏样本 | 分类 |
| 感知损失函数 | 能生成线性分类器，收敛速度快 | 不连续不可导，在间隔内无法区分好坏样本 ，不能处理非线性问题 | 分类 |
|交叉熵损失函数 | 能表征概率分布 ，能反映置信度差异 ，与softmax结合能生成多分类器 ，收敛速度快 ，易于优化 | 对预测值偏离真实值较大时惩罚过重 ，可能出现梯度消失或爆炸的问题 | 分类 |

# convex and non-convex

即使不关注是否convex, 实际上得到的结果都会得到比较好的结果 (研究点)

# 梯度下降 (gradient descent)

$$
\theta _{t+1} = \theta _{t} - \alpha \frac{\partial R(\theta)}{\partial \theta}
$$

由于 R 是需要对全部的数据共同计算的, 所以会造成数据量大时的计算量大

# Q

## Q1

- AIC
- QIC

# A --NewBing

## A1
### 中文及英文检索

QIC和AIC是两种用于模型选择的准则，分别代表准信息准则（Quasi Information Criterion）和赤池信息准则（Akaike Information Criterion）。它们都是基于拟合优度和模型复杂度的权衡，但适用于不同的情况。

QIC是一种用于广义估计方程（GEE）分析的模型选择准则[^3] [^4]，它考虑了相关结构、均值模型和拟似然函数的影响。QIC可以用来比较具有不同相关结构或不同拟似然函数形式的模型，而QICu可以用来比较具有相同相关结构和相同拟似然函数形式但不同均值模型的模型[^4].

AIC是一种用于最大似然估计（MLE）分析的模型选择准则[^5]，它基于信息熵的概念，衡量了模型对数据的描述能力和参数数量。AIC可以用来比较具有相同数据集和相同误差分布假设但不同参数数量或形式的模型，选择最小化AIC值的模型为最优[^5]。

深度学习领域中，通常使用AIC或其变体来进行正则化或超参数调整[^1] [^2]，以避免过拟合或欠拟合问题。QIC在深度学习领域中较少使用，因为它主要针对GEE方法，而GEE方法在深度学习领域中并不常见。

### 英文内容检索

QIC和AIC是两种用于模型选择的准则，分别代表准信息准则（Quasi Information Criterion）和赤池信息准则（Akaike Information Criterion）。它们都是基于拟合优度和模型复杂度的权衡，但适用于不同的情况。

QIC是一种用于广义估计方程（GEE）分析的模型选择准则[^6] [^7]，它考虑了相关结构、均值模型和拟似然函数的影响。QIC可以用来比较具有不同相关结构或不同拟似然函数形式的模型，而QICu可以用来比较具有相同相关结构和相同拟似然函数形式但不同均值模型的模型[^6] [^7]。

AIC是一种用于最大似然估计（MLE）分析的模型选择准则[^8]，它基于信息熵的概念，衡量了模型对数据的描述能力和参数数量。AIC可以用来比较具有相同数据集和相同误差分布假设但不同参数数量或形式的模型，选择最小化AIC值的模型为最优[^8]。

深度学习领域中，通常使用AIC或其变体来进行正则化或超参数调整[^8]，以避免过拟合或欠拟合问题。QIC在深度学习领域中较少使用，因为它主要针对GEE方法，而GEE方法在深度学习领域中并不常见。



---
# footnote

Source: Conversation with Bing, 3/2/2023
[^1]: QIC program and model selection in GEE analyses - SAGE Journals. https://journals.sagepub.com/doi/pdf/10.1177/1536867X0700700205 Accessed 3/2/2023.
[^2]: QIC: Quasi Information Criterion in geepack: Generalized Estimating .... https://rdrr.io/cran/geepack/man/QIC.html Accessed 3/2/2023.
[^3]: QAIC: Quasi AIC or AICc in MuMIn: Multi-Model Inference. https://rdrr.io/cran/MuMIn/man/QAIC.html Accessed 3/2/2023.
[^4]: 深度学习与神经网络:AIC,BIC,L1,L2 - 腾讯云开发者社区-腾讯云. https://cloud.tencent.com/developer/article/1117561 Accessed 3/2/2023.
[^5]: 深度学习与神经网络:AIC,BIC,L1,L2 - 知乎. https://zhuanlan.zhihu.com/p/36557274 Accessed 3/2/2023.

[^6]: QIC program and model selection in GEE analyses - SAGE Journals. https://journals.sagepub.com/doi/pdf/10.1177/1536867X0700700205 Accessed 3/2/2023.
[^7]: QIC: Quasi Information Criterion in geepack: Generalized Estimating .... https://rdrr.io/cran/geepack/man/QIC.html Accessed 3/2/2023.
[^8]: Regression Model Accuracy Metrics: R-square, AIC, BIC, Cp and more .... http://www.sthda.com/english/articles/38-regression-model-validation/158-regression-model-accuracy-metrics-r-square-aic-bic-cp-and-more/ Accessed 3/2/2023.