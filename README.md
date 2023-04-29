***If you would like to contribute to this project, you can fork the project and submit a pull request.***

- [Preparation](#preparation)
  - [For Windows users](#for-windows-users)
    - [Windows 10 or above](#windows-10-or-above)
      - [Command line (Recommended)](#command-line-recommended)
      - [GUI](#gui)
    - [Windows 7 or 8](#windows-7-or-8)
  - [For Linux Users](#for-linux-users)
    - [Ubuntu and Debian:](#ubuntu-and-debian)
    - [Fedora:](#fedora)
  - [For Mac Users](#for-mac-users)
    - [macOS 10.9 or above](#macos-109-or-above)
      - [Command line](#command-line)
      - [GUI](#gui-1)
    - [MacOS 10.8 or earlier](#macos-108-or-earlier)
  - [For Android Users](#for-android-users)
    - [Termux](#termux)
- [Usage](#usage)
- [Some extra tips for Android](#some-extra-tips-for-android)
  - [Termux](#termux-1)
- [PS](#ps)

# Preparation

## For Windows users

### Windows 10 or above

#### Command line (Recommended)

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

## For Linux Users

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

## For Mac Users

### macOS 10.9 or above

#### Command line

```bash
brew install git
brew cask install visual-studio-code
```

#### GUI

you can download the installers from the official websites: [Git](https://git-scm.com/download/mac) and [VSCode](https://code.visualstudio.com/Download)

### MacOS 10.8 or earlier

you can download the installers from the official websites: [Git](https://git-scm.com/download/mac) and [VSCode](https://code.visualstudio.com/Download)

## For Android Users

You can use [Termux](https://termux.com/) to install `git`, and use `Obsidian` as an alternative to `VSCode` to edit and view your documents.

### Termux

Using the command line below to install `git`.

```bash
pkg install git
```

# Usage

After installing `git` and `VSCode`, you can clone this project and open it in `VSCode`.

```bash
git clone https://github.com/Bengerthelorf/Markdown.git
```

Don't forget to set your own username and email in git.

```bash
git config --global user.name "your name"
git config --global user.email "your email"
```

Then open the project in VSCode and install the recommended extensions: `Markdown All in One`, `Markdown Preview Enhanced`, `Markdown Preview Mermaid Support`, and `Markmap`.

After that, you can edit the Markdown files in the `Markdown` folder and use the `Markdown Preview Enhanced` extension to preview the changes, which you should be able to view simply by using `Ctrl+Shift+V`.

You can use the `Git` shortcut on the left sidebar of VSCode to commit your changes.

# Some extra tips for Android

## Termux

You need to run the command below to enable the internal storage, ...

termux-setup-storage

# PS

- About branches, I've created 4 branches and each branch has its own purpose, so please check what the branch name stands for before you start editing files.
    > For example, this branch is for `medical-related documents`.
- If you want to be a collaborator, please contact me via my email.
- About markdown guide, you can find it [here](https://www.markdownguide.org/). Check and learn it before you start.
- If you have any questions, please contact me via my email.
- Check the [todo list](/Todo.md) to see what you can do. And maybe you would like to add some new stuff to the list.

---

Due to [pediatric course website](icc.hep.com.cn) does not allow downloading files, I've written a python script to download files, you can find it [here](/iccDownload.py), and I also translated it into a [c++ version](/iccDownload.cpp), you can compile it and run it on your own computer.
