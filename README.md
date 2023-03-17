***If you want to contribute to the project, you can fork the project and submit a pull request.***

- [Installation](#installation)
  - [For windows Users](#for-windows-users)
    - [Windows 10 or above](#windows-10-or-above)
      - [command line (Recommeded)](#command-line-recommeded)
      - [GUI](#gui)
    - [Windows 7 or 8](#windows-7-or-8)
  - [For Linux Users](#for-linux-users)
    - [Ubuntu and Debian](#ubuntu-and-debian)
    - [Fedora](#fedora)
  - [For Mac Users](#for-mac-users)
    - [Mac OS X 10.9 or above](#mac-os-x-109-or-above)
      - [command line](#command-line)
      - [GUI](#gui-1)
    - [Mac OS X 10.8 or below](#mac-os-x-108-or-below)
- [Usage](#usage)

# Preparation
## For windows Users
### Windows 10 or above

#### command line (Recommeded)

You can use windows native package manager `winget` to install `git` and `vscode`.

First, get [App Installer from the Microsoft Store](https://apps.microsoft.com/store/detail/app-installer/9NBLGGH4NNS1?hl=en-ca&gl=ca&rtc=1). If it's already installed, make sure it is updated with the latest version.

Open powershell and type the following commands.

```powershell
winget install --id "Git.Git" --source "winget"
wnget install --id "Microsoft.VisualStudioCode" --source "winget"
```

#### GUI

You can also download the installer from the official website.

### Windows 7 or 8

Since windows 7 and 8 can't install `winget`, you can download the installer from the official website.

## For Linux Users

### Ubuntu and Debian

```bash
sudo apt install git
sudo snap install --classic code
```

### Fedora

```bash
sudo dnf install git
sduo dnf install code
```

## For Mac Users

### Mac OS X 10.9 or above

#### command line 

```bash
brew install git
brew cask install visual-studio-code
```

#### GUI

you can download the installer from the official website.

### Mac OS X 10.8 or below

you can download the installer from the official website.

## For Android Users

You can use [Termux](https://termux.com/) to install `git`. Additionally, you can employ `Obsidian` as a substitute for `VSCode` to edit and view your documents.

### Termux

Using the command line below to install `git`.

```bash
pkg install git
```

# Usage

After installing `git` and `vscode`, you can clone the project and open it in vscode.

```powershell
git clone https://github.com/Bengerthelorf/Markdown.git
```

Don't forget to set your own username and email in git.

```powershell
git config --global user.name "your name"
git config --global user.email "your email"
```

Than open the project in vscode, and install the recommended extensions: `markdown all in one`, `Markdown Preview Enhanced`, `Markdown preview Mermaid support` and `Markmap`

After that, you can edit the markdown files in the `Markdown` folder, and use the `markdown preview enhanced` to preview the changes, which shall be able to view simply by using `ctrl+shift+v`.

You can use the `git` shortcut on the left sidebar of vscode to commit your changes.

# Some extra tips for Android

## Termux

You need to run the command below to enable the internal storage, 
