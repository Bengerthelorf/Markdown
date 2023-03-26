# regularization

> - In statistics, Bühlmann Peter et. al. : "The process of adding information to solve an ill-posed problem or to prevent overfitting.";
> - In deep learning, Goodfellow et. al. : "Any modification we make to a learning algorithm that is intended to reduce its generalization error but not its training error.";
> -  From Bayesian perspective, a maximum posterior estimate is equivalent to the minimization problem defining Tikhonov regularization (a generalized version of L2 regularization).

![regularization](https://dsm04pap003files.storage.live.com/y4m7GrW0BiNLgFA4VUWDTNCmjpEneAcdnQ0P5HvLC6ihfsPSe8-LP2vGFcqhX198Lbu7RREQ5YBemEnmluBTOrvzXRlgWeBnckSIiO1AThzWJy9WG-Nxfedxt2mlQEHgy8rR9OHrboMwdFewuddTA1hrAdx4dJM60pvLLoMQaiPh8ahkHyVVtIhGE0TzfcY2rd-?width=1208&height=467&cropmode=none)

## Priors in Bayesian

what is priors?

- A photo which is highly damage by time, and is definitely unable to recognize nor by human but AI, by if we already know the photo was, and add the description of the photo, the AI will be able to recognize the photo, and generate the original photo.
- for the AIGC, which is hot topic nowaday, it need the description from human to get a better result, and the description itself we call that prior.

# Pealty

# Dataset

> Modifications on the training set

数据增广

## Data augmentation

i.e. RGB to HSV.

intuition: from RGB to HSV, we can get more information about the color.

Date的鲁棒性

### Random crops and scales

For an image that is larger than 224\*224 pixels, say 256\*480 pixels, we can crop it into 10 images of 224\*224 pixels each. These images are the left top, right top, left bottom, right bottom, and center of the original image, as well as their flipped versions. This way, we can get 10 images from one image.

## Learning with noisy labels

## Adversarial Examples