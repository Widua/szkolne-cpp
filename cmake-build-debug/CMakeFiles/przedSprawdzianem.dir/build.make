# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/widua/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/widua/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/widua/CLionProjects/przedSprawdzianem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/widua/CLionProjects/przedSprawdzianem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/przedSprawdzianem.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/przedSprawdzianem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/przedSprawdzianem.dir/flags.make

CMakeFiles/przedSprawdzianem.dir/main.cpp.o: CMakeFiles/przedSprawdzianem.dir/flags.make
CMakeFiles/przedSprawdzianem.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/widua/CLionProjects/przedSprawdzianem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/przedSprawdzianem.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/przedSprawdzianem.dir/main.cpp.o -c /home/widua/CLionProjects/przedSprawdzianem/main.cpp

CMakeFiles/przedSprawdzianem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/przedSprawdzianem.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/widua/CLionProjects/przedSprawdzianem/main.cpp > CMakeFiles/przedSprawdzianem.dir/main.cpp.i

CMakeFiles/przedSprawdzianem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/przedSprawdzianem.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/widua/CLionProjects/przedSprawdzianem/main.cpp -o CMakeFiles/przedSprawdzianem.dir/main.cpp.s

# Object files for target przedSprawdzianem
przedSprawdzianem_OBJECTS = \
"CMakeFiles/przedSprawdzianem.dir/main.cpp.o"

# External object files for target przedSprawdzianem
przedSprawdzianem_EXTERNAL_OBJECTS =

przedSprawdzianem: CMakeFiles/przedSprawdzianem.dir/main.cpp.o
przedSprawdzianem: CMakeFiles/przedSprawdzianem.dir/build.make
przedSprawdzianem: CMakeFiles/przedSprawdzianem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/widua/CLionProjects/przedSprawdzianem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable przedSprawdzianem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/przedSprawdzianem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/przedSprawdzianem.dir/build: przedSprawdzianem
.PHONY : CMakeFiles/przedSprawdzianem.dir/build

CMakeFiles/przedSprawdzianem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/przedSprawdzianem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/przedSprawdzianem.dir/clean

CMakeFiles/przedSprawdzianem.dir/depend:
	cd /home/widua/CLionProjects/przedSprawdzianem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/widua/CLionProjects/przedSprawdzianem /home/widua/CLionProjects/przedSprawdzianem /home/widua/CLionProjects/przedSprawdzianem/cmake-build-debug /home/widua/CLionProjects/przedSprawdzianem/cmake-build-debug /home/widua/CLionProjects/przedSprawdzianem/cmake-build-debug/CMakeFiles/przedSprawdzianem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/przedSprawdzianem.dir/depend

