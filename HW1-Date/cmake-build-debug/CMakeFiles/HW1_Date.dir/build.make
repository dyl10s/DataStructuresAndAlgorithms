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
CMAKE_SOURCE_DIR = F:\College\DataStructuresAndAlgorithms\HW1-Date

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\College\DataStructuresAndAlgorithms\HW1-Date\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW1_Date.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW1_Date.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW1_Date.dir/flags.make

CMakeFiles/HW1_Date.dir/hw01-date.cpp.obj: CMakeFiles/HW1_Date.dir/flags.make
CMakeFiles/HW1_Date.dir/hw01-date.cpp.obj: ../hw01-date.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\College\DataStructuresAndAlgorithms\HW1-Date\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW1_Date.dir/hw01-date.cpp.obj"
	C:\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW1_Date.dir\hw01-date.cpp.obj -c F:\College\DataStructuresAndAlgorithms\HW1-Date\hw01-date.cpp

CMakeFiles/HW1_Date.dir/hw01-date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW1_Date.dir/hw01-date.cpp.i"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\College\DataStructuresAndAlgorithms\HW1-Date\hw01-date.cpp > CMakeFiles\HW1_Date.dir\hw01-date.cpp.i

CMakeFiles/HW1_Date.dir/hw01-date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW1_Date.dir/hw01-date.cpp.s"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\College\DataStructuresAndAlgorithms\HW1-Date\hw01-date.cpp -o CMakeFiles\HW1_Date.dir\hw01-date.cpp.s

CMakeFiles/HW1_Date.dir/SimpleDate.cpp.obj: CMakeFiles/HW1_Date.dir/flags.make
CMakeFiles/HW1_Date.dir/SimpleDate.cpp.obj: ../SimpleDate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\College\DataStructuresAndAlgorithms\HW1-Date\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW1_Date.dir/SimpleDate.cpp.obj"
	C:\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW1_Date.dir\SimpleDate.cpp.obj -c F:\College\DataStructuresAndAlgorithms\HW1-Date\SimpleDate.cpp

CMakeFiles/HW1_Date.dir/SimpleDate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW1_Date.dir/SimpleDate.cpp.i"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\College\DataStructuresAndAlgorithms\HW1-Date\SimpleDate.cpp > CMakeFiles\HW1_Date.dir\SimpleDate.cpp.i

CMakeFiles/HW1_Date.dir/SimpleDate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW1_Date.dir/SimpleDate.cpp.s"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\College\DataStructuresAndAlgorithms\HW1-Date\SimpleDate.cpp -o CMakeFiles\HW1_Date.dir\SimpleDate.cpp.s

# Object files for target HW1_Date
HW1_Date_OBJECTS = \
"CMakeFiles/HW1_Date.dir/hw01-date.cpp.obj" \
"CMakeFiles/HW1_Date.dir/SimpleDate.cpp.obj"

# External object files for target HW1_Date
HW1_Date_EXTERNAL_OBJECTS =

HW1_Date.exe: CMakeFiles/HW1_Date.dir/hw01-date.cpp.obj
HW1_Date.exe: CMakeFiles/HW1_Date.dir/SimpleDate.cpp.obj
HW1_Date.exe: CMakeFiles/HW1_Date.dir/build.make
HW1_Date.exe: CMakeFiles/HW1_Date.dir/linklibs.rsp
HW1_Date.exe: CMakeFiles/HW1_Date.dir/objects1.rsp
HW1_Date.exe: CMakeFiles/HW1_Date.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\College\DataStructuresAndAlgorithms\HW1-Date\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable HW1_Date.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW1_Date.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW1_Date.dir/build: HW1_Date.exe

.PHONY : CMakeFiles/HW1_Date.dir/build

CMakeFiles/HW1_Date.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW1_Date.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW1_Date.dir/clean

CMakeFiles/HW1_Date.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\College\DataStructuresAndAlgorithms\HW1-Date F:\College\DataStructuresAndAlgorithms\HW1-Date F:\College\DataStructuresAndAlgorithms\HW1-Date\cmake-build-debug F:\College\DataStructuresAndAlgorithms\HW1-Date\cmake-build-debug F:\College\DataStructuresAndAlgorithms\HW1-Date\cmake-build-debug\CMakeFiles\HW1_Date.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW1_Date.dir/depend
