# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/cosmin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/cosmin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/demos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demos.dir/flags.make

CMakeFiles/demos.dir/main.cpp.o: CMakeFiles/demos.dir/flags.make
CMakeFiles/demos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demos.dir/main.cpp.o"
	/home/cosmin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7223.86/bin/cmake/linux/bin/cmake -E time /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/demos.dir/main.cpp.o -c "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/main.cpp"

CMakeFiles/demos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demos.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/main.cpp" > CMakeFiles/demos.dir/main.cpp.i

CMakeFiles/demos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demos.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/main.cpp" -o CMakeFiles/demos.dir/main.cpp.s

# Object files for target demos
demos_OBJECTS = \
"CMakeFiles/demos.dir/main.cpp.o"

# External object files for target demos
demos_EXTERNAL_OBJECTS =

demos: CMakeFiles/demos.dir/main.cpp.o
demos: CMakeFiles/demos.dir/build.make
demos: CMakeFiles/demos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable demos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demos.dir/build: demos

.PHONY : CMakeFiles/demos.dir/build

CMakeFiles/demos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demos.dir/clean

CMakeFiles/demos.dir/depend:
	cd "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos" "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos" "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/cmake-build-debug" "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/cmake-build-debug" "/home/cosmin/Desktop/Sem. 4/Seminar - C++/demos/cmake-build-debug/CMakeFiles/demos.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/demos.dir/depend
