cmake_minimum_required(VERSION 3.11)
project (base16_h
    VERSION 0.0.1
    DESCRIPTION "C Headers for Base16 Color Schemes"
    HOMEPAGE_URL "https://github.com/robloach/base16-c"
    LANGUAGES C
)

add_library(base16_h INTERFACE)
target_include_directories(base16_h INTERFACE include)

# Options
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}")
    set(BASE16_H_IS_MAIN TRUE)
else()
    set(BASE16_H_IS_MAIN FALSE)
endif()

# Examples
if(BASE16_H_IS_MAIN)
    # Testing
    include(CTest)
    enable_testing()
    if(BUILD_TESTING)
        add_subdirectory(test)
    endif()
endif()