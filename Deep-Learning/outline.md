# Outline of the course

> 课时18周
>
> 考试内容截至到13th课, 如之后有增加内容会再提及

- [Outline of the course](#outline-of-the-course)
  - [课次具体内容](#课次具体内容)
    - [Week 1](#week-1)
    - [Week 2: 数学概念](#week-2-数学概念)
    - [Week 3: 每三周讲一次编程相关](#week-3-每三周讲一次编程相关)
    - [Week 4: 卷积, BP算法](#week-4-卷积-bp算法)
    - [Week 5](#week-5)
    - [Week 6: 训练神经网络的实践](#week-6-训练神经网络的实践)
    - [Week 7: 神经网络的优化](#week-7-神经网络的优化)
    - [Week 8: 神经网络的优化](#week-8-神经网络的优化)
    - [Week 9: 神经网络的优化](#week-9-神经网络的优化)
    - [Week 10: RNN](#week-10-rnn)
    - [Week 11](#week-11)
    - [Week 12](#week-12)
    - [Week 13](#week-13)
    - [Week 14: 待定](#week-14-待定)
    - [Week 15: 待定](#week-15-待定)
    - [Week 16](#week-16)

## 课次具体内容

### Week 1

1. Introduction to Neural Network (Chap 1 of book) 神经网络简介
   1. The history and recent development of Neural Network (NN) and Deep Neural Network (DNN);  神经网络历史简介
   2. Some basic concepts and examples in NN & DNN; 基本概念简介
   3. the dataset (mnist, cifar-10, cifar-100) used in DNN; 数据集简介
   4. An introduction to the coding toolbox of NN & DNN; 神经网络工具包简介

### Week 2: 数学概念

1. Mathematics and Machine learning Basic: (Chap. 2, 3 and 5 of the book) 数学及机器学习内容回顾
   1. A Recap of Math and Programming; 数学及编程回顾
   2. Overview and key concepts of Machine learning and Statistical learning (overfitting) 重点统计机器学习概念回顾(如过拟合)
   3. The motivation of developing DNN. 研究神经网络的动机
   4. "Classical" Neural Network – MLP  经典神经网络
      - Multi-layer perception;  多层感知机
      - Radial basis function and Radial basis function network; 径向基网络等
      - Other types of Neural Network (e.g. Self-organizing map) 自组织神经网络

### Week 3: 每三周讲一次编程相关

Tutorial about Pytorch, Tensorflow, and Mindspore  Portch、Tensorflow及Mindspore教程

### Week 4: 卷积, BP算法

1. Convolutional Neural Network (CNN): (Chap6, Chap 9 of the book) 卷积神经网络
   1. Introduction to CNN  CNN简介
   2. Convolutional layer, pooling, ReLU,  CNN几个基本构件
   3. Different CNN structures for image classification  图像分类的几个CNN
   4. BP algortihm BP算法

### Week 5

1. Regularization of CNN&MLP (Chap 7 of the book) 神经网络的正则化
   1. Weight initialization  权重初始化
   2. L1, L2 regularization  L1、L2正则话
   3. Data augmentation, Early stopping, Dropout  数据增广、早停、Dropout等机制

> 正则化

### Week 6: 训练神经网络的实践

1. Babysitting the training of CNN  训练神经网络实践
   1. Training CNN on cifar10, MNIST 在cifar10等数据集训练
   2. A tutorial of Mixup  Mixup策略
2. Lab: Practical coding issues: SGD, Data augmentation, Batch Normalization;  实验：实用编程技巧、SGD、数据增广、批正则化

### Week 7: 神经网络的优化

1. Optimization for Training Deep Models—Part 1 (Chap 4 and Chap 8.1—8.2 of the book) 神经网络优化(1)
   1. Numerical computing basics  数值计算遇到的问题
   2. Optimization Basics  优化基础
   3. The challenges in Optimization deep neural networks;  训练神经网路的挑战

> 789 神经网络的优化 👉 由此需要数学的基础

### Week 8: 神经网络的优化

1. Optimization for Training Deep Models—Part 2 (Chap 8.3 –8.7 of the book) 神经网络优化(2)
   1. SGD: motivation, implementation, variants, Pros/Cons.  SGD：动机、实现、衍生方法，及优缺点
   2. AdaGrad, RMSProp, Nesterov, Adam: motivation, implementation, variants, Pros/Cons.  AdaGrad, RMSProp等方法简介
   3. Recent Deeplearning Optimizer: ***Lars***, Lamb, DessiLBI  最新的神经网络优化器

> 789 神经网络的优化 👉 由此需要数学的基础
> Lars 重点

### Week 9: 神经网络的优化

1. Optimization Tutorial (Pytorch)  (Chap 11 of the book)  优化的教程
   1. How to write an optimizer for Pytorch?  如何写一个Pytorch优化器
   2. Optimizer code reading: SGD, Nesterov, Adam  优化代码解读
   3. Batch Normalization helps Optimization, (Loss landscape)  为什么批正则化会帮助优化

> 789 神经网络的优化 👉 由此需要数学的基础

### Week 10: RNN

1. Recurrent Neural Network(RNN) (Chap 9 of the book) 循环神经网络
   1. Vanilla methods in modelling Sequential Data: N-gram, HMM, word2vec  处理序列数据的一般方法
   2. Recurrent Neural Networks; 循环神经网络
   3. Variants of RNN, and examples of RNNs  循环神经网络的衍生

### Week 11

1. Long short-term memory (LSTM) and Auto-Encoder (Chap 13, 14 of the book)  LSTM网络及自编码器网络
   1. LSTM models and its variants  LSTM网络及变种
   2. Auto-encoder, U-Net and its variants 自编码器及变种
   3. Transformers  变形器网络
   4. Applications of LSTM, and Autoencoders  模型的应用

### Week 12

1. Lab and Mid-term Review, (Chap 12 of the book)  实验及中期回顾
   1. Works on object detections  物体检测
   2. Learning sequential models  序列化模型学习
   3. OCR examples: text detection, and text recognition  OCR例子等

### Week 13

1. GANs  对抗生成网络
   1. Basics of GANs  GAN的基础
   2. Variants of GANs: DC-GAN, SN-GAN, StyleGAN    GAN的衍生模型
   3. Image Translation and syntheze Examples: CycleGAN, StackGAN   基于GAN的图像处理

### Week 14: 待定

1. Other Advanced Topics: 高级话题
   1. Meta-learning and one-shot learning  元学习及小样本学习
   2. Learning based 3D reconstruction   基于学习的三维重建

### Week 15: 待定

1. Lab: Advanced Topics:  实验：高级题目
   1. examples of one-shot learning  小样本学习例子
   2. examples of meta-learning   元学习的例子
   3. Examples of learning based 3D reconstruction   基于学习的三维重建例子

### Week 16

Summary and Review  总结及课程回顾
