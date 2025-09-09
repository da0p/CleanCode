cmake_minimum_required(VERSION 4.0)

project(CleanCode
  DESCRIPTION "Clean Code C++ examples"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
# Create compile_commands.json to be used by clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_subdirectory(example)