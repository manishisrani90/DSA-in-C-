# Build and run tests (PowerShell)
$gpp = "C:\\MinGW\\bin\\g++.exe"
if (-not (Test-Path $gpp)) { $gpp = "g++" }

Write-Host "Compiling tests with: $gpp"
& $gpp -std=c++17 test_ragdapetis.cpp -o test_ragdapetis.exe -I .
if ($LASTEXITCODE -ne 0) {
    Write-Error "Compilation failed. Ensure Boost headers are installed and in include path."
    exit 1
}

Write-Host "Running tests..."
./test_ragdapetis.exe
exit $LASTEXITCODE
