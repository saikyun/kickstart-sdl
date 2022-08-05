$source = 'https://github.com/libsdl-org/SDL/releases/download/release-2.0.22/SDL2-devel-2.0.22-VC.zip'
Invoke-RestMethod -Uri $source -OutFile SDL.zip
Expand-Archive -LiteralPath SDL.zip -DestinationPath .
Rename-Item SDL2-2.0.22 SDL

New-Item build -ItemType "directory"
Copy-Item SDL\lib\x64\SDL2.dll build

# Cleanup
Remove-Item SDL.zip