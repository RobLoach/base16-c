# Executable
add_executable(base16_h_test base16_h_test.c)

# Options
if (MSVC)
    target_compile_options(base16_h_test PRIVATE /Wall /W4)
else()
    target_compile_options(base16_h_test PRIVATE -Wall -Wextra -Wconversion -Wsign-conversion)
endif()

set_target_properties(base16_h_test PROPERTIES C_STANDARD 90)

# Link to raylib_assert
target_link_libraries(base16_h_test base16_h)

# Build the test
add_test(NAME base16_h_test COMMAND base16_h_test)
