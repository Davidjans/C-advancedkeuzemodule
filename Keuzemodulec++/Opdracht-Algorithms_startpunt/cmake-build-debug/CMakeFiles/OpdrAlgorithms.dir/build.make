# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\david\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\david\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/OpdrAlgorithms.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/OpdrAlgorithms.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/OpdrAlgorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpdrAlgorithms.dir/flags.make

CMakeFiles/OpdrAlgorithms.dir/main.cpp.obj: CMakeFiles/OpdrAlgorithms.dir/flags.make
CMakeFiles/OpdrAlgorithms.dir/main.cpp.obj: ../main.cpp
CMakeFiles/OpdrAlgorithms.dir/main.cpp.obj: CMakeFiles/OpdrAlgorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpdrAlgorithms.dir/main.cpp.obj"
	C:\Users\david\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpdrAlgorithms.dir/main.cpp.obj -MF CMakeFiles\OpdrAlgorithms.dir\main.cpp.obj.d -o CMakeFiles\OpdrAlgorithms.dir\main.cpp.obj -c "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\main.cpp"

CMakeFiles/OpdrAlgorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpdrAlgorithms.dir/main.cpp.i"
	C:\Users\david\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\main.cpp" > CMakeFiles\OpdrAlgorithms.dir\main.cpp.i

CMakeFiles/OpdrAlgorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpdrAlgorithms.dir/main.cpp.s"
	C:\Users\david\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\main.cpp" -o CMakeFiles\OpdrAlgorithms.dir\main.cpp.s

# Object files for target OpdrAlgorithms
OpdrAlgorithms_OBJECTS = \
"CMakeFiles/OpdrAlgorithms.dir/main.cpp.obj"

# External object files for target OpdrAlgorithms
OpdrAlgorithms_EXTERNAL_OBJECTS =

OpdrAlgorithms.exe: CMakeFiles/OpdrAlgorithms.dir/main.cpp.obj
OpdrAlgorithms.exe: CMakeFiles/OpdrAlgorithms.dir/build.make
OpdrAlgorithms.exe: CMakeFiles/OpdrAlgorithms.dir/linklibs.rsp
OpdrAlgorithms.exe: CMakeFiles/OpdrAlgorithms.dir/objects1.rsp
OpdrAlgorithms.exe: CMakeFiles/OpdrAlgorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OpdrAlgorithms.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\OpdrAlgorithms.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpdrAlgorithms.dir/build: OpdrAlgorithms.exe
.PHONY : CMakeFiles/OpdrAlgorithms.dir/build

CMakeFiles/OpdrAlgorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\OpdrAlgorithms.dir\cmake_clean.cmake
.PHONY : CMakeFiles/OpdrAlgorithms.dir/clean

CMakeFiles/OpdrAlgorithms.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt" "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt" "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\cmake-build-debug" "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\cmake-build-debug" "D:\HKU\Jaar 2\C-advancedkeuzemodule\Keuzemodulec++\Opdracht-Algorithms_startpunt\cmake-build-debug\CMakeFiles\OpdrAlgorithms.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/OpdrAlgorithms.dir/depend

