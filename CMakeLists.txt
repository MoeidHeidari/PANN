cmake_minimum_required(VERSION 3.0.0)
project(PANN VERSION 0.1.0)


set(BOOST_ROOT "/usr/local/boost-1.65.1")
include(CTest)
enable_testing()
ADD_SUBDIRECTORY( tests )

add_executable(PANN src/main.cpp)
find_package (Boost 1.55.0 REQUIRED COMPONENTS system filesystem)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
if (Boost_FOUND)
  # From the offical documentation:
  # Add include directories to the build. [...] If the SYSTEM option is given,
  # the compiler will be told the directories are meant as system include
  # directories on some platforms (signalling this setting might achieve effects
  # such as the compiler skipping warnings [...])."
  include_directories (SYSTEM ${Boost_INCLUDE_DIR})

  # From the offical documentation:
  # "Specify directories in which the linker will look for libraries. [...] Note
  # that this command is rarely necessary. Library locations returned by
  # find_package() and find_library() are absolute paths. Pass these absolute
  # library file paths directly to the target_link_libraries() command. CMake
  # will ensure the linker finds them."
  #link_directories (${Boost_LIBRARY_DIRS})
endif ()
target_link_libraries (${PROJECT_NAME} ${Boost_LIBRARIES})

