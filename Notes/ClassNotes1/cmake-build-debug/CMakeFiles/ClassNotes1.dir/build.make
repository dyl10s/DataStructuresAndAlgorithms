# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/dylan/clion-2018.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/dylan/clion-2018.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClassNotes1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClassNotes1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClassNotes1.dir/flags.make

CMakeFiles/ClassNotes1.dir/main.cpp.o: CMakeFiles/ClassNotes1.dir/flags.make
CMakeFiles/ClassNotes1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClassNotes1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassNotes1.dir/main.cpp.o -c /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/main.cpp

CMakeFiles/ClassNotes1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassNotes1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/main.cpp > CMakeFiles/ClassNotes1.dir/main.cpp.i

CMakeFiles/ClassNotes1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassNotes1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/main.cpp -o CMakeFiles/ClassNotes1.dir/main.cpp.s

CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.o: CMakeFiles/ClassNotes1.dir/flags.make
CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.o: ../SimpleDate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.o -c /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/SimpleDate.cpp

CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/SimpleDate.cpp > CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.i

CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/SimpleDate.cpp -o CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.s

# Object files for target ClassNotes1
ClassNotes1_OBJECTS = \
"CMakeFiles/ClassNotes1.dir/main.cpp.o" \
"CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.o"

# External object files for target ClassNotes1
ClassNotes1_EXTERNAL_OBJECTS =

ClassNotes1: CMakeFiles/ClassNotes1.dir/main.cpp.o
ClassNotes1: CMakeFiles/ClassNotes1.dir/SimpleDate.cpp.o
ClassNotes1: CMakeFiles/ClassNotes1.dir/build.make
ClassNotes1: CMakeFiles/ClassNotes1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ClassNotes1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClassNotes1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClassNotes1.dir/build: ClassNotes1

.PHONY : CMakeFiles/ClassNotes1.dir/build

CMakeFiles/ClassNotes1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClassNotes1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClassNotes1.dir/clean

CMakeFiles/ClassNotes1.dir/depend:
	cd /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1 /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1 /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/cmake-build-debug /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/cmake-build-debug /home/dylan/CLionProjects/DataStructuresAndAlgorithms/Notes/ClassNotes1/cmake-build-debug/CMakeFiles/ClassNotes1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClassNotes1.dir/depend

