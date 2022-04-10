| **`Windows`** | **`Linux`** |
|-------------|-------------|
[![Build status](https://ci.appveyor.com/api/projects/status/81er2p9hhjvjkoca/branch/master?svg=true)](https://ci.appveyor.com/project/rokoDev/type-name/branch/master)|[![CircleCI](https://circleci.com/gh/rokoDev/type_name/tree/master.svg?style=svg)](https://circleci.com/gh/rokoDev/type_name/tree/master)|

# type_name

## Building for Xcode

### Prerequisites:
 - Installed CMake with version 3.18.3 or higher.
 - Installed Xcode.

To generate Xcode project run this command sequence in terminal:
```
git clone https://github.com/rokoDev/type_name.git
cd type_name
mkdir build
cd build
cmake -GXcode ..
```

Then run this command to open Xcode project:
```
cmake --open ./
```

In Xcode choose `type_name_tests` target and hit `command+R` to run unit tests.