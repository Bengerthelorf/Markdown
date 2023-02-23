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
    - [shallow learning vs. deep learning table:](#shallow-learning-vs-deep-learning-table)
    - [`shallow learning`](#shallow-learning)
- [发展历史](#发展历史)
- [DL related `examples`](#dl-related-examples)
  - [最初的震撼](#最初的震撼)
  - [Object detection and sagmentation](#object-detection-and-sagmentation)
- [PS.](#ps)
- [Footnote](#footnote)


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
- OpenAI 网站
  - 网站上post的就算是发表了 :D
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
  > 统计的内容, 质量不错
- AI In general
  - AAAI
  > 别的投不出去就是这个捏
  - IJCAI
  > 也是相对比较拉拉捏
- Pattern Recognition & Computer Vision
  - ECCV
  > 每双数年投ECCV XD
  - ICCV
  > 每单数年发这个
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

### shallow learning vs. deep learning table:

-  Github copilot:

|shallow learning|deep learning|
|:---:|:---:|
|linear model|non-linear model|
|feature engineering|feature learning|
|hand-crafted|end-to-end|
|local|global|
|small data|large data|
|fast|slow|
|simple|complex|
|low accuracy|high accuracy|

- New bing:

Here is a table that compares shallow learning and deep learning based on some criteria[^1] [^2] [^3] [^4] [^5] [^6] [^7] [^8] [^9] [^10] [^11] [^12] [^13] [^14]:

| Criteria | Shallow Learning | Deep Learning |
| --- | --- | --- |
| Definition | Learning activities that characterized by recalling and rote memorization. The knowledge gained from shallow learning is considered passive and tends to fade away from our memory. | A type of machine learning based on artificial neural networks in which multiple layers of processing are used to extract progressively higher level features from data. |
| Number of hidden layers | One or none | More than one |
| Computational cost | Low | High |
| Interpretability | High | Low |
| Robustness to overfitting | High | Low |
| Scalability with data | Low, converges at a certain level of performance.  | High, improves with more data. |

Is there any specific aspect of shallow learning or deep learning that you want to know more about?



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
## 最初的震撼
来源于语音识别
开始时的模型是GMM (高斯混合模型), 但是当深度学习到来之后,由于声音是一个一维的数据, 适合于早期的深度学习
## Object detection and sagmentation
Autodrive's Objection detection and sagmention already can sagemnte 3D object now


---
# PS.
回去看看统计学习
  花书 Ch5
  - 前五章是ML, 要先读懂捏,寄寄
  - 寄寄力, 寄寄子, 寄寄力, 呜呜呜

CS2302 `FEIFEI LEE`, computer vision. suitable for selfteaching


# Footnote

Source: Conversation with Bing, 2/23/2023

[^1]: What is Shallow Learning | IGI Global. https://www.igi-global.com/dictionary/learning-with-immersive-technology/86355 Accessed 2/23/2023.

[^2]: What is the difference between deep learning and shallow learning?. https://ai.stackexchange.com/questions/21219/what-is-the-difference-between-deep-learning-and-shallow-learning Accessed 2/23/2023.

[^3]: https://bing.com/search?q=deep+learning+definition Accessed 2/23/2023.

[^4]: What is Deep Learning and How Does It Works [Updated] - Simplilearn.com. https://www.simplilearn.com/tutorials/deep-learning-tutorial/what-is-deep-learning Accessed 2/23/2023.

[^5]: Deep Neural Networks Vs Shallower Neural Networks: Advantages And .... https://www.surfactants.net/deep-neural-networks-vs-shallower-neural-networks-advantages-and-disadvantages/ Accessed 2/23/2023.

[^6]: What Is Meant By Shallow Learning? – TipsFolder.com. https://tipsfolder.com/meant-shallow-learning-2d2fdc7d26f09cc856f911a271de233c/ Accessed 2/23/2023.

[^7]: Deep vs. shallow learning? | ResearchGate. https://www.researchgate.net/post/Deep_vs_shallow_learning Accessed 2/23/2023.

[^8]: What is the difference between deep learning and shallow learning .... https://ai.stackexchange.com/questions/21219/what-is-the-difference-between-deep-learning-and-shallow-learning Accessed 2/23/2023.

[^9]: Shallow Versus Deep Neural Networks - Coursera. https://www.coursera.org/lecture/introduction-to-deep-learning-with-keras/shallow-versus-deep-neural-networks-3pKHn Accessed 2/23/2023.

[^10]: What is Shallow Learning | IGI Global. https://www.igi-global.com/dictionary/learning-with-immersive-technology/86355 Accessed 2/23/2023.

[^11]: Introduction to Shallow Machine Learning - LinkedIn. https://www.linkedin.com/pulse/introduction-shallow-machine-learning-ayman-mahmoud Accessed 2/23/2023.

[^12]: What is Deep Learning and How Does It Works [Updated] - Simplilearn.com. https://www.simplilearn.com/tutorials/deep-learning-tutorial/what-is-deep-learning Accessed 2/23/2023.

[^13]: Deep learning - Wikipedia. https://en.wikipedia.org/wiki/Deep_learning Accessed 2/23/2023.

[^14]: What is Deep Learning? | IBM. https://www.ibm.com/topics/deep-learning Accessed 2/23/2023.