set(LIB_SRC src/glad.c)
include_directories(include)
add_library(glad STATIC ${LIB_SRC})
set_target_properties(glad PROPERTIES OUTPUT_NAME "glad")