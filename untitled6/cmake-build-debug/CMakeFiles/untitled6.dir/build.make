# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\casie\CLionProjects\untitled6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\casie\CLionProjects\untitled6\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled6.dir/flags.make

CMakeFiles/untitled6.dir/main.cpp.obj: CMakeFiles/untitled6.dir/flags.make
CMakeFiles/untitled6.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\casie\CLionProjects\untitled6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled6.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled6.dir\main.cpp.obj -c C:\Users\casie\CLionProjects\untitled6\main.cpp

CMakeFiles/untitled6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled6.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\casie\CLionProjects\untitled6\main.cpp > CMakeFiles\untitled6.dir\main.cpp.i

CMakeFiles/untitled6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled6.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\casie\CLionProjects\untitled6\main.cpp -o CMakeFiles\untitled6.dir\main.cpp.s

CMakeFiles/untitled6.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/untitled6.dir/main.cpp.obj.requires

CMakeFiles/untitled6.dir/main.cpp.obj.provides: CMakeFiles/untitled6.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\untitled6.dir\build.make CMakeFiles/untitled6.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/untitled6.dir/main.cpp.obj.provides

CMakeFiles/untitled6.dir/main.cpp.obj.provides.build: CMakeFiles/untitled6.dir/main.cpp.obj


# Object files for target untitled6
untitled6_OBJECTS = \
"CMakeFiles/untitled6.dir/main.cpp.obj"

# External object files for target untitled6
untitled6_EXTERNAL_OBJECTS =

untitled6.exe: CMakeFiles/untitled6.dir/main.cpp.obj
untitled6.exe: CMakeFiles/untitled6.dir/build.make
untitled6.exe: CMakeFiles/untitled6.dir/linklibs.rsp
untitled6.exe: CMakeFiles/untitled6.dir/objects1.rsp
untitled6.exe: CMakeFiles/untitled6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\casie\CLionProjects\untitled6\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable untitled6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\untitled6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled6.dir/build: untitled6.exe

.PHONY : CMakeFiles/untitled6.dir/build

CMakeFiles/untitled6.dir/requires: CMakeFiles/untitled6.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/untitled6.dir/requires

CMakeFiles/untitled6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/untitled6.dir/clean

CMakeFiles/untitled6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\casie\CLionProjects\untitled6 C:\Users\casie\CLionProjects\untitled6 C:\Users\casie\CLionProjects\untitled6\cmake-build-debug C:\Users\casie\CLionProjects\untitled6\cmake-build-debug C:\Users\casie\CLionProjects\untitled6\cmake-build-debug\CMakeFiles\untitled6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled6.dir/depend

