cmake_minimum_required(VERSION 3.14)

project(vulkan)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_subdirectory(libs/SDL)

find_package(Vulkan REQUIRED)

add_executable(vulkan 
    source/main.cpp
)

target_include_directories(vulkan PUBLIC libs/SDL/include)
target_link_libraries(vulkan PUBLIC SDL2-static)
target_include_directories(vulkan PUBLIC ${Vulkan_INCLUDE_DIRS})
target_link_libraries(vulkan PUBLIC ${Vulkan_LIBRARIES})
