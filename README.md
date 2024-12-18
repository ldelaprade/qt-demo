# Qt CMake Demo Project

## Prerequisites

### Linux
- CMake (minimum version 3.10)
- Qt5
- GCC or Clang compiler
- Build essentials

#### Linux Setup
```bash
# Ubuntu/Debian
sudo apt-get update
sudo apt-get install build-essential cmake qt5-default qtcreator libgl1-mesa-dev
```

### Windows
- [CMake](https://cmake.org/download/) (minimum version 3.10)
- [Qt5](https://www.qt.io/download) Open Source Version
- [Visual Studio](https://visualstudio.microsoft.com/downloads/) (Community Edition is fine)
  - Make sure to select "Desktop development with C++" workload during installation
- [Git Bash](https://gitforwindows.org/) (optional, but recommended for consistent terminal experience)

## Environment Setup

### Qt Directory Configuration
To help VSCode and CMake find Qt, set the `QT_DIR` environment variable:

#### Linux
```bash
# Add to your ~/.bashrc or ~/.zshrc
export QT_DIR="/usr/lib/x86_64-linux-gnu/cmake"
# or the appropriate path to your Qt installation
```

#### Windows
1. Open System Environment Variables
2. Add a new environment variable:
   - Variable Name: `QT_DIR`
   - Variable Value: `C:\Qt\5.15.2\msvc2019_64` 
   (adjust to match your Qt installation path)

### IDE Integration Notes
- VSCode uses a flexible settings approach to detect compilers and Qt paths
- The `.vscode/settings.json` is configured to work across platforms
- Fallback paths are provided for common Qt installations

## Build Instructions

### Linux
```bash
# Clone the repository
git clone https://github.com/yourusername/qt-demo.git
cd qt-demo

# Create build directory
mkdir build
cd build

# Generate build files
cmake ..

# Build the project
make

# Run the application
./qt_demo
```

### Windows (Using Command Prompt or PowerShell)
```powershell
# Clone the repository
git clone https://github.com/yourusername/qt-demo.git
cd qt-demo

# Create build directory
mkdir build
cd build

# Generate build files for Visual Studio
# Replace "Visual Studio 16 2019" with your VS version if different
cmake -G "Visual Studio 16 2019" -A x64 ..

# Build the project
cmake --build . --config Release

# Run the application
.\Release\qt_demo.exe
```

### Windows (Using Qt Creator)
1. Open Qt Creator
2. File -> Open File or Project
3. Navigate to and select the `CMakeLists.txt` in the project root
4. Configure the project (select appropriate kit)
5. Build and Run

## VSCode Setup

### VSCode on Windows
1. Install the following VSCode Extensions:
   - "C/C++" by Microsoft
   - "CMake" by twxs
   - "CMake Tools" by Microsoft

2. Configure VSCode settings:
   - Open the `.vscode/settings.json` file
   - Set the appropriate paths for Qt and CMake

### Troubleshooting

#### Windows-Specific Issues
- Ensure Qt is in your system PATH
- Verify that CMake can find your Qt installation
- If CMake can't find Qt, you may need to set `CMAKE_PREFIX_PATH` to your Qt installation directory
- For VSCode, you might need to set additional environment variables

#### Linux-Specific Issues
- Ensure all Qt development packages are installed
- Check that your Qt version is compatible with the CMake configuration

## Additional Notes
- This project uses CMake for cross-platform compatibility
- Tested on Ubuntu 20.04 and Windows 10
- Requires C++14 or later

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.