# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhiyuwang/Desktop/hwk3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhiyuwang/Desktop/hwk3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hwk3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hwk3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hwk3.dir/flags.make

CMakeFiles/hwk3.dir/main.c.o: CMakeFiles/hwk3.dir/flags.make
CMakeFiles/hwk3.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhiyuwang/Desktop/hwk3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/hwk3.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hwk3.dir/main.c.o   -c /Users/zhiyuwang/Desktop/hwk3/main.c

CMakeFiles/hwk3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hwk3.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zhiyuwang/Desktop/hwk3/main.c > CMakeFiles/hwk3.dir/main.c.i

CMakeFiles/hwk3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hwk3.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zhiyuwang/Desktop/hwk3/main.c -o CMakeFiles/hwk3.dir/main.c.s

# Object files for target hwk3
hwk3_OBJECTS = \
"CMakeFiles/hwk3.dir/main.c.o"

# External object files for target hwk3
hwk3_EXTERNAL_OBJECTS =

hwk3: CMakeFiles/hwk3.dir/main.c.o
hwk3: CMakeFiles/hwk3.dir/build.make
hwk3: CMakeFiles/hwk3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhiyuwang/Desktop/hwk3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hwk3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hwk3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hwk3.dir/build: hwk3

.PHONY : CMakeFiles/hwk3.dir/build

CMakeFiles/hwk3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hwk3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hwk3.dir/clean

CMakeFiles/hwk3.dir/depend:
	cd /Users/zhiyuwang/Desktop/hwk3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhiyuwang/Desktop/hwk3 /Users/zhiyuwang/Desktop/hwk3 /Users/zhiyuwang/Desktop/hwk3/cmake-build-debug /Users/zhiyuwang/Desktop/hwk3/cmake-build-debug /Users/zhiyuwang/Desktop/hwk3/cmake-build-debug/CMakeFiles/hwk3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hwk3.dir/depend

