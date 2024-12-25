# Script to quickly build and run the project on windows.

$BUILD_DIR = "build"
$PROJECT_NAME = "raylib_project"
$EXE_NAME = "raylib_app.exe"

cmake -B $BUILD_DIR
cmake --build $BUILD_DIR
& "./$BUILD_DIR/$PROJECT_NAME/$EXE_NAME"
