#Set minimum version of CMake for this project, Which is major version 2
#minor version 8, and patch version 9 in this example
cmake_minimum_required( VERSION 2.8.9 )
#Set project name 
project( TestLibrary )

#Refere to shared library
#Command set is set a variable that contains libhello.so
set( LINK_LIBS libhello.so )
#bring the library directory
link_directories( lib/build )

#Bring the header directory
include_directories( lib/include )

#Bring source files 
file( GLOB SOURCES src/*.cpp )

#Build source files SOURCES into executable file which is named hello
#The first argument is the name of the executable file 
#The second argument is the sources to be built
add_executable( hello ${SOURCES} )
#Link dependences to executable file hello
target_link_libraries(hello ${LINK_LIBS})
