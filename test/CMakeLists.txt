# Tests
set(BASE16_C_TESTS
    base16_c_test
    base16_aggregate_test
    base16_aggregate_empty_test
    base16_aggregate_all_test
)

foreach(BASE16_C_TEST ${BASE16_C_TESTS})
    # Executable
    add_executable(${BASE16_C_TEST} ${BASE16_C_TEST}.c)

    # Options
    if (MSVC)
        target_compile_options(${BASE16_C_TEST} PRIVATE /Wall /W4)
    else()
        target_compile_options(${BASE16_C_TEST} PRIVATE -Wall -Wextra -Wconversion -Wsign-conversion)
    endif()

    set_target_properties(${BASE16_C_TEST} PROPERTIES C_STANDARD 90)

    # Link to the library
    target_link_libraries(${BASE16_C_TEST} base16_c)

    # Build the test
    add_test(NAME ${BASE16_C_TEST} COMMAND ${BASE16_C_TEST})
endforeach()
