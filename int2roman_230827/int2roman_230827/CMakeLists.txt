# CMakeList.txt : CMake project for int2roman_230827, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (int2roman_230827 "int2roman_230827.cpp" "int2roman_230827.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET int2roman_230827 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
