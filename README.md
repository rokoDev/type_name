[![pre-commit](https://img.shields.io/badge/pre--commit-enabled-brightgreen?logo=pre-commit&logoColor=white)](https://github.com/pre-commit/pre-commit)

| **`Windows`** | **`Linux`** |
|-------------|-------------|
[![Build status](https://ci.appveyor.com/api/projects/status/81er2p9hhjvjkoca/branch/master?svg=true)](https://ci.appveyor.com/project/rokoDev/type-name/branch/master)|[![CircleCI](https://circleci.com/gh/rokoDev/type_name/tree/master.svg?style=shield)](https://circleci.com/gh/rokoDev/type_name/tree/master)|

# type_name

## Building for Xcode

### Prerequisites:
 - Installed CMake with version 3.15.7 or higher.
 - Installed Xcode.
 - Installed `pre-commit` package. For instructions see: [pre-commit installation](https://pre-commit.com/#install)

In order to be able to make commits with proper formatting and other checks you should run this commands after clonning the repo:
  1. `cd type_name`
  2. `pre-commit install`
  3. `pre-commit install --hook-type prepare-commit-msg`

To generate Xcode project run this command sequence in terminal:
```
git clone https://github.com/rokoDev/type_name.git
cd type_name
mkdir -p build/Xcode
cd build/Xcode
cmake -GXcode ../..
```

Then run this command to open Xcode project:
```
cmake --open ./
```

In Xcode choose `type_name_tests` target and hit `command+R` to run unit tests.
