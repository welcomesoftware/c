# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/share/clion-2020.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /usr/share/clion-2020.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/welcome/Documentos/Proyectos/C/CantidadSegundos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/welcome/Documentos/Proyectos/C/CantidadSegundos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CantidadSegundos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CantidadSegundos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CantidadSegundos.dir/flags.make

CMakeFiles/CantidadSegundos.dir/main.c.o: CMakeFiles/CantidadSegundos.dir/flags.make
CMakeFiles/CantidadSegundos.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/welcome/Documentos/Proyectos/C/CantidadSegundos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CantidadSegundos.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CantidadSegundos.dir/main.c.o   -c /home/welcome/Documentos/Proyectos/C/CantidadSegundos/main.c

CMakeFiles/CantidadSegundos.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CantidadSegundos.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/welcome/Documentos/Proyectos/C/CantidadSegundos/main.c > CMakeFiles/CantidadSegundos.dir/main.c.i

CMakeFiles/CantidadSegundos.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CantidadSegundos.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/welcome/Documentos/Proyectos/C/CantidadSegundos/main.c -o CMakeFiles/CantidadSegundos.dir/main.c.s

# Object files for target CantidadSegundos
CantidadSegundos_OBJECTS = \
"CMakeFiles/CantidadSegundos.dir/main.c.o"

# External object files for target CantidadSegundos
CantidadSegundos_EXTERNAL_OBJECTS =

CantidadSegundos: CMakeFiles/CantidadSegundos.dir/main.c.o
CantidadSegundos: CMakeFiles/CantidadSegundos.dir/build.make
CantidadSegundos: CMakeFiles/CantidadSegundos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/welcome/Documentos/Proyectos/C/CantidadSegundos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CantidadSegundos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CantidadSegundos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CantidadSegundos.dir/build: CantidadSegundos

.PHONY : CMakeFiles/CantidadSegundos.dir/build

CMakeFiles/CantidadSegundos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CantidadSegundos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CantidadSegundos.dir/clean

CMakeFiles/CantidadSegundos.dir/depend:
	cd /home/welcome/Documentos/Proyectos/C/CantidadSegundos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/welcome/Documentos/Proyectos/C/CantidadSegundos /home/welcome/Documentos/Proyectos/C/CantidadSegundos /home/welcome/Documentos/Proyectos/C/CantidadSegundos/cmake-build-debug /home/welcome/Documentos/Proyectos/C/CantidadSegundos/cmake-build-debug /home/welcome/Documentos/Proyectos/C/CantidadSegundos/cmake-build-debug/CMakeFiles/CantidadSegundos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CantidadSegundos.dir/depend

