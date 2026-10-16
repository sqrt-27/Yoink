cmake_minimum_required(VERSION 3.10.0)
project(Yoink VERSION 0.1.0 LANGUAGES C CXX)

# why is the default "lib"
set(CMAKE_SHARED_LIBRARY_PREFIX "")
set(THREADS_PREFER_PTHREAD_FLAG ON)

add_library(Yoink SHARED src/main.cpp
    src/renderer.cpp
    src/renderer.hpp)
set_target_properties(Yoink PROPERTIES OUTPUT_NAME "yoink")
