# sdl-lessons


## Windows

### Dependencies

#### [Git](https://git-scm.com/download/win)

#### [Visual Studio Build Tools](https://visualstudio.microsoft.com/downloads/)

1. Click "Tools for Visual Studio"

![image](https://user-images.githubusercontent.com/2477927/183065613-58685354-21ec-4329-b493-11c6096df1bb.png)

2. Then next to "Build Tools for Visual Studio 2022" click "Download"

![image](https://user-images.githubusercontent.com/2477927/183065636-309d4059-8a47-40d2-8d3d-b10b08192c41.png)

3. Select "Desktop development with C++"

![image](https://user-images.githubusercontent.com/2477927/183066206-49c49aad-63e2-42b4-ad20-a58822741dbe.png)

4. The defaults should be enough. Pretty sure you need Windows 10 SDK for shell32.lib.

![image](https://user-images.githubusercontent.com/2477927/183066422-2b9706cf-ced8-48ec-963b-ab7315399a93.png)

5. Click Install.

### Enable running remotely signed Powershell Scripts

1. Start "Powershell"
2. Run: `Start-Process powershell -Verb runas`
3. In the new Admin shell run: `Set-ExecutionPolicy RemoteSigned` in order to be able to run the build scripts
   1. This allows essentially any powershell scripts to run on your system

As an alternative, you can just copy/paste the contents of the ps1 scripts mentioned below.

### Building

1. Start a Developer Powershell for x64 (see below if you don't know how)
2. Verify that you have x64 cl.exe by running: `cl`
   1. You should get: (specifically the `for x64` part)
   ```
   Microsoft (R) C/C++ Optimizing Compiler Version 19.32.31332 for x64
   Copyright (C) Microsoft Corporation.  All rights reserved.
   ```
3. Enter the following commands:
```
git clone https://github.com/saikyun/sdl-lessons
cd sdl-lessons
.\scripts\download-deps.ps1
.\scripts\compile-and-run.ps1
```

### How to start Developer Powershell for x64

#### Add to Terminal
1. Start Terminal
   1. If you're lucky, you can just click "+" then `Developer PowerShell for VS 2022`
   2. Otherwise, follow the steps below
2. Click the arrow next to the "+" button
3. Click "Add a new profile"
4. In "Name", put: `Developer PowerShell for VS 2022`
5. In "Command Line", put: `powershell.exe -NoExit -Command "&{Import-Module """C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\Tools\Microsoft.VisualStudio.DevShell.dll"""; Enter-VsDevShell ddd73222 -SkipAutomaticLocation -DevCmdArguments """-arch=x64 -host_arch=x64"""}"`
   1. The `Import-Module` path might not be the right one, if it doesn't work, try following the steps in "Create a shortcut", but instead of copying the shortcut, just take the text in "Target", and modify the final part to contain `-SkipAutomaticLocation -DevCmdArguments """-arch=x64 -host_arch=x64`

#### Create a shortcut
1. Press the Windows button
2. Write "Developer Powershell"
3. Right-click "Developer PowerShell for VS 2022"
4. Click "Open File Location" (please confirm that this is right, might be named something else, I'm not on english Windows)
5. Make a copy of "Developer PowerShell for VS 2022" in Explorer
6. Right-click your copy of "Developer PowerShell for VS 2022"
7. Click "Properties"
8. Under "Target", Change `Enter-VsDevShell ddd73222}"` to `Enter-VsDevShell ddd73222 -SkipAutomaticLocation -DevCmdArguments '-arch=x64'}"`
9. (Optional) Rename the shortcut to have x64 in the name
10. In the Windows Start Menu, you can now find the Developer Powershell x64 shortcut you made
