# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/build

# Include any dependencies generated for this target.
include CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/flags.make

CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o: CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/flags.make
CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o: ../Ford_Fulkerson.cpp
CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o: CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o -MF CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o.d -o CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o -c /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/Ford_Fulkerson.cpp

CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/Ford_Fulkerson.cpp > CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.i

CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/Ford_Fulkerson.cpp -o CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.s

# Object files for target Optimizing-Traffic-Flow-with-Ford-Fulkerson
Optimizing__Traffic__Flow__with__Ford__Fulkerson_OBJECTS = \
"CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o"

# External object files for target Optimizing-Traffic-Flow-with-Ford-Fulkerson
Optimizing__Traffic__Flow__with__Ford__Fulkerson_EXTERNAL_OBJECTS =

Optimizing-Traffic-Flow-with-Ford-Fulkerson: CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/Ford_Fulkerson.cpp.o
Optimizing-Traffic-Flow-with-Ford-Fulkerson: CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/build.make
Optimizing-Traffic-Flow-with-Ford-Fulkerson: CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Optimizing-Traffic-Flow-with-Ford-Fulkerson"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/build: Optimizing-Traffic-Flow-with-Ford-Fulkerson
.PHONY : CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/build

CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/clean

CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/depend:
	cd /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/build /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/build /home/yeeeee/NSD/Optimizing-Traffic-Flow-with-Ford-Fulkerson/build/CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Optimizing-Traffic-Flow-with-Ford-Fulkerson.dir/depend
