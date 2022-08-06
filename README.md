# sdl-lessons

## Windows

### Visual Studio Build Tools / Developer PowerShell for VS 2022 / cl.exe

This includes all that's needed to compile C projects that includes SDL.

Follow the steps [here](https://github.com/saikyun/install-cl).

If you're unsure if you have this, press Windows Start Menu and search for "Developer Powershell for VS 2022". Open it, then run `cl`, which should print something like:

```
Microsoft (R) C/C++ Optimizing Compiler Version 19.32.31332 for x64
Copyright (C) Microsoft Corporation.  All rights reserved.
```

Make sure it's says `for x64`.

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

1. Open Terminal
  1. If you can't find Terminal in the Windows Start Menu, download it from the [Microsoft Store](https://apps.microsoft.com/store/detail/windows-terminal/9N0DX20HK701)
2. (Optional) Change default startup directory
   1. Click the arrow next to the `+` button
   2. Click "Settings"
   3. Under "Profiles", click "Defaults"
   4. Set "Starting Directory" to the directory where you want to keep your projects
   5. Click "Save"
2. Click the arrow next to the `+` button, and choose "Developer PowerShell for VS 2022"
3. Run the following commands:
```
git clone https://github.com/saikyun/sdl-lessons
cd sdl-lessons
.\scripts\download-deps.ps1
```

### Building

In the Developer PowerShell tab, run:

```
.\scripts\compile-and-run.ps1
```

This should result in a blank window showing for 1 second, if so: good job! If not: blame me! (Please create an issue.)
