***If you want to contribute to the project, you can fork the project and submit a pull request to me.***

- [Preparation](#preparation)
  - [For Windows users](#for-windows-users)
    - [Windows 10 or later](#windows-10-or-later)
      - [command line (Recommeded)](#command-line-recommeded)
      - [GUI](#gui)
    - [Windows 7 or 8](#windows-7-or-8)
  - [For Linux users](#for-linux-users)
    - [Ubuntu and Debian:](#ubuntu-and-debian)
    - [Fedora:](#fedora)
  - [For Mac users](#for-mac-users)
    - [macOS 10.9 or later](#macos-109-or-later)
      - [command line](#command-line)
      - [GUI](#gui-1)
    - [macOS 10.8 or earlier](#macos-108-or-earlier)
  - [For Android users](#for-android-users)
    - [Termux](#termux)
- [Usage](#usage)
- [Some extra tips for Android](#some-extra-tips-for-android)
  - [Termux](#termux-1)
- [PS](#ps)

# Preparation

## For Windows users

### Windows 10 or later

#### command line (Recommeded)

You can use Windows native package manager winget to install `git` and `VSCode`.

First, get [App Installer from the Microsoft Store](https://apps.microsoft.com/store/detail/app-installer/9NBLGGH4NNS1?hl=en-ca&gl=ca&rtc=1). If it's already installed, make sure it is updated with the latest version.

Open powershell and type the following commands.

```powershell
winget install --id Git.Git --source winget
winget install --id Microsoft.VisualStudioCode --source winget
```

#### GUI

You can also download the installers from the official websites: [Git](https://git-scm.com/download/win) and [VSCode](https://code.visualstudio.com/Download)

### Windows 7 or 8

Since Windows 7 and 8 do not support `winget`, you can download the installers from the official websites.

## For Linux users

### Ubuntu and Debian:

```bash
sudo apt install git
sudo snap install --classic code
```

### Fedora:

```bash
sudo dnf install git
sduo dnf install code
```

## For Mac users

### macOS 10.9 or later

#### command line

```bash
brew install git
brew cask install visual-studio-code
```

#### GUI

you can download the installers from the official websites: [Git](https://git-scm.com/download/mac) and [VSCode](https://code.visualstudio.com/Download)

### macOS 10.8 or earlier

you can download the installers from the official websites: [Git](https://git-scm.com/download/mac) and [VSCode](https://code.visualstudio.com/Download)

## For Android users

You can use [Termux](https://termux.com/) to install `git`. And using `Obsidian` as an alternative to `VSCode` to edit and view your documents.

### Termux

Using the command line below to install `git`.

```bash
pkg install git
```

# Usage

After installing `git` and `VSCode`, you can clone the project and open it in VSCode.

```bash
git clone https://github.com/Bengerthelorf/Markdown.git
```

Don't forget to set your own username and email in git.

```bash
git config --global user.name "your name"
git config --global user.email "your email"
```

Then open the project in VSCode and install the recommended extensions: `Markdown All in One`, `Markdown Preview Enhanced`, `Markdown Preview Mermaid Support`, and `Markmap`.

After that, you can edit the Markdown files in the `Markdown` folder and use the `Markdown Preview Enhanced` extension to preview the changes. You can view the preview by pressing `Ctrl+Shift+V`.

You can use the `Git` shortcut on the left sidebar of VSCode to commit your changes.

# Some extra tips for Android

## Termux

You need to run the command below to enable the internal storage, ...

termux-setup-storage

# PS

- For the branch, I've created 4 branches and each branch has its own purpose, so please check what the branch name stands for before you start to edit the files.
    > For example, this branch is for `medicine`.
- If you want to be a collaborator, please contact me via my email.
- For the guide for markdown, you can find it [here](https://www.markdownguide.org/). Check and learn it before you start.
- If you have any questions, please contact me via my email.
- Check the [todo list](/Todo.md) to see what you can do. And maybe you would like to add some new stuff to the list.

---

Due to the [class website of pediatrics](icc.hep.com.cn) is not allow to download the files, I've write a python script to download the files, you can find it [here](/iccDownload.py), and I also translate that into a [c++](/iccDownload.cpp) version, you can compile it and run it on your own computer.