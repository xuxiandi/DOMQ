# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/u2/workstation/framework/framework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/u2/workstation/framework/framework

# Include any dependencies generated for this target.
include test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/depend.make

# Include the progress variables for this target.
include test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/progress.make

# Include the compile flags for this target's objects.
include test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/flags.make

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/flags.make
test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o: test/test_connectionmgr/addmsg.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/u2/workstation/framework/framework/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o -c /home/u2/workstation/framework/framework/test/test_connectionmgr/addmsg.cpp

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_connectionmgr.dir/addmsg.cpp.i"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/u2/workstation/framework/framework/test/test_connectionmgr/addmsg.cpp > CMakeFiles/test_connectionmgr.dir/addmsg.cpp.i

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_connectionmgr.dir/addmsg.cpp.s"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/u2/workstation/framework/framework/test/test_connectionmgr/addmsg.cpp -o CMakeFiles/test_connectionmgr.dir/addmsg.cpp.s

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.requires:
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.requires

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.provides: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.requires
	$(MAKE) -f test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/build.make test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.provides.build
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.provides

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.provides.build: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.provides.build

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/flags.make
test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o: test/test_connectionmgr/msgfactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/u2/workstation/framework/framework/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o -c /home/u2/workstation/framework/framework/test/test_connectionmgr/msgfactory.cpp

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.i"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/u2/workstation/framework/framework/test/test_connectionmgr/msgfactory.cpp > CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.i

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.s"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/u2/workstation/framework/framework/test/test_connectionmgr/msgfactory.cpp -o CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.s

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.requires:
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.requires

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.provides: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.requires
	$(MAKE) -f test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/build.make test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.provides.build
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.provides

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.provides.build: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.provides.build

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/flags.make
test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o: test/test_connectionmgr/pmsg/addmsg.pb.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/u2/workstation/framework/framework/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o -c /home/u2/workstation/framework/framework/test/test_connectionmgr/pmsg/addmsg.pb.cc

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.i"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/u2/workstation/framework/framework/test/test_connectionmgr/pmsg/addmsg.pb.cc > CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.i

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.s"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/u2/workstation/framework/framework/test/test_connectionmgr/pmsg/addmsg.pb.cc -o CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.s

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.requires:
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.requires

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.provides: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.requires
	$(MAKE) -f test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/build.make test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.provides.build
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.provides

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.provides.build: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.provides.build

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/flags.make
test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o: test/test_connectionmgr/test_connectionmgr.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/u2/workstation/framework/framework/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o -c /home/u2/workstation/framework/framework/test/test_connectionmgr/test_connectionmgr.cpp

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.i"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/u2/workstation/framework/framework/test/test_connectionmgr/test_connectionmgr.cpp > CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.i

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.s"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/u2/workstation/framework/framework/test/test_connectionmgr/test_connectionmgr.cpp -o CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.s

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.requires:
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.requires

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.provides: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.requires
	$(MAKE) -f test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/build.make test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.provides.build
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.provides

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.provides.build: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.provides.build

# Object files for target test_connectionmgr
test_connectionmgr_OBJECTS = \
"CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o" \
"CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o" \
"CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o" \
"CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o"

# External object files for target test_connectionmgr
test_connectionmgr_EXTERNAL_OBJECTS =

test/test_connectionmgr/test_connectionmgr: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o
test/test_connectionmgr/test_connectionmgr: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o
test/test_connectionmgr/test_connectionmgr: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o
test/test_connectionmgr/test_connectionmgr: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o
test/test_connectionmgr/test_connectionmgr: lib/libac.a
test/test_connectionmgr/test_connectionmgr: lib/libnetmgr.a
test/test_connectionmgr/test_connectionmgr: /usr/lib/libpthread.so
test/test_connectionmgr/test_connectionmgr: /usr/lib/librt.so
test/test_connectionmgr/test_connectionmgr: lib/libac.a
test/test_connectionmgr/test_connectionmgr: /usr/lib/libevent.a
test/test_connectionmgr/test_connectionmgr: /usr/local/lib/libprotobuf.a
test/test_connectionmgr/test_connectionmgr: /usr/lib/libjson.a
test/test_connectionmgr/test_connectionmgr: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/build.make
test/test_connectionmgr/test_connectionmgr: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable test_connectionmgr"
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_connectionmgr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/build: test/test_connectionmgr/test_connectionmgr
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/build

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/requires: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/addmsg.cpp.o.requires
test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/requires: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/msgfactory.cpp.o.requires
test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/requires: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/pmsg/addmsg.pb.cc.o.requires
test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/requires: test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/test_connectionmgr.cpp.o.requires
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/requires

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/clean:
	cd /home/u2/workstation/framework/framework/test/test_connectionmgr && $(CMAKE_COMMAND) -P CMakeFiles/test_connectionmgr.dir/cmake_clean.cmake
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/clean

test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/depend:
	cd /home/u2/workstation/framework/framework && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/u2/workstation/framework/framework /home/u2/workstation/framework/framework/test/test_connectionmgr /home/u2/workstation/framework/framework /home/u2/workstation/framework/framework/test/test_connectionmgr /home/u2/workstation/framework/framework/test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/test_connectionmgr/CMakeFiles/test_connectionmgr.dir/depend

