include_directories(${PROJECT_SOURCE_DIR}/deps/glad/include)
include_directories(${PROJECT_SOURCE_DIR}/deps/glfw/include)
include_directories(${PROJECT_SOURCE_DIR}/deps/stb)
include_directories(${PROJECT_SOURCE_DIR}/deps/glm)

set(SRC_LIST main.cpp shader.cpp)

add_executable(OpenGLLearning ${SRC_LIST})

target_link_libraries(OpenGLLearning glad glfw)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# install(OpenGLLearning ARCHIVE ${PROJECT_SOURCE_DIR}/bin/)