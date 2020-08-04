
cmake_minimum_required (VERSION 2.8)

project (boost-vs2015)

# Set compiler flags and options. 
if (MSVC) # MSVC compiler (Win32 only)
    # Display more warnings
    set (CMAKE_CXX_FLAGS "/W3 /nologo /EHsc")
elseif (UNIX OR CMAKE_COMPILER_IS_GNUCXX) # Clang OR Gcc (Linux, Mac OS or Win32 with MingW)
    # Enable C++11 and displays all warnings
    set (CMAKE_CXX_FLAGS "-Wall -std=c++11")
    if (APPLE) # Clang / Mac OS only
        # Required on OSX to compile c++11
        set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -mmacosx-version-min=10.7")
    endif (APPLE)
endif ()


# Command to output information to the console
# Useful for displaying errors, warnings, and debugging
message ("cxx Flags: " ${CMAKE_CXX_FLAGS})
message ("CMAKE_SOURCE_DIR=" ${CMAKE_SOURCE_DIR})

# Sub-directories where more CMakeLists.txt exist
add_subdirectory (boost)

# Set include-directory
# include_directories(${INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/boost)
