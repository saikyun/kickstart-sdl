# sdl-lessons

## Windows

### Install git

1. Go to https://git-scm.com/download/win
2. Click "64-bit Git for Windows Setup."
3. Run the .exe and follow the instructions

### Enable running remotely signed PowerShell Scripts

This allows essentially any PowerShell scripts to run on your system. This is done so that you can run the included .ps1 script for downloading dependencies and building.

As an alternative, you can just copy / paste the contents of the .ps1 scripts mentioned below, into your PowerShell.

1. Open an Admin PowerShell by opening Windows Start Menu, search for `Windows PowerShell`, right click and click "Start as Administrator"
2. In the new Admin shell run: `Set-ExecutionPolicy RemoteSigned`
3. Close the Admin shell

### Clone repo, install build tools and SDL

1. Open `Windows PowerShell`
2. Run the following commands:
```
git clone https://github.com/saikyun/sdl-lessons
cd sdl-lessons
.\scripts\install-build-tools.ps1
.\scripts\download-deps.ps1
```
3. Close PowerShell

### Building

1. Start Terminal (open Windows Start Menu, then write `Terminal`)
   1. If you can't find Terminal, download it from the [Microsoft Store](https://apps.microsoft.com/store/detail/windows-terminal/9N0DX20HK701)
2. Click the arrow next to the `+` button, and choose "Developer PowerShell for VS 2022"
3. Enter the following commands:
```
cd sdl-lessons
.\scripts\compile-and-run.ps1
```

This should result in a blank window showing for 1 second, if so: good job! If not: blame me! (Please create an issue.)

### Troubleshooting

If when compiling, it complains about the target architecture, make sure the x64 `cl.exe` is running by opening your Developer PowerShell and run `cl`.

You should get something like this, the important part is `for x64`:
```
Microsoft (R) C/C++ Optimizing Compiler Version 19.32.31332 for x64
Copyright (C) Microsoft Corporation.  All rights reserved.
```
