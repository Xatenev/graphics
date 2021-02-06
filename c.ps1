Set-Location build/;
cmake ../;
cmake --build .;

if($args[0] -and $args[0].equals("r")) {
    ./Debug/graphics.exe;
}
Set-Location ../;

Read-Host -Prompt "Press Enter to exit"