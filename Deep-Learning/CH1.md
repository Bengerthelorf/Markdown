- [1. couse information](#1-couse-information)
  - [1.1. Abstract](#11-abstract)
  - [1.2. Conferences](#12-conferences)
  - [1.3. Joural](#13-joural)
- [2. 人工智能](#2-人工智能)
  - [2.1. 机器学习](#21-机器学习)
  - [2.2. 监督学习](#22-监督学习)
- [3. 神经网络](#3-神经网络)
  - [3.1. CNN](#31-cnn)
- [4. 表示学习 (表征学习)](#4-表示学习-表征学习)
- [5. 深度学习](#5-深度学习)
  - [5.1. 浅层学习 *shallow learning* VS. 深度学习 *deep learning*](#51-浅层学习-shallow-learning-vs-深度学习-deep-learning)
    - [5.1.1. shallow learning vs. deep learning table:](#511-shallow-learning-vs-deep-learning-table)
    - [5.1.2. shallow learning models](#512-shallow-learning-models)
- [6. 发展历史](#6-发展历史)
- [7. DL related examples](#7-dl-related-examples)
  - [7.1. The initial shock](#71-the-initial-shock)
  - [7.2. Object detection and sagmentation](#72-object-detection-and-sagmentation)
- [8. PS.](#8-ps)
- [9. Footnote](#9-footnote)


# 1. couse information
## 1.1. Abstract
***PS. 第三周会讲pytorch***

Office hours: 周四周五 3-5.30pm
Email: deeplearning.fudan@yandex.com

***Textbook***
- 花皮书 (为主)
- 邱 书
- 听不懂,过于垃圾的英语口音

前置课程--统计机器学习

- Final scorce =
  - +Class attendance/discussion (10%);
  - +Homework Assignment (10%)
  - +Projects (40%); 3-4; 每个⼈独⽴完成
  - +Final Project (40%): hit NeurPIS submissions; (每个队最多两个⼈。)

<br/>

- Courses:
  - We will give some tutorial.
- Pain and Happiness:
  - Huge efforts to code, debug, read and think;
  - Worth doing it!!

## 1.2. Conferences
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

## 1.3. Joural
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

# 2. 人工智能
- 符号主义方法
  
- 联结主义方法
  - 近几年的方法,神经元
- 行为主义方法

## 2.1. 机器学习

***什么是机器学习, 机器学习的定义:***

**TEP:**
>A computer program is said to learn from experience **E** with respect to some class of tasks **T** and performance measure **P**, if its performance at tasks in **T**, as measured by **P**, improves with experience **E**.

- T --> Task
- P --> Perfomence measure
- E --> Training experience

## 2.2. 监督学习
1. Given training data
  
  $$
  \{ x_{1},y_{1} \} ^{N}_{i=1}
  $$

2. Choose each of these
   - Decision Function
  
  $$
  \hat{y}=f _\theta (x_i)
  $$
  
  - loss function
  
  $$
  \mathscr{L}(\hat{y},y) \in \mathbb{R}
  $$

3. Define goal
  
  $$
  \theta ^* = arg \underset{\theta}{min} \sum _{i=1} ^N \mathscr{L}(f _\theta (x_i) ,y)
  $$

4. Train with SGD
  (take small steps opposite the gradient)
  
  $$
  \theta ^{(t+1)} = \theta ^{(t)} - \eta _t \nabla \mathscr{L}(f _\theta (x_i) ,y _i)
  $$
  
  i.e. Adam (?)
  *PS.为什么有时候梯度求错了结果反而更好* :D

>梯度下降是一种优化算法，用于寻找一个可微函数的局部最小值。它的思想是在当前点沿着函数的负梯度方向（即最快下降的方向）重复地走一小步，因为这样可以减少函数的值[^1] [^2]
有时候，梯度求错了结果反而更好，可能是因为你遇到了以下情况之一：
- 函数本身不是凸的，有多个局部最小值或鞍点。在这种情况下，正确的梯度可能会导致你陷入一个不理想的局部最小值或鞍点，而错误的梯度可能会让你跳出去，找到一个更好的解[^2]。
- 步长（或学习率）太大，导致你在最优解附近震荡。在这种情况下，正确的梯度可能会让你远离最优解，而错误的梯度可能会让你靠近它[^2]。
- 误差函数有噪声或随机性。在这种情况下，正确的梯度可能不稳定或不准确，而错误的梯度可能恰好与真实的梯度接近[^2]。
不同的函数和数据进行梯度下降，其结果回大有不同


# 3. 神经网络

## 3.1. CNN
- CNN 各层实际上的输入的数据的可视化: 
  ![CNN各层实际上的输入的数据的可视化](https://dsm04pap003files.storage.live.com/y4mCt4Y9P9o8Elp5VAPRz_b2WFM_8CY6spITt-fEO4liM9jr91ySE5RLX4YJQ1pR-sNFr_NkXqmEsZrq1NNMI_Bc0CJNn3tG74d2zk6STNLqiCm45_PbUQirpbSBjGpNNdx6jvKwi88Sa1dwb7fYrgnh901ke3BLMVxlUPDUhAdGrKA7w3uLtBfzeqk7cQvSlQn?width=993&height=783&cropmode=none)
  You can see it, with the increase in layers the detailed features of the images increase. At the very beginning, the images are just matrixes of pixels, but at the end, the images are matrixes of features. You can kinda recognize the objects in the image and eventually their identity is found by CNN.
- 对卷积神经网络如何实现更好的结果的原因仍在研究

# 4. 表示学习 (表征学习)

重要的原因:
- 对于冗余性很大的数据, 比如照片的识别, 就是一个很需要表征学习的内容
- 或者例如如下这张照片, 线性可分的话是不需要的, 但是如果不是线性可分, 就是经常利用表观学习能更容易地得到更好的结果

# 5. 深度学习

## 5.1. 浅层学习 *shallow learning* VS. 深度学习 *deep learning*

### 5.1.1. shallow learning vs. deep learning table:

- concisely:

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

- diffusely:
Here is a table that compares shallow learning and deep learning based on some criteria[^3] [^4] [^5] [^6] [^7] [^8] [^9] [^10] [^11] [^12] [^13] [^14] [^15] [^16]:

| Criteria | Shallow Learning | Deep Learning |
| --- | --- | --- |
| Definition | Learning activities that characterized by recalling and rote memorization. The knowledge gained from shallow learning is considered passive and tends to fade away from our memory. | A type of machine learning based on artificial neural networks in which multiple layers of processing are used to extract progressively higher level features from data. |
| Number of hidden layers | One or none | More than one |
| Computational cost | Low | High |
| Interpretability | High | Low |
| Robustness to overfitting | High | Low |
| Scalability with data | Low, converges at a certain level of performance.  | High, improves with more data. |

### 5.1.2. shallow learning models
- SIFT
- STIP
- SLAM


# 6. 发展历史
![Brief History of AI](https://dsm04pap003files.storage.live.com/y4m55sWvC2yZZBn2ZZiW75vGyMRaOok8mmPTEu9JJyJQGc1eqQbzbK5_FCV-22Y30nizpIA4BYOt0FbWEjD2hhzRF6Tw82FZ3sgOC8EG1b3AjqgJFaXNaQoqGLQ9FP-mYX05pZjLGYr9ClNZWgTgWYnEjkajdEIXl1Lal0tfHcMmRcixv98ipN5N0VyFGpgjmq0?width=1711&height=400&cropmode=none)
- 神经元进入计算领域的视野
- 神经网络的第一次寒冬
- 反向传播算法(Backpropagation, BP)的出现
- "首个" 重要应用, 手写数字识别
- LeNet-5
- 神经网络的第二次寒冬
- 卷⼟重来的（深度）神经⽹络
  原因:
  - 优化策略
    - 梯度弥散问题通过ReLU、Dropout、Deep Residual Learning等⽅法得到缓解
  - 数据规模
    - 真正意义上的⼤数据出现==社会标注(crowdsourcing)机制==出现
  - 计算能⼒
    - CPU、GPU的⻓⾜进步
    - 共享权值
- AlexNet
- 可处理时序数据的深度学习机制
- 大企业不同以往的密切关注
- 开源框架

# 7. DL related examples
## 7.1. The initial shock
来源于语音识别
开始时的模型是GMM (Gaussian Mixture Models, 高斯混合模型), 但是当深度学习到来之后,由于声音是一个一维的数据, 适合于早期的深度学习
## 7.2. Object detection and sagmentation
Autodrive's Objection detection and sagmention already can segmente object in "3D way" now.


---
# 8. PS.
回去看看统计学习
  花书 Ch5
  - 前五章是ML, 要先读懂捏, 寄寄
  - 寄寄力, 寄寄子, 要寄寄力, 呜呜呜

CS2302 *FEIFEI LEE*, computer vision. suitable for selfteaching


# 9. Footnote

[^1]: Gradient descent - Wikipedia. https://en.wikipedia.org/wiki/Gradient_descent Accessed 2/24/2023.

[^2]: What is Gradient Descent? How does it work? - Medium. https://medium.com/analytics-vidhya/what-is-gradient-descent-how-does-it-work-b713fab88349 Accessed 2/24/2023.

[^3]: What is Shallow Learning | IGI Global. https://www.igi-global.com/dictionary/learning-with-immersive-technology/86355 Accessed 2/23/2023.

[^4]: What is the difference between deep learning and shallow learning?. https://ai.stackexchange.com/questions/21219/what-is-the-difference-between-deep-learning-and-shallow-learning Accessed 2/23/2023.

[^5]: https://bing.com/search?q=deep+learning+definition Accessed 2/23/2023.

[^6]: What is Deep Learning and How Does It Works [Updated] - Simplilearn.com. https://www.simplilearn.com/tutorials/deep-learning-tutorial/what-is-deep-learning Accessed 2/23/2023.

[^7]: Deep Neural Networks Vs Shallower Neural Networks: Advantages And .... https://www.surfactants.net/deep-neural-networks-vs-shallower-neural-networks-advantages-and-disadvantages/ Accessed 2/23/2023.

[^8]: What Is Meant By Shallow Learning? – TipsFolder.com. https://tipsfolder.com/meant-shallow-learning-2d2fdc7d26f09cc856f911a271de233c/ Accessed 2/23/2023.

[^9]: Deep vs. shallow learning? | ResearchGate. https://www.researchgate.net/post/Deep_vs_shallow_learning Accessed 2/23/2023.

[^10]: What is the difference between deep learning and shallow learning .... https://ai.stackexchange.com/questions/21219/what-is-the-difference-between-deep-learning-and-shallow-learning Accessed 2/23/2023.

[^11]: Shallow Versus Deep Neural Networks - Coursera. https://www.coursera.org/lecture/introduction-to-deep-learning-with-keras/shallow-versus-deep-neural-networks-3pKHn Accessed 2/23/2023.

[^12]: What is Shallow Learning | IGI Global. https://www.igi-global.com/dictionary/learning-with-immersive-technology/86355 Accessed 2/23/2023.

[^13]: Introduction to Shallow Machine Learning - LinkedIn. https://www.linkedin.com/pulse/introduction-shallow-machine-learning-ayman-mahmoud Accessed 2/23/2023.

[^14]: What is Deep Learning and How Does It Works [Updated] - Simplilearn.com. https://www.simplilearn.com/tutorials/deep-learning-tutorial/what-is-deep-learning Accessed 2/23/2023.

[^15]: Deep learning - Wikipedia. https://en.wikipedia.org/wiki/Deep_learning Accessed 2/23/2023.

[^16]: What is Deep Learning? | IBM. https://www.ibm.com/topics/deep-learning Accessed 2/23/2023.