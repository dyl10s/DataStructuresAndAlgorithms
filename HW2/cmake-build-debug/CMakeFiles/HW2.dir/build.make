# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\College\DataStructuresAndAlgorithms\HW2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\College\DataStructuresAndAlgorithms\HW2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW2.dir/flags.make

CMakeFiles/HW2.dir/hw02-majority.cpp.obj: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/hw02-majority.cpp.obj: ../hw02-majority.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\College\DataStructuresAndAlgorithms\HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW2.dir/hw02-majority.cpp.obj"
	C:\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW2.dir\hw02-majority.cpp.obj -c F:\College\DataStructuresAndAlgorithms\HW2\hw02-majority.cpp

CMakeFiles/HW2.dir/hw02-majority.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW2.dir/hw02-majority.cpp.i"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\College\DataStructuresAndAlgorithms\HW2\hw02-majority.cpp > CMakeFiles\HW2.dir\hw02-majority.cpp.i

CMakeFiles/HW2.dir/hw02-majority.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW2.dir/hw02-majority.cpp.s"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\College\DataStructuresAndAlgorithms\HW2\hw02-majority.cpp -o CMakeFiles\HW2.dir\hw02-majority.cpp.s

# Object files for target HW2
HW2_OBJECTS = \
"CMakeFiles/HW2.dir/hw02-majority.cpp.obj"

# External object files for target HW2
HW2_EXTERNAL_OBJECTS =

HW2.exe: CMakeFiles/HW2.dir/hw02-majority.cpp.obj
HW2.exe: CMakeFiles/HW2.dir/build.make
HW2.exe: CMakeFiles/HW2.dir/linklibs.rsp
HW2.exe: CMakeFiles/HW2.dir/objects1.rsp
HW2.exe: CMakeFiles/HW2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\College\DataStructuresAndAlgorithms\HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HW2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW2.dir/build: HW2.exe

.PHONY : CMakeFiles/HW2.dir/build

CMakeFiles/HW2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW2.dir/clean

CMakeFiles/HW2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\College\DataStructuresAndAlgorithms\HW2 F:\College\DataStructuresAndAlgorithms\HW2 F:\College\DataStructuresAndAlgorithms\HW2\cmake-build-debug F:\College\DataStructuresAndAlgorithms\HW2\cmake-build-debug F:\College\DataStructuresAndAlgorithms\HW2\cmake-build-debug\CMakeFiles\HW2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW2.dir/depend
