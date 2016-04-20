CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(minimal)

ADD_DEFINITIONS("-std=c++11")

FIND_PACKAGE( wxWidgets COMPONENTS core base REQUIRED )

# wxWidgets include (this will do all the magic to configure everything)
include( "${wxWidgets_USE_FILE}" )

# For convenience we define the sources as a variable. You can add
# header files and cpp/c files and CMake will sort them out
set(SRCS minimal.cpp)

# If we build for windows systems, we also include the resource file
# containing the manifest, icon and other resources
if(WIN32)
  set(SRCS ${SRCS} minimal.rc)
endif(WIN32)

# Here we define the executable minimal.exe or minimal on other systems
# the above paths and defines will be used in this build
add_executable(minimal WIN32 ${SRCS})

# We add to our target 'minimal' the wxWidgets libraries. These are
# set for us by the find script. If you need other libraries, you
# can add them here as well.
target_link_libraries(minimal ${wxWidgets_LIBRARIES})
