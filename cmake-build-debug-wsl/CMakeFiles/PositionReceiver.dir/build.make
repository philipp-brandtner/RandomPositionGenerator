# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/philipp/RandomPositionGenerator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/philipp/RandomPositionGenerator/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/PositionReceiver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PositionReceiver.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PositionReceiver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PositionReceiver.dir/flags.make

CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o: CMakeFiles/PositionReceiver.dir/flags.make
CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o: ../main_PositionReceiver.cpp
CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o: CMakeFiles/PositionReceiver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/philipp/RandomPositionGenerator/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o -MF CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o.d -o CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o -c /home/philipp/RandomPositionGenerator/main_PositionReceiver.cpp

CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/philipp/RandomPositionGenerator/main_PositionReceiver.cpp > CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.i

CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/philipp/RandomPositionGenerator/main_PositionReceiver.cpp -o CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.s

CMakeFiles/PositionReceiver.dir/message.pb.cc.o: CMakeFiles/PositionReceiver.dir/flags.make
CMakeFiles/PositionReceiver.dir/message.pb.cc.o: ../message.pb.cc
CMakeFiles/PositionReceiver.dir/message.pb.cc.o: CMakeFiles/PositionReceiver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/philipp/RandomPositionGenerator/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PositionReceiver.dir/message.pb.cc.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PositionReceiver.dir/message.pb.cc.o -MF CMakeFiles/PositionReceiver.dir/message.pb.cc.o.d -o CMakeFiles/PositionReceiver.dir/message.pb.cc.o -c /home/philipp/RandomPositionGenerator/message.pb.cc

CMakeFiles/PositionReceiver.dir/message.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PositionReceiver.dir/message.pb.cc.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/philipp/RandomPositionGenerator/message.pb.cc > CMakeFiles/PositionReceiver.dir/message.pb.cc.i

CMakeFiles/PositionReceiver.dir/message.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PositionReceiver.dir/message.pb.cc.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/philipp/RandomPositionGenerator/message.pb.cc -o CMakeFiles/PositionReceiver.dir/message.pb.cc.s

# Object files for target PositionReceiver
PositionReceiver_OBJECTS = \
"CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o" \
"CMakeFiles/PositionReceiver.dir/message.pb.cc.o"

# External object files for target PositionReceiver
PositionReceiver_EXTERNAL_OBJECTS =

PositionReceiver: CMakeFiles/PositionReceiver.dir/main_PositionReceiver.cpp.o
PositionReceiver: CMakeFiles/PositionReceiver.dir/message.pb.cc.o
PositionReceiver: CMakeFiles/PositionReceiver.dir/build.make
PositionReceiver: CMakeFiles/PositionReceiver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/philipp/RandomPositionGenerator/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable PositionReceiver"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PositionReceiver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PositionReceiver.dir/build: PositionReceiver
.PHONY : CMakeFiles/PositionReceiver.dir/build

CMakeFiles/PositionReceiver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PositionReceiver.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PositionReceiver.dir/clean

CMakeFiles/PositionReceiver.dir/depend:
	cd /home/philipp/RandomPositionGenerator/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/philipp/RandomPositionGenerator /home/philipp/RandomPositionGenerator /home/philipp/RandomPositionGenerator/cmake-build-debug-wsl /home/philipp/RandomPositionGenerator/cmake-build-debug-wsl /home/philipp/RandomPositionGenerator/cmake-build-debug-wsl/CMakeFiles/PositionReceiver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PositionReceiver.dir/depend
