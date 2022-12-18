# kickstart-sdl

Guide and scripts for getting started with C and SDL quickly.

## MacOS

### Prerequisites

* Xcode command line tools (for Git & clang)
* SDL2 dev files

To install these automatically, first open a terminal, then write git. MacOS will ask you to install Xcode command line tools. Press Yes.

After that, you can run the following:
```
git clone https://github.com/saikyun/kickstart-sdl
cd kickstart-sdl
chmod u+x ./scripts/macos/*
./scripts/macos/download-deps
```
This will build and install SDL.

### Building & running

```
./scripts/macos/compile-and-run
```

You should now see a white window, that you can close by clicking the red close button.

## Windows

### Prerequisites

* Git
* Visual Studio Build Tools
* SDL2 dev files

Follow along the steps below to install these automatically. They are tested on Windows 11.

### Enable running remotely signed PowerShell Scripts

This allows essentially any PowerShell scripts to run on your system. This is done so that you can run the included .ps1 scripts for downloading dependencies and building.

As an alternative, you can just copy / paste the contents of the .ps1 scripts mentioned below, into your PowerShell.

1. Open an Admin PowerShell by opening Windows Start Menu, search for `Windows PowerShell`, right click and click "Start as Administrator"
2. In the new Admin shell run: `Set-ExecutionPolicy RemoteSigned`
3. Press `Y` then Enter.
4. Close the Admin shell

### Install Git and Visual Studio Build Tools

1. Start Windows PowerShell
2. Copy / paste the following commands:
```
# install git
winget install --id Git.Git -e --source winget

# install build tools
Invoke-RestMethod -Uri https://aka.ms/vs/17/release/vs_buildtools.exe -OutFile vs_buildtools.exe
Start-Process -FilePath vs_buildtools.exe -ArgumentList "--add", "Microsoft.VisualStudio.Component.VC.Tools.x86.x64", "--add", "Microsoft.VisualStudio.Component.Windows10SDK.19041", "--norestart", "--passive", "--wait" -Wait -PassThru
Remove-Item vs_buildtools.exe
```
3. Close PowerShell

### Set up Terminal & clone repo

1. Open Terminal
   1. If you can't find Terminal in the Windows Start Menu, download it from the [Microsoft Store](https://apps.microsoft.com/store/detail/windows-terminal/9N0DX20HK701)
2. Set Terminal Starting Directory
   1. Click the arrow next to the `+` button
   2. Click "Settings"
   3. Under "Profiles", click "Defaults"
   4. Set "Starting Directory" to the directory where you want to keep your projects
   5. Click "Save"
3. Click the arrow next to the `+` button, and choose "Developer PowerShell for VS 2022"
4. Run the following commands:
```
git clone https://github.com/saikyun/kickstart-sdl
cd kickstart-sdl
```

**From now on, all commands are expected to run in the `kickstart-sdl` directory using the "Developer PowerShell for VS 2022"**

### Download SDL2 dev files

Run:
```
.\scripts\windows\download-deps.ps1
```

### Build and run

Run:
```
.\scripts\windows\compile-and-run.ps1
```

This should result in a white window showing, that you can close by clicking the X button in the top right.

If not, please create an issue.

### Summary

You have now:
* Installed git
* Installed Visual Studio Build Tools, which includes the C compiler cl.exe
* Cloned the kickstart-sdl repo
* Downloaded SDL2 dev files
* Compiled and ran the sample program

Your kickstart-sdl folder should have the following structure:
```
src/      # your source code
SDL/      # SDL dev files
scripts/  # scripts for downloading dependencies and building
build/    # where your .exe ends up, and where SDL2.dll is
```

You are now ready to start writing C programs using SDL!

If you are curious about exactly what happens in the .ps1-files, feel free to read them. They're pretty short.
