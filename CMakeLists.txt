cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(template VERSION 1.2.3.4)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# warnings as errors
add_compile_options(-Wall -Wextra -pedantic -Werror)

option(BUILD_SHARED_LIBS "Build libraries as shared libraries unless the library was explicitly added as a static library" ON)
option(USE_LIBRARY "Use the template library" ON)

# add the executable
add_executable(template main.cpp)

# configure a header file to pass the version number to the source code
configure_file(template_config.h.in template_config.h)

include_directories (
# since the configured file will be written into the binary tree, we must
# add that directory to the list of paths to search for include files
                    "${PROJECT_BINARY_DIR}",
                    "${PROJECT_SOURCE_DIR}"
                    )

if(USE_LIBRARY)
  add_subdirectory(library)
  list(APPEND EXTRA_LIBS library)
endif()

target_link_libraries(template PUBLIC ${EXTRA_LIBS})