# msvc8.0

This repository contains a portable version of the MSVC 8.0 x86 toolchain, inspired by [itsmattkc/MSVC420](https://github.com/itsmattkc/MSVC420). All files were extracted from the [Visual Studio 2005 Professional Edition installation media](https://archive.org/details/en_vs_2005_pro_dvd_202207) via installation on a [Windows XP Pro SP3 VM](https://archive.org/details/xp51_20191108). The root directory of the repository contains files extracted from the `VC` directory of the installation media, with non-x86 files removed. Additionally, the `mspdb*.*` and `msobj*.dll` files were extracted from the `Common7\IDE` directory of the installation media and added to the `bin` directory. Finally, the `bin/vcvars32.bat` file was modified to work with the portable toolchain.

To use the portable toolchain, simply clone the repository or use the "Download ZIP" option under the green "Code" dropdown and run `bin/vcvars32.bat` from `cmd.exe`. This will add `bin` and `PlatformSDK\bin` to the `PATH` environment variable giving you access to `cl`, `link`, `lib`, and other tools. Also, `ATLMFC\INCLUDE`, `INCLUDE`, and `PlatformSDK\include` will be added to the `INCLUDE` environment variable. Finally, `ATLMFC\LIB`, `LIB`, and `PlatformSDK\lib` will be added to the `LIB` environment variable.
