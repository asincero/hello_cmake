set(TARGET "utils")

file(GLOB SRC "*.h" "*.cpp")
add_library(${TARGET} ${SRC})
