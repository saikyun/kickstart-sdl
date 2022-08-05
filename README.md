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

### Building

0. Start "Powershell"
   1. Run: `Start-Process powershell -Verb runas`
   2. In the new Admin shell run: `Set-ExecutionPolicy RemoteSigned` in order to be able to run the build scripts
      1. This allows essentially any powershell scripts to run on your system
      2. As an alternative, you can just copy/paste the contents of the ps1 scripts mentioned below
1. Start "Developer PowerShell for VS 20XX"
2. Enter the following commands:
```
git clone https://github.com/saikyun/sdl-lessons
cd sdl-lessons
.\scripts\download-deps.ps1
.\scripts\compile-and-run.ps1
```
