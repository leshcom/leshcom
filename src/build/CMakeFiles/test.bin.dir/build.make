# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/oleksii/repos/leshcom/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oleksii/repos/leshcom/src/build

# Include any dependencies generated for this target.
include CMakeFiles/test.bin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test.bin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test.bin.dir/flags.make

CMakeFiles/test.bin.dir/UserInterface.cpp.o: CMakeFiles/test.bin.dir/flags.make
CMakeFiles/test.bin.dir/UserInterface.cpp.o: ../UserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oleksii/repos/leshcom/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test.bin.dir/UserInterface.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test.bin.dir/UserInterface.cpp.o -c /home/oleksii/repos/leshcom/src/UserInterface.cpp

CMakeFiles/test.bin.dir/UserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test.bin.dir/UserInterface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oleksii/repos/leshcom/src/UserInterface.cpp > CMakeFiles/test.bin.dir/UserInterface.cpp.i

CMakeFiles/test.bin.dir/UserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test.bin.dir/UserInterface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oleksii/repos/leshcom/src/UserInterface.cpp -o CMakeFiles/test.bin.dir/UserInterface.cpp.s

CMakeFiles/test.bin.dir/UserInterface.cpp.o.requires:

.PHONY : CMakeFiles/test.bin.dir/UserInterface.cpp.o.requires

CMakeFiles/test.bin.dir/UserInterface.cpp.o.provides: CMakeFiles/test.bin.dir/UserInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/test.bin.dir/build.make CMakeFiles/test.bin.dir/UserInterface.cpp.o.provides.build
.PHONY : CMakeFiles/test.bin.dir/UserInterface.cpp.o.provides

CMakeFiles/test.bin.dir/UserInterface.cpp.o.provides.build: CMakeFiles/test.bin.dir/UserInterface.cpp.o


# Object files for target test.bin
test_bin_OBJECTS = \
"CMakeFiles/test.bin.dir/UserInterface.cpp.o"

# External object files for target test.bin
test_bin_EXTERNAL_OBJECTS =

test.bin: CMakeFiles/test.bin.dir/UserInterface.cpp.o
test.bin: CMakeFiles/test.bin.dir/build.make
test.bin: libLib.a
test.bin: CMakeFiles/test.bin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oleksii/repos/leshcom/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test.bin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test.bin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test.bin.dir/build: test.bin

.PHONY : CMakeFiles/test.bin.dir/build

CMakeFiles/test.bin.dir/requires: CMakeFiles/test.bin.dir/UserInterface.cpp.o.requires

.PHONY : CMakeFiles/test.bin.dir/requires

CMakeFiles/test.bin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test.bin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test.bin.dir/clean

CMakeFiles/test.bin.dir/depend:
	cd /home/oleksii/repos/leshcom/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oleksii/repos/leshcom/src /home/oleksii/repos/leshcom/src /home/oleksii/repos/leshcom/src/build /home/oleksii/repos/leshcom/src/build /home/oleksii/repos/leshcom/src/build/CMakeFiles/test.bin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test.bin.dir/depend

