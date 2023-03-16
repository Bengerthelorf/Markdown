# CNN

different nurons respond to different features, like a line, a curve, a circle, etc.

[Receptive field](https://www.wikiwand.com/en/Receptive_field)

# image 

classical

## Key Ideas of Conv-Net in a nutshell

- Local connectivity for sparse interactions
- Parameter sharing
- Convolutiona
- Pooling or subsampling hidden units

# Convolution Operator

## how to sharp a blurred image

## LeNet

## Convolutional Neural Networks

Zero padding

> i.e.
> 
> the image is 32x32, and the filter is 5x5, so the output is 28x28. But we want the output to be 32x32, so we add 2 zeros to each side of the image.

图片的训练结果会有损失, 所以需要padding

但是也要注意, padding的大小不能太大, 否则会导致图片的信息丢失, 但是在一定情况下这也是合理的, 比如是为了让不同来源的数据大小不一致也通过加padding来统一大小, 这个时候padding的大小就可以很大.

### Summary

## pooling layer

back to 2006 when 'average pooling' was more popular, but then 'max pooling' was more popular nowadays.

