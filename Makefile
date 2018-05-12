#############################################################################
# Makefile for building: MapManager
# Generated by qmake (2.01a) (Qt 4.8.6) on: Fri Apr 20 10:12:45 2018
# Project:  MapManager.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/lib/qt4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile MapManager.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/lib/qt4/mkspecs/linux-g++ -I. -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include -I/usr/share/qt4/include -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -L/usr/lib -lmapcomponents -lgsslink -lqdmapacces -lqdmapqtfrm -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = 
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		qdmwina.cpp \
		distributedialog.cpp moc_mainwindow.cpp \
		moc_qdmwina.cpp \
		moc_distributedialog.cpp
OBJECTS       = main.o \
		mainwindow.o \
		qdmwina.o \
		distributedialog.o \
		moc_mainwindow.o \
		moc_qdmwina.o \
		moc_distributedialog.o
DIST          = /usr/lib/qt4/mkspecs/common/unix.conf \
		/usr/lib/qt4/mkspecs/common/linux.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt4/mkspecs/common/g++-base.conf \
		/usr/lib/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib/qt4/mkspecs/qconfig.pri \
		/usr/lib/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib/qt4/mkspecs/features/qt_config.prf \
		/usr/lib/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt4/mkspecs/features/default_pre.prf \
		/usr/lib/qt4/mkspecs/features/debug.prf \
		/usr/lib/qt4/mkspecs/features/default_post.prf \
		/usr/lib/qt4/mkspecs/features/declarative_debug.prf \
		/usr/lib/qt4/mkspecs/features/shared.prf \
		/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib/qt4/mkspecs/features/warn_on.prf \
		/usr/lib/qt4/mkspecs/features/qt.prf \
		/usr/lib/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib/qt4/mkspecs/features/moc.prf \
		/usr/lib/qt4/mkspecs/features/resources.prf \
		/usr/lib/qt4/mkspecs/features/uic.prf \
		/usr/lib/qt4/mkspecs/features/yacc.prf \
		/usr/lib/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/mkspecs/features/include_source_dir.prf \
		MapManager.pro
QMAKE_TARGET  = MapManager
DESTDIR       = 
TARGET        = MapManager

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_distributedialog.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: MapManager.pro  /usr/lib/qt4/mkspecs/linux-g++/qmake.conf /usr/lib/qt4/mkspecs/common/unix.conf \
		/usr/lib/qt4/mkspecs/common/linux.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt4/mkspecs/common/g++-base.conf \
		/usr/lib/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib/qt4/mkspecs/qconfig.pri \
		/usr/lib/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib/qt4/mkspecs/features/qt_config.prf \
		/usr/lib/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt4/mkspecs/features/default_pre.prf \
		/usr/lib/qt4/mkspecs/features/debug.prf \
		/usr/lib/qt4/mkspecs/features/default_post.prf \
		/usr/lib/qt4/mkspecs/features/declarative_debug.prf \
		/usr/lib/qt4/mkspecs/features/shared.prf \
		/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib/qt4/mkspecs/features/warn_on.prf \
		/usr/lib/qt4/mkspecs/features/qt.prf \
		/usr/lib/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib/qt4/mkspecs/features/moc.prf \
		/usr/lib/qt4/mkspecs/features/resources.prf \
		/usr/lib/qt4/mkspecs/features/uic.prf \
		/usr/lib/qt4/mkspecs/features/yacc.prf \
		/usr/lib/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/lib/qt4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile MapManager.pro
/usr/lib/qt4/mkspecs/common/unix.conf:
/usr/lib/qt4/mkspecs/common/linux.conf:
/usr/lib/qt4/mkspecs/common/gcc-base.conf:
/usr/lib/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/lib/qt4/mkspecs/common/g++-base.conf:
/usr/lib/qt4/mkspecs/common/g++-unix.conf:
/usr/lib/qt4/mkspecs/qconfig.pri:
/usr/lib/qt4/mkspecs/features/qt_functions.prf:
/usr/lib/qt4/mkspecs/features/qt_config.prf:
/usr/lib/qt4/mkspecs/features/exclusive_builds.prf:
/usr/lib/qt4/mkspecs/features/default_pre.prf:
/usr/lib/qt4/mkspecs/features/debug.prf:
/usr/lib/qt4/mkspecs/features/default_post.prf:
/usr/lib/qt4/mkspecs/features/declarative_debug.prf:
/usr/lib/qt4/mkspecs/features/shared.prf:
/usr/lib/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/lib/qt4/mkspecs/features/warn_on.prf:
/usr/lib/qt4/mkspecs/features/qt.prf:
/usr/lib/qt4/mkspecs/features/unix/thread.prf:
/usr/lib/qt4/mkspecs/features/moc.prf:
/usr/lib/qt4/mkspecs/features/resources.prf:
/usr/lib/qt4/mkspecs/features/uic.prf:
/usr/lib/qt4/mkspecs/features/yacc.prf:
/usr/lib/qt4/mkspecs/features/lex.prf:
/usr/lib/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/lib/qt4/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile MapManager.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/MapManager1.0.0 || $(MKDIR) .tmp/MapManager1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/MapManager1.0.0/ && $(COPY_FILE) --parents mainwindow.h qdmwina.h common.h distributedialog.h .tmp/MapManager1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp qdmwina.cpp distributedialog.cpp .tmp/MapManager1.0.0/ && $(COPY_FILE) --parents mainwindow.ui distributedialog.ui .tmp/MapManager1.0.0/ && (cd `dirname .tmp/MapManager1.0.0` && $(TAR) MapManager1.0.0.tar MapManager1.0.0 && $(COMPRESS) MapManager1.0.0.tar) && $(MOVE) `dirname .tmp/MapManager1.0.0`/MapManager1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/MapManager1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_qdmwina.cpp moc_distributedialog.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_qdmwina.cpp moc_distributedialog.cpp
moc_mainwindow.cpp: qdmwina.h \
		common.h \
		distributedialog.h \
		mainwindow.h
	/usr/lib/qt4/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_qdmwina.cpp: common.h \
		qdmwina.h
	/usr/lib/qt4/bin/moc $(DEFINES) $(INCPATH) qdmwina.h -o moc_qdmwina.cpp

moc_distributedialog.cpp: distributedialog.h
	/usr/lib/qt4/bin/moc $(DEFINES) $(INCPATH) distributedialog.h -o moc_distributedialog.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_distributedialog.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_distributedialog.h
ui_mainwindow.h: mainwindow.ui
	/usr/lib/qt4/bin/uic mainwindow.ui -o ui_mainwindow.h

ui_distributedialog.h: distributedialog.ui
	/usr/lib/qt4/bin/uic distributedialog.ui -o ui_distributedialog.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		qdmwina.h \
		common.h \
		distributedialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		qdmwina.h \
		common.h \
		distributedialog.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

qdmwina.o: qdmwina.cpp qdmwina.h \
		common.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qdmwina.o qdmwina.cpp

distributedialog.o: distributedialog.cpp distributedialog.h \
		ui_distributedialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o distributedialog.o distributedialog.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_qdmwina.o: moc_qdmwina.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qdmwina.o moc_qdmwina.cpp

moc_distributedialog.o: moc_distributedialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_distributedialog.o moc_distributedialog.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
