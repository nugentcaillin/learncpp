# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/build

# Include any dependencies generated for this target.
include CMakeFiles/add_subtract.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/add_subtract.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/add_subtract.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/add_subtract.dir/flags.make

CMakeFiles/add_subtract.dir/codegen:
.PHONY : CMakeFiles/add_subtract.dir/codegen

CMakeFiles/add_subtract.dir/main.cpp.o: CMakeFiles/add_subtract.dir/flags.make
CMakeFiles/add_subtract.dir/main.cpp.o: /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/main.cpp
CMakeFiles/add_subtract.dir/main.cpp.o: CMakeFiles/add_subtract.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/add_subtract.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/add_subtract.dir/main.cpp.o -MF CMakeFiles/add_subtract.dir/main.cpp.o.d -o CMakeFiles/add_subtract.dir/main.cpp.o -c /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/main.cpp

CMakeFiles/add_subtract.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/add_subtract.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/main.cpp > CMakeFiles/add_subtract.dir/main.cpp.i

CMakeFiles/add_subtract.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/add_subtract.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/main.cpp -o CMakeFiles/add_subtract.dir/main.cpp.s

# Object files for target add_subtract
add_subtract_OBJECTS = \
"CMakeFiles/add_subtract.dir/main.cpp.o"

# External object files for target add_subtract
add_subtract_EXTERNAL_OBJECTS =

add_subtract: CMakeFiles/add_subtract.dir/main.cpp.o
add_subtract: CMakeFiles/add_subtract.dir/build.make
add_subtract: CMakeFiles/add_subtract.dir/compiler_depend.ts
add_subtract: CMakeFiles/add_subtract.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable add_subtract"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/add_subtract.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/add_subtract.dir/build: add_subtract
.PHONY : CMakeFiles/add_subtract.dir/build

CMakeFiles/add_subtract.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/add_subtract.dir/cmake_clean.cmake
.PHONY : CMakeFiles/add_subtract.dir/clean

CMakeFiles/add_subtract.dir/depend:
	cd /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/build /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/build /home/caillin/Documents/repos/learncpp/learncpp/chap1/add_subtract/build/CMakeFiles/add_subtract.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/add_subtract.dir/depend

