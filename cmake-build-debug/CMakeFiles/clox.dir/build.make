# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\david\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7442.42\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\david\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7442.42\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\clox.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\clox.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\clox.dir\flags.make

CMakeFiles\clox.dir\main.c.obj: CMakeFiles\clox.dir\flags.make
CMakeFiles\clox.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/clox.dir/main.c.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\clox.dir\main.c.obj /FdCMakeFiles\clox.dir\ /FS -c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\main.c"
<<

CMakeFiles\clox.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clox.dir/main.c.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\clox.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\main.c"
<<

CMakeFiles\clox.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clox.dir/main.c.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\clox.dir\main.c.s /c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\main.c"
<<

CMakeFiles\clox.dir\chunk.c.obj: CMakeFiles\clox.dir\flags.make
CMakeFiles\clox.dir\chunk.c.obj: ..\chunk.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/clox.dir/chunk.c.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\clox.dir\chunk.c.obj /FdCMakeFiles\clox.dir\ /FS -c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\chunk.c"
<<

CMakeFiles\clox.dir\chunk.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clox.dir/chunk.c.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\clox.dir\chunk.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\chunk.c"
<<

CMakeFiles\clox.dir\chunk.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clox.dir/chunk.c.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\clox.dir\chunk.c.s /c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\chunk.c"
<<

CMakeFiles\clox.dir\memory.c.obj: CMakeFiles\clox.dir\flags.make
CMakeFiles\clox.dir\memory.c.obj: ..\memory.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/clox.dir/memory.c.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\clox.dir\memory.c.obj /FdCMakeFiles\clox.dir\ /FS -c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\memory.c"
<<

CMakeFiles\clox.dir\memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clox.dir/memory.c.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\clox.dir\memory.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\memory.c"
<<

CMakeFiles\clox.dir\memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clox.dir/memory.c.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\clox.dir\memory.c.s /c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\memory.c"
<<

CMakeFiles\clox.dir\debug.c.obj: CMakeFiles\clox.dir\flags.make
CMakeFiles\clox.dir\debug.c.obj: ..\debug.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/clox.dir/debug.c.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\clox.dir\debug.c.obj /FdCMakeFiles\clox.dir\ /FS -c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\debug.c"
<<

CMakeFiles\clox.dir\debug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clox.dir/debug.c.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\clox.dir\debug.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\debug.c"
<<

CMakeFiles\clox.dir\debug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clox.dir/debug.c.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\clox.dir\debug.c.s /c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\debug.c"
<<

CMakeFiles\clox.dir\value.c.obj: CMakeFiles\clox.dir\flags.make
CMakeFiles\clox.dir\value.c.obj: ..\value.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/clox.dir/value.c.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\clox.dir\value.c.obj /FdCMakeFiles\clox.dir\ /FS -c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\value.c"
<<

CMakeFiles\clox.dir\value.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clox.dir/value.c.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe > CMakeFiles\clox.dir\value.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\value.c"
<<

CMakeFiles\clox.dir\value.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clox.dir/value.c.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\clox.dir\value.c.s /c "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\value.c"
<<

# Object files for target clox
clox_OBJECTS = \
"CMakeFiles\clox.dir\main.c.obj" \
"CMakeFiles\clox.dir\chunk.c.obj" \
"CMakeFiles\clox.dir\memory.c.obj" \
"CMakeFiles\clox.dir\debug.c.obj" \
"CMakeFiles\clox.dir\value.c.obj"

# External object files for target clox
clox_EXTERNAL_OBJECTS =

clox.exe: CMakeFiles\clox.dir\main.c.obj
clox.exe: CMakeFiles\clox.dir\chunk.c.obj
clox.exe: CMakeFiles\clox.dir\memory.c.obj
clox.exe: CMakeFiles\clox.dir\debug.c.obj
clox.exe: CMakeFiles\clox.dir\value.c.obj
clox.exe: CMakeFiles\clox.dir\build.make
clox.exe: CMakeFiles\clox.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable clox.exe"
	C:\Users\david\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7442.42\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\clox.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\clox.dir\objects1.rsp @<<
 /out:clox.exe /implib:clox.lib /pdb:"C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug\clox.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\clox.dir\build: clox.exe

.PHONY : CMakeFiles\clox.dir\build

CMakeFiles\clox.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\clox.dir\cmake_clean.cmake
.PHONY : CMakeFiles\clox.dir\clean

CMakeFiles\clox.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox" "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox" "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug" "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug" "C:\Users\david\OneDrive - David Wilcox Photography\Code\clox\cmake-build-debug\CMakeFiles\clox.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\clox.dir\depend

