cmake_minimum_required(VERSION 3.10.0)
project(Yoink VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD_DEFAULT 26)

# why is the default "lib"
set(CMAKE_SHARED_LIBRARY_PREFIX "")
set(THREADS_PREFER_PTHREAD_FLAG ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(Yoink SHARED 
    src/main.cpp
    src/renderer/interface.cpp
    src/renderer/hooks.cpp
)

set_property(TARGET Yoink PROPERTY CXX_STANDARD 26)
target_link_libraries(Yoink ${OPENSSL_LIBRARIES} dl)
set_target_properties(Yoink PROPERTIES OUTPUT_NAME "yoink")
