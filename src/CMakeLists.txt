include_directories(${PROJECT_SOURCE_DIR}/deps/glad/include)
include_directories(${PROJECT_SOURCE_DIR}/deps/glfw/include)

set(SRC_LIST main.cpp shader.cpp)

add_executable(OpenGLLearning ${SRC_LIST})

target_link_libraries(OpenGLLearning glad glfw)