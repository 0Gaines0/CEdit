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
CMAKE_SOURCE_DIR = /home/gaines/dev/Cedit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gaines/dev/Cedit/build

# Include any dependencies generated for this target.
include CMakeFiles/MyQtApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyQtApp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyQtApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyQtApp.dir/flags.make

CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o: CMakeFiles/MyQtApp.dir/flags.make
CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o: MyQtApp_autogen/mocs_compilation.cpp
CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o: CMakeFiles/MyQtApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaines/dev/Cedit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o -MF CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o -c /home/gaines/dev/Cedit/build/MyQtApp_autogen/mocs_compilation.cpp

CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaines/dev/Cedit/build/MyQtApp_autogen/mocs_compilation.cpp > CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.i

CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaines/dev/Cedit/build/MyQtApp_autogen/mocs_compilation.cpp -o CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.s

CMakeFiles/MyQtApp.dir/main.cpp.o: CMakeFiles/MyQtApp.dir/flags.make
CMakeFiles/MyQtApp.dir/main.cpp.o: ../main.cpp
CMakeFiles/MyQtApp.dir/main.cpp.o: CMakeFiles/MyQtApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaines/dev/Cedit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyQtApp.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyQtApp.dir/main.cpp.o -MF CMakeFiles/MyQtApp.dir/main.cpp.o.d -o CMakeFiles/MyQtApp.dir/main.cpp.o -c /home/gaines/dev/Cedit/main.cpp

CMakeFiles/MyQtApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyQtApp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaines/dev/Cedit/main.cpp > CMakeFiles/MyQtApp.dir/main.cpp.i

CMakeFiles/MyQtApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyQtApp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaines/dev/Cedit/main.cpp -o CMakeFiles/MyQtApp.dir/main.cpp.s

CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o: CMakeFiles/MyQtApp.dir/flags.make
CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o: ../View/MainWindow.cpp
CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o: CMakeFiles/MyQtApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaines/dev/Cedit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o -MF CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o.d -o CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o -c /home/gaines/dev/Cedit/View/MainWindow.cpp

CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaines/dev/Cedit/View/MainWindow.cpp > CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.i

CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaines/dev/Cedit/View/MainWindow.cpp -o CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.s

CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o: CMakeFiles/MyQtApp.dir/flags.make
CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o: ../View/FileTabWidget.cpp
CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o: CMakeFiles/MyQtApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaines/dev/Cedit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o -MF CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o.d -o CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o -c /home/gaines/dev/Cedit/View/FileTabWidget.cpp

CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaines/dev/Cedit/View/FileTabWidget.cpp > CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.i

CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaines/dev/Cedit/View/FileTabWidget.cpp -o CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.s

CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o: CMakeFiles/MyQtApp.dir/flags.make
CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o: ../View/NumberedLineArea.cpp
CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o: CMakeFiles/MyQtApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaines/dev/Cedit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o -MF CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o.d -o CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o -c /home/gaines/dev/Cedit/View/NumberedLineArea.cpp

CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaines/dev/Cedit/View/NumberedLineArea.cpp > CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.i

CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaines/dev/Cedit/View/NumberedLineArea.cpp -o CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.s

CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o: CMakeFiles/MyQtApp.dir/flags.make
CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o: ../View/TextEditor.cpp
CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o: CMakeFiles/MyQtApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaines/dev/Cedit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o -MF CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o.d -o CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o -c /home/gaines/dev/Cedit/View/TextEditor.cpp

CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaines/dev/Cedit/View/TextEditor.cpp > CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.i

CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaines/dev/Cedit/View/TextEditor.cpp -o CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.s

# Object files for target MyQtApp
MyQtApp_OBJECTS = \
"CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/MyQtApp.dir/main.cpp.o" \
"CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o" \
"CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o" \
"CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o" \
"CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o"

# External object files for target MyQtApp
MyQtApp_EXTERNAL_OBJECTS =

MyQtApp: CMakeFiles/MyQtApp.dir/MyQtApp_autogen/mocs_compilation.cpp.o
MyQtApp: CMakeFiles/MyQtApp.dir/main.cpp.o
MyQtApp: CMakeFiles/MyQtApp.dir/View/MainWindow.cpp.o
MyQtApp: CMakeFiles/MyQtApp.dir/View/FileTabWidget.cpp.o
MyQtApp: CMakeFiles/MyQtApp.dir/View/NumberedLineArea.cpp.o
MyQtApp: CMakeFiles/MyQtApp.dir/View/TextEditor.cpp.o
MyQtApp: CMakeFiles/MyQtApp.dir/build.make
MyQtApp: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
MyQtApp: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
MyQtApp: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
MyQtApp: CMakeFiles/MyQtApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaines/dev/Cedit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable MyQtApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyQtApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyQtApp.dir/build: MyQtApp
.PHONY : CMakeFiles/MyQtApp.dir/build

CMakeFiles/MyQtApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyQtApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyQtApp.dir/clean

CMakeFiles/MyQtApp.dir/depend:
	cd /home/gaines/dev/Cedit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaines/dev/Cedit /home/gaines/dev/Cedit /home/gaines/dev/Cedit/build /home/gaines/dev/Cedit/build /home/gaines/dev/Cedit/build/CMakeFiles/MyQtApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyQtApp.dir/depend

