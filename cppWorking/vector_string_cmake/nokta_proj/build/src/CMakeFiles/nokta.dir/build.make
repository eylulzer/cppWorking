# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/eylul/Desktop/nokta_proj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eylul/Desktop/nokta_proj/build

# Include any dependencies generated for this target.
include src/CMakeFiles/nokta.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/nokta.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/nokta.dir/flags.make

src/CMakeFiles/nokta.dir/nokta.cpp.o: src/CMakeFiles/nokta.dir/flags.make
src/CMakeFiles/nokta.dir/nokta.cpp.o: ../src/nokta.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eylul/Desktop/nokta_proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/nokta.dir/nokta.cpp.o"
	cd /home/eylul/Desktop/nokta_proj/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nokta.dir/nokta.cpp.o -c /home/eylul/Desktop/nokta_proj/src/nokta.cpp

src/CMakeFiles/nokta.dir/nokta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nokta.dir/nokta.cpp.i"
	cd /home/eylul/Desktop/nokta_proj/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eylul/Desktop/nokta_proj/src/nokta.cpp > CMakeFiles/nokta.dir/nokta.cpp.i

src/CMakeFiles/nokta.dir/nokta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nokta.dir/nokta.cpp.s"
	cd /home/eylul/Desktop/nokta_proj/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eylul/Desktop/nokta_proj/src/nokta.cpp -o CMakeFiles/nokta.dir/nokta.cpp.s

src/CMakeFiles/nokta.dir/nokta.cpp.o.requires:

.PHONY : src/CMakeFiles/nokta.dir/nokta.cpp.o.requires

src/CMakeFiles/nokta.dir/nokta.cpp.o.provides: src/CMakeFiles/nokta.dir/nokta.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/nokta.dir/build.make src/CMakeFiles/nokta.dir/nokta.cpp.o.provides.build
.PHONY : src/CMakeFiles/nokta.dir/nokta.cpp.o.provides

src/CMakeFiles/nokta.dir/nokta.cpp.o.provides.build: src/CMakeFiles/nokta.dir/nokta.cpp.o


# Object files for target nokta
nokta_OBJECTS = \
"CMakeFiles/nokta.dir/nokta.cpp.o"

# External object files for target nokta
nokta_EXTERNAL_OBJECTS =

src/libnokta.a: src/CMakeFiles/nokta.dir/nokta.cpp.o
src/libnokta.a: src/CMakeFiles/nokta.dir/build.make
src/libnokta.a: src/CMakeFiles/nokta.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eylul/Desktop/nokta_proj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libnokta.a"
	cd /home/eylul/Desktop/nokta_proj/build/src && $(CMAKE_COMMAND) -P CMakeFiles/nokta.dir/cmake_clean_target.cmake
	cd /home/eylul/Desktop/nokta_proj/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nokta.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/nokta.dir/build: src/libnokta.a

.PHONY : src/CMakeFiles/nokta.dir/build

src/CMakeFiles/nokta.dir/requires: src/CMakeFiles/nokta.dir/nokta.cpp.o.requires

.PHONY : src/CMakeFiles/nokta.dir/requires

src/CMakeFiles/nokta.dir/clean:
	cd /home/eylul/Desktop/nokta_proj/build/src && $(CMAKE_COMMAND) -P CMakeFiles/nokta.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/nokta.dir/clean

src/CMakeFiles/nokta.dir/depend:
	cd /home/eylul/Desktop/nokta_proj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eylul/Desktop/nokta_proj /home/eylul/Desktop/nokta_proj/src /home/eylul/Desktop/nokta_proj/build /home/eylul/Desktop/nokta_proj/build/src /home/eylul/Desktop/nokta_proj/build/src/CMakeFiles/nokta.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/nokta.dir/depend
