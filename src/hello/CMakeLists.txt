set(TARGET "hello")

file(GLOB SRC "*.h" "*.cpp")
add_executable(${TARGET} ${SRC})
target_link_libraries(${TARGET} utils)
