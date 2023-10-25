# CMakeList.txt: проект CMake для my_first_cmake_project; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (my_first_cmake_project "my_first_cmake_project.cpp" "my_first_cmake_project.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET my_first_cmake_project PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
