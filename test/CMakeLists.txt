# Executable
add_executable(tinted_c_test tinted_c_test.c)

# Options
if (MSVC)
    target_compile_options(tinted_c_test PRIVATE /Wall /W4)
else()
    target_compile_options(tinted_c_test PRIVATE -Wall -Wextra -Wconversion -Wsign-conversion)
endif()

set_target_properties(tinted_c_test PROPERTIES C_STANDARD 90)

# Link to the library
target_link_libraries(tinted_c_test base16_c)

# Build the test
add_test(NAME tinted_c_test COMMAND tinted_c_test)
