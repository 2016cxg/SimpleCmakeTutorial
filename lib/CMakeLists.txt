cmake_minimum_required( VERSION 2.8.9 )
project( hello_world )
set( CMAKE_BUILD_TYPE Release )

#Bring the headers, such as HelloClass.h into project
include_directories( include )

#Mannually add the sources using the set command as follows:
#set( SOURCES src/main.cpp src/HelloClass.cpp)

#However, the file( GLOB ... ) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_library(hello SHARED ${SOURCES})

#Set the location for library installation, /usr/lib in this case
#This is not really necessary 
#Use "sudo make install" to apply
install( TARGETS hello DESTINATION /usr/lib )
