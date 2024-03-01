# 1st

## 1.1 图像的历史

### 1.1.1 早期的医学图像

达芬奇认为人的两手张开的连线与人的身长相等, 这称为: Vitruvian

![Vitruvian Man](https://upload.wikimedia.org/wikipedia/commons/thumb/2/22/Da_Vinci_Vitruve_Luc_Viatour.jpg/405px-Da_Vinci_Vitruve_Luc_Viatour.jpg)

第一个医学图像出现在1895年, 由德国的Wilhelm Conrad Roentgen发现, 他发现了X射线, 他的第一张X光片是他妻子的手, 他的妻子说: "我看到了我的骨头"

1950年代出现第一张...

1960年代出现人体超声

1970年代出现MRI

## 1.2 图像的原理

### 1.2.3 X射线

波长与频率的关系

光子能量达到一定阈值的时候会出现离子化的现象

> 离子化:
>
> 电子被光子击中后, 电子被击出原子, 电子被击出原子后, 原子变成了离子 (电子被打飞)
>
> > *四种形式*

### 1.2.4 CT

其原理和X射线类似.

但是不同的是: 将X线沿着不同角度投射出去, 旋转一周, 会得到一系列的X射线图像, 通过计算机算法, 可以得到一个三维的图像

密度: 空气0, 水1000.

CT示例:

### 1.2.5 MRI

MRI原理是依赖于氢原子, 人体不同组织种的氢原子的密度是不一样的, 于是对不同组织的氢原子的密度进行成像就可以将人体的结构呈现出来

能量状态

In quantum mechanics, the energy of nuclear has mutiple values. (?)

#### 1.2.5.1. dynamic equilibrium

> 在磁共振成像（MRI）的原理中，动态平衡指的是在快速梯度回波（Rapid Gradient Echo, GRE）序列中，经过一系列初始的瞬态状态后，系统达到一个稳定状态，其中纵向磁化强度（Mz）和横向磁化强度（Mxy）在每个重复时间（TR）间保持不变。这种状态下，尽管磁共振信号的产生和衰减在不断进行，但由于正反两个过程的速率相等，系统的宏观状态不会发生变化。这使得MRI能够在不同的TR和TE（回波时间）条件下，重复地获取稳定的图像信号¹。
>
> 动态平衡是实现快速成像的关键，特别是在需要连续或重复成像的应用中，如功能性MRI（fMRI）或动态对比增强MRI（DCE-MRI）中。²³
>
> Source: Conversation with Bing, 3/1/2024
>
> (1) Pulse Sequences: Rapid Gradient Echo - University of California, Los .... <https://labs.dgsom.ucla.edu/file/92487/M229_Lecture4_PulseSeqGRE.pdf>.
>
> (2) Principles of Magnetic Resonance Imaging (MRI) | Radiology Key. <https://radiologykey.com/principles-of-magnetic-resonance-imaging-mri/>.
>
> (3) The Basic Principles of Dynamic Contrast–Enhanced ... - Radiology Key. <https://radiologykey.com/the-basic-principles-of-dynamic-contrast-enhanced-magnetic-resonance-imaging/>.
>
> (4) What Is Dynamic Equilibrium? Definition and Examples - PrepScholar. <https://blog.prepscholar.com/what-is-dynamic-equilibrium-definition-example>.
>
> (5) 15.3: The Idea of Dynamic Chemical Equilibrium. <https://chem.libretexts.org/Bookshelves/Introductory_Chemistry/Map%3A_Introductory_Chemistry_%28Tro%29/15%3A_Chemical_Equilibrium/15.03%3A_The_Idea_of_Dynamic_Chemical_Equilibrium>.
>
> (6) Bloch Equation Simulation. <http://www-mrsrl.stanford.edu/~brian/bloch/>.

#### 1.2.5.2. disturbing the equilibrium

relaxation:

- spin-spin relaxation
- spin-lattice relaxation

> **自旋-自旋弛豫（Spin-Spin Relaxation）**：
>
> - **定义**：自旋-自旋松弛是指在核磁共振（NMR）和磁共振成像（MRI）中，横向磁化向量的分量 \( M_{xy} \) 向其平衡值指数级衰减的过程。
> - **特征时间**：被称为 \( T_2 \) 的自旋-自旋松弛时间，是一个表征信号衰减的时间常数。
> - **原理**：当激发的核自旋（即部分位于横向平面的自旋）通过采样微观和纳米尺度上的局部磁场不均匀性时，它们各自累积的相位会偏离预期值。
>
> **自旋-点阵弛豫（Spin-Lattice Relaxation）**：
>
> - **定义**：自旋-点阵松弛是指在核磁共振观测中，总核磁矩向量的纵向分量（平行于恒定磁场）从较高能量的非平衡状态指数级松弛到与其周围环境（晶格）的热力学平衡状态的过程。
> - **特征时间**：被称为 \( T_1 \) 的自旋-点阵松弛时间，是一个表征纵向磁化分量恢复到其热力学平衡的速率的时间常数。
> - **原理**：核内部的热运动产生的磁场称为晶格场。晶格场可以与处于较高能量状态的核相互作用，导致较高能量状态的能量在两个核之间分配。因此，从射频脉冲获得的能量以样品温度略微升高的形式耗散。¹⁵。
>
> Source: Conversation with Bing, 3/1/2024
>
> (1) Spin–spin relaxation - Wikipedia. <https://en.wikipedia.org/wiki/Spin%E2%80%93spin_relaxation>.
>
> (2) Spin–lattice relaxation - Wikipedia. <https://en.wikipedia.org/wiki/Spin%E2%80%93lattice_relaxation>.
>
> (3) Spin-lattice and spin-spin relaxation - UCL. <https://www.ucl.ac.uk/nmr/sites/nmr/files/L5_3SH_web_shortened.pdf>.
>
> (4) T2 relaxation | Radiology Reference Article | Radiopaedia.org. <https://radiopaedia.org/articles/t2-relaxation>.
>
> (5) Relaxation - Chemistry LibreTexts. <https://chem.libretexts.org/Bookshelves/Physical_and_Theoretical_Chemistry_Textbook_Maps/Supplemental_Modules_%28Physical_and_Theoretical_Chemistry%29/Spectroscopy/Magnetic_Resonance_Spectroscopies/Nuclear_Magnetic_Resonance/NMR_-_Theory/Relaxation>.
>
> (6) Spin-lattice relaxation: Understanding the Dynamics of Magnetic .... <https://lambdageeks.com/spin-lattice-relaxation/>.
>
> (7) T1 relaxation time | Radiology Reference Article | Radiopaedia.org. <https://radiopaedia.org/articles/t1-relaxation-time>.

---

## Imaging - Slice Selection

$$
\omega(z) = \gamma ( B_0 + G_z z )
$$

加梯度(?)

> 在MRI中，梯度指的是在主磁场中引入的一个小的、可控的磁场变化，这个变化是沿着特定方向线性的。通过在不同的空间方向上施加梯度，可以使得原子核的共振频率随位置变化，这样就可以对MR信号进行空间编码。简单来说，梯度是用来确定MR信号来源于身体的哪个位置的工具。
>
> 在MRI扫描过程中，梯度线圈会产生快速变化的磁场，这些变化的磁场会导致体内氢原子核的共振频率随位置而变化。这种频率的变化允许我们将MR信号编码到具体的空间位置，从而能够构建出三维的图像。例如，如果在切片选择期间和信号读取期间施加梯度，就可以选择垂直于梯度方向的切片¹²³⁴。
>
> 因此，在MRI中提到“加梯度”，实际上是指在扫描过程中使用梯度线圈来产生特定的磁场变化，以实现对体内不同区域的精确定位和成像。这是MRI技术中非常关键的一部分，使得MRI能够提供高分辨率的图像。¹²³⁴
>
> Source: Conversation with Bing, 3/1/2024
>
> (1) The Gradient System. - Questions and Answers in MRI. <https://mriquestions.com/uploads/3/4/5/7/34572113/gradientsismrm2013-007379.pdf>.
>
> (2) Gradient coils - Questions and Answers in MRI. <https://mriquestions.com/gradient-coils.html>.
>
> (3) Inside the MRI: Gradient Coils | Amber Diagnostics. <https://www.amberusa.com/blog/gradient-coils-inside-mri-what-you-need-to-know/>.
>
> (4) MRI instrumentation and safety: magnetic field gradients | e-MRI - IMAIOS. <https://www.imaios.com/en/e-mri/mri-instrumentation-and-mri-safety/magnetic-field-gradients>.

## 课程内容

- 重建
- 增强
- 分割
- 配准

## 评分

- 作业 30% (数学和编程)
    > 4次作业, 可以申请晚交, 最迟晚交1W
- 期中考试 35%
- 期末考试 35%

> 考试形式和作业相似
