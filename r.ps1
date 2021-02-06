Set-Location build/;
cmake ../;
cmake --build .;

./Debug/graphics.exe;
Set-Location ../;