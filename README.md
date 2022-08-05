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

### How to start Developer Powershell for x64

#### Upgrade a regular shell
1. Start "Powershell"
2. Run: `Enter-VsDevShell ddd73222 -DevCmdArguments '-arch=x64'`

#### Make a shortcut
1. Press the Windows button
2. Write "Developer Powershell"
3. Right-click "Developer PowerShell for VS 2022"
4. Click "Open File Location" (please confirm that this is right, might be named something else, I'm not on english Windows)
5. Make a copy of "Developer PowerShell for VS 2022" in Explorer
6. Right-click your copy of "Developer PowerShell for VS 2022"
7. Click "Properties"
8. Under "Target", Change `Enter-VsDevShell ddd73222}"` to `Enter-VsDevShell ddd73222 -DevCmdArguments '-arch=x64'}"`
9. (Optional) Rename the shortcut to have x64 in the name
10. In the Windows Start Menu, you can now find the Developer Powershell x64 shortcut you made

### Building

1. Start a Developer Powershell for x64, see above on how to start a Developer Powershell
2. Enter the following commands:
```
git clone https://github.com/saikyun/sdl-lessons
cd sdl-lessons
.\scripts\download-deps.ps1
.\scripts\compile-and-run.ps1
```
