# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /home/ukasz/Clion/clion-2021.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ukasz/Clion/clion-2021.1.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ukasz/Desktop/PP2/lab_09

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ukasz/Desktop/PP2/lab_09/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab_09.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab_09.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_09.dir/flags.make

CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.o: ../sources/DoubleObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ukasz/Desktop/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.o -c /home/ukasz/Desktop/PP2/lab_09/sources/DoubleObject.cpp

CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ukasz/Desktop/PP2/lab_09/sources/DoubleObject.cpp > CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.i

CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ukasz/Desktop/PP2/lab_09/sources/DoubleObject.cpp -o CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.s

CMakeFiles/lab_09.dir/sources/StringObject.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/sources/StringObject.cpp.o: ../sources/StringObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ukasz/Desktop/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab_09.dir/sources/StringObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/sources/StringObject.cpp.o -c /home/ukasz/Desktop/PP2/lab_09/sources/StringObject.cpp

CMakeFiles/lab_09.dir/sources/StringObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/sources/StringObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ukasz/Desktop/PP2/lab_09/sources/StringObject.cpp > CMakeFiles/lab_09.dir/sources/StringObject.cpp.i

CMakeFiles/lab_09.dir/sources/StringObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/sources/StringObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ukasz/Desktop/PP2/lab_09/sources/StringObject.cpp -o CMakeFiles/lab_09.dir/sources/StringObject.cpp.s

CMakeFiles/lab_09.dir/sources/IntObject.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/sources/IntObject.cpp.o: ../sources/IntObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ukasz/Desktop/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab_09.dir/sources/IntObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/sources/IntObject.cpp.o -c /home/ukasz/Desktop/PP2/lab_09/sources/IntObject.cpp

CMakeFiles/lab_09.dir/sources/IntObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/sources/IntObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ukasz/Desktop/PP2/lab_09/sources/IntObject.cpp > CMakeFiles/lab_09.dir/sources/IntObject.cpp.i

CMakeFiles/lab_09.dir/sources/IntObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/sources/IntObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ukasz/Desktop/PP2/lab_09/sources/IntObject.cpp -o CMakeFiles/lab_09.dir/sources/IntObject.cpp.s

CMakeFiles/lab_09.dir/sources/ReadInput.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/sources/ReadInput.cpp.o: ../sources/ReadInput.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ukasz/Desktop/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab_09.dir/sources/ReadInput.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/sources/ReadInput.cpp.o -c /home/ukasz/Desktop/PP2/lab_09/sources/ReadInput.cpp

CMakeFiles/lab_09.dir/sources/ReadInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/sources/ReadInput.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ukasz/Desktop/PP2/lab_09/sources/ReadInput.cpp > CMakeFiles/lab_09.dir/sources/ReadInput.cpp.i

CMakeFiles/lab_09.dir/sources/ReadInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/sources/ReadInput.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ukasz/Desktop/PP2/lab_09/sources/ReadInput.cpp -o CMakeFiles/lab_09.dir/sources/ReadInput.cpp.s

CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.o: CMakeFiles/lab_09.dir/flags.make
CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.o: ../sources/ComplexObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ukasz/Desktop/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.o -c /home/ukasz/Desktop/PP2/lab_09/sources/ComplexObject.cpp

CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ukasz/Desktop/PP2/lab_09/sources/ComplexObject.cpp > CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.i

CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ukasz/Desktop/PP2/lab_09/sources/ComplexObject.cpp -o CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.s

# Object files for target lab_09
lab_09_OBJECTS = \
"CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.o" \
"CMakeFiles/lab_09.dir/sources/StringObject.cpp.o" \
"CMakeFiles/lab_09.dir/sources/IntObject.cpp.o" \
"CMakeFiles/lab_09.dir/sources/ReadInput.cpp.o" \
"CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.o"

# External object files for target lab_09
lab_09_EXTERNAL_OBJECTS =

liblab_09.a: CMakeFiles/lab_09.dir/sources/DoubleObject.cpp.o
liblab_09.a: CMakeFiles/lab_09.dir/sources/StringObject.cpp.o
liblab_09.a: CMakeFiles/lab_09.dir/sources/IntObject.cpp.o
liblab_09.a: CMakeFiles/lab_09.dir/sources/ReadInput.cpp.o
liblab_09.a: CMakeFiles/lab_09.dir/sources/ComplexObject.cpp.o
liblab_09.a: CMakeFiles/lab_09.dir/build.make
liblab_09.a: CMakeFiles/lab_09.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ukasz/Desktop/PP2/lab_09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library liblab_09.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lab_09.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_09.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_09.dir/build: liblab_09.a

.PHONY : CMakeFiles/lab_09.dir/build

CMakeFiles/lab_09.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab_09.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab_09.dir/clean

CMakeFiles/lab_09.dir/depend:
	cd /home/ukasz/Desktop/PP2/lab_09/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ukasz/Desktop/PP2/lab_09 /home/ukasz/Desktop/PP2/lab_09 /home/ukasz/Desktop/PP2/lab_09/cmake-build-debug /home/ukasz/Desktop/PP2/lab_09/cmake-build-debug /home/ukasz/Desktop/PP2/lab_09/cmake-build-debug/CMakeFiles/lab_09.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_09.dir/depend

