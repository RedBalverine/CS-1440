# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CS_1440.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CS_1440.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS_1440.dir/flags.make

CMakeFiles/CS_1440.dir/main.cpp.obj: CMakeFiles/CS_1440.dir/flags.make
CMakeFiles/CS_1440.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS_1440.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CS_1440.dir\main.cpp.obj -c C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\main.cpp

CMakeFiles/CS_1440.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS_1440.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\main.cpp > CMakeFiles\CS_1440.dir\main.cpp.i

CMakeFiles/CS_1440.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS_1440.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-6~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\main.cpp -o CMakeFiles\CS_1440.dir\main.cpp.s

CMakeFiles/CS_1440.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/CS_1440.dir/main.cpp.obj.requires

CMakeFiles/CS_1440.dir/main.cpp.obj.provides: CMakeFiles/CS_1440.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\CS_1440.dir\build.make CMakeFiles/CS_1440.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/CS_1440.dir/main.cpp.obj.provides

CMakeFiles/CS_1440.dir/main.cpp.obj.provides.build: CMakeFiles/CS_1440.dir/main.cpp.obj


# Object files for target CS_1440
CS_1440_OBJECTS = \
"CMakeFiles/CS_1440.dir/main.cpp.obj"

# External object files for target CS_1440
CS_1440_EXTERNAL_OBJECTS =

CS_1440.exe: CMakeFiles/CS_1440.dir/main.cpp.obj
CS_1440.exe: CMakeFiles/CS_1440.dir/build.make
CS_1440.exe: CMakeFiles/CS_1440.dir/linklibs.rsp
CS_1440.exe: CMakeFiles/CS_1440.dir/objects1.rsp
CS_1440.exe: CMakeFiles/CS_1440.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CS_1440.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CS_1440.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS_1440.dir/build: CS_1440.exe

.PHONY : CMakeFiles/CS_1440.dir/build

CMakeFiles/CS_1440.dir/requires: CMakeFiles/CS_1440.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/CS_1440.dir/requires

CMakeFiles/CS_1440.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CS_1440.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CS_1440.dir/clean

CMakeFiles/CS_1440.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440 C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440 C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\cmake-build-debug C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\cmake-build-debug C:\Users\Kimba\OneDrive\Documents\GitHub\CS-1440\cmake-build-debug\CMakeFiles\CS_1440.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS_1440.dir/depend

