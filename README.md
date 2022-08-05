# sdl-lessons


## Windows

### Enable running remotely signed PowerShell Scripts

1. Open an Admin shell, either:
   - Open PowerShell, run: `Start-Process powershell -Verb runas`
   - In Windows Start Menu, search for `Windows PowerShell`, right click and click "Start as Administrator"
2. In the new Admin shell run: `Set-ExecutionPolicy RemoteSigned` in order to be able to run the build scripts
   1. This allows essentially any powershell scripts to run on your system
3. Close the Admin shell

As an alternative, you can just copy / paste the contents of the ps1 scripts mentioned below, into your PowerShell.

### Clone repo

In PowerShell, run the following:
```
git clone https://github.com/saikyun/sdl-lessons
cd sdl-lessons
```

### Install build tools

Run: `.\scripts\install-build-tools.ps1`

### Building

1. Start Terminal (open Windows Start Menu, then write `Terminal`)
2. Click the arrow next to the `+` button, and choose "Developer PowerShell for VS 2022"
2. Verify that you have cl.exe for x64 by running `cl`
   1. You should get something like this, the important part is `for x64`:
   ```
   Microsoft (R) C/C++ Optimizing Compiler Version 19.32.31332 for x64
   Copyright (C) Microsoft Corporation.  All rights reserved.
   ```
3. Enter the following commands:
```
cd sdl-lessons
.\scripts\download-deps.ps1
.\scripts\compile-and-run.ps1
```

This should result in a blank window showing for 1 second, if so: good job! If not: blame me! (Please create an issue.)
