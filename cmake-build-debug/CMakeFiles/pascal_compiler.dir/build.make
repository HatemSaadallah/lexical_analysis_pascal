# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\m.s.i\CLionProjects\pascal-compiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\m.s.i\CLionProjects\pascal-compiler\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pascal_compiler.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/pascal_compiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pascal_compiler.dir/flags.make

CMakeFiles/pascal_compiler.dir/main.cpp.obj: CMakeFiles/pascal_compiler.dir/flags.make
CMakeFiles/pascal_compiler.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\m.s.i\CLionProjects\pascal-compiler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pascal_compiler.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pascal_compiler.dir\main.cpp.obj -c C:\Users\m.s.i\CLionProjects\pascal-compiler\main.cpp

CMakeFiles/pascal_compiler.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pascal_compiler.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\m.s.i\CLionProjects\pascal-compiler\main.cpp > CMakeFiles\pascal_compiler.dir\main.cpp.i

CMakeFiles/pascal_compiler.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pascal_compiler.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\m.s.i\CLionProjects\pascal-compiler\main.cpp -o CMakeFiles\pascal_compiler.dir\main.cpp.s

CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.obj: CMakeFiles/pascal_compiler.dir/flags.make
CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.obj: ../TokenStructure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\m.s.i\CLionProjects\pascal-compiler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pascal_compiler.dir\TokenStructure.cpp.obj -c C:\Users\m.s.i\CLionProjects\pascal-compiler\TokenStructure.cpp

CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\m.s.i\CLionProjects\pascal-compiler\TokenStructure.cpp > CMakeFiles\pascal_compiler.dir\TokenStructure.cpp.i

CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\m.s.i\CLionProjects\pascal-compiler\TokenStructure.cpp -o CMakeFiles\pascal_compiler.dir\TokenStructure.cpp.s

# Object files for target pascal_compiler
pascal_compiler_OBJECTS = \
"CMakeFiles/pascal_compiler.dir/main.cpp.obj" \
"CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.obj"

# External object files for target pascal_compiler
pascal_compiler_EXTERNAL_OBJECTS =

pascal_compiler.exe: CMakeFiles/pascal_compiler.dir/main.cpp.obj
pascal_compiler.exe: CMakeFiles/pascal_compiler.dir/TokenStructure.cpp.obj
pascal_compiler.exe: CMakeFiles/pascal_compiler.dir/build.make
pascal_compiler.exe: CMakeFiles/pascal_compiler.dir/linklibs.rsp
pascal_compiler.exe: CMakeFiles/pascal_compiler.dir/objects1.rsp
pascal_compiler.exe: CMakeFiles/pascal_compiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\m.s.i\CLionProjects\pascal-compiler\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable pascal_compiler.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pascal_compiler.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pascal_compiler.dir/build: pascal_compiler.exe
.PHONY : CMakeFiles/pascal_compiler.dir/build

CMakeFiles/pascal_compiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pascal_compiler.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pascal_compiler.dir/clean

CMakeFiles/pascal_compiler.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\m.s.i\CLionProjects\pascal-compiler C:\Users\m.s.i\CLionProjects\pascal-compiler C:\Users\m.s.i\CLionProjects\pascal-compiler\cmake-build-debug C:\Users\m.s.i\CLionProjects\pascal-compiler\cmake-build-debug C:\Users\m.s.i\CLionProjects\pascal-compiler\cmake-build-debug\CMakeFiles\pascal_compiler.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pascal_compiler.dir/depend
