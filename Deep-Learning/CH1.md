- [couse information](#couse-information)
  - [Abstract](#abstract)
  - [Conferences](#conferences)
  - [Joural](#joural)
- [人工智能](#人工智能)
  - [机器学习](#机器学习)
  - [监督学习](#监督学习)
- [神经网络](#神经网络)
  - [CNN](#cnn)
- [表示学习 (表征学习)](#表示学习-表征学习)
- [深度学习](#深度学习)
  - [浅层学习 `shallow learning` VS. 深度学习 `deep learning`](#浅层学习-shallow-learning-vs-深度学习-deep-learning)
    - [`shallow learning`](#shallow-learning)
- [发展历史](#发展历史)
- [DL related `examples`](#dl-related-examples)
- [PS.](#ps)


# couse information
## Abstract
***PS. 第三周会讲pytorch***

Office hours: 周四周五 3-5.30pm
Email: deeplearning.fudan@yandex.com

***Textbook***
- 花皮书 (为主)
- 邱 书
- 听不懂,过于垃圾的英语口音

前置课程--统计机器学习

Final scorce =
- +Class attendance/discussion (10%);
- +Homework Assignment (10%)
- +Projects (40%); 3-4; 每个⼈独⽴完成
- +Final Project (40%): hit NeurPIS submissions; (每个队最多两个⼈。)

<br/>

- Courses:
  - We will give some tutorial.
- Pain and Happiness
  - Huge efforts to code, debug, read and think;
  - Worth doing it!!

## Conferences
- OpenAI 网站上post的就算是发表了
- Machine Learning
  - NeurIPS
  > 过去是主要是贝叶斯的内容都在这里,但是现在已经是很杂的几乎全覆盖的内容
  - ICML
  > 偏重于ML, 数学内容相对多
  - ECML
  > 比ICML低一个等级,偏重于贝叶斯方法等的
  - UAI
  > 小的, 医学, 通过贝叶斯做医学的
  - COLT
  > 更偏重数学
  - ASTATS
  > 统计的内容, 重量不错
- AI In general
  - AAAI
  > 别的投不出去就是这个捏
  - IJCAI
  > 也是相对比较拉拉捏
- Pattern Recognition & Computer Vision
  - ECCV
  > 每双数年投ECCV XD
  - ICCV
  > 没但数年发这个
  - CVPR
  - ICPR/ACCV/BMVC
- Data Mining
  - ACM SIGKDD
  - ACM SIGIR/ICDM
- Natural Language Processing
  - ACL/EMNLP/COLING

## Joural
- ML & AI
  - JMRL
  > 偏重理论的
  - TPMAI
  - Artificial intelligent
  - IJCM
  > 好的, 不用版面费的
- Statistics
  - The Annals of Statistics
- Pattern Recognition & NN
  - Neural Computation
  - Neural Networks
  - IEEE Transactions on Neural Networks and Learning System
- Data Mining
  - IEEE Transactions on Knowledge and Data Engineering (TKDE)

# 人工智能
- 符号主义方法
- 联结主义方法
  - 近几年的方法,神经元
- 行为主义方法

## 机器学习

***什么是机器学习, 机器学习的定义***

**TEP**
A computer program is said to learn from experience **E** with respect to some class of tasks **T** and performance measure **P**, if its performance at tasks in **T**, as measured by **P**, improves with experience **E**.

- T --> Task
- P --> Perfomence measure
- E --> Training experience

## 监督学习
1. Given training data
2. Choose each of these
   - Decision Function
   - loss function
3. Define goal
4. Train with SGD
  (take small steps opposite the gradient)
  i.e. Adam (?)

  *PS.为什么有时候梯度求错了结果反而更好 XD*

# 神经网络

## CNN
- CNN 各层实际上的输入的数据的可视化: 

- 对卷积神经网络如何实现更好的结果的原因仍在研究

# 表示学习 (表征学习)

重要的原因:
- 对于冗余性很大的数据, 比如照片的识别, 就是一个很需要表征学习的内容
- 或者例如如下这张照片, 线性可分的话是不需要的, 但是如果不是线性可分, 就是经常利用表观学习能更容易地得到更好的结果

# 深度学习

## 浅层学习 `shallow learning` VS. 深度学习 `deep learning`

shallow learning vs. deep learning table:
|shallow learning|deep learning|
|:---:|:---:|



### `shallow learning`
- SIFT
- STIP
- SLAM


# 发展历史

- 卷⼟重来的（深度）神经⽹络
  原因:
  - 优化策略
  - 数据规模
    - 社会标注 (crowdsourcing)
  - 计算能⼒

# DL related `examples`
- 最初的震撼
来源于语音识别
开始时的模型是GMM (高斯混合模型), 但是当深度学习到来之后,由于声音是一个一维的数据, 适合于早期的深度学习



---
# PS.
回去看看统计学习
  花书 Ch5
  - 前五章是ML, 要先读懂捏,寄寄
  - 寄寄力, 寄寄子, 寄寄力, 呜呜呜

CS2302 `FEIFEI LEE`, computer vision. suitable for selfteaching