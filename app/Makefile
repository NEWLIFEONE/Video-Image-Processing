#############################################################################
# Makefile for building: ../bin/app
# Generated by qmake (2.01a) (Qt 4.8.3) on: Fri Mar 24 23:47:26 2017
# Project:  app.pro
# Template: app
# Command: /usr/local/qt4.8_arm/bin/qmake -o Makefile app.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-linux-gcc
CXX           = arm-linux-g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/qt4.8_arm/mkspecs/qws/linux-arm-g++ -I. -I/usr/local/qt4.8_arm/include/QtCore -I/usr/local/qt4.8_arm/include/QtNetwork -I/usr/local/qt4.8_arm/include/QtGui -I/usr/local/qt4.8_arm/include -I. -I../include -I/opt/lib-opencv/include -I.
LINK          = arm-linux-g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/usr/local/qt4.8_arm/lib
LIBS          = $(SUBLIBS)  -L/usr/local/qt4.8_arm/lib -lrt -L ../lib -lbase -L/opt/lib-opencv/lib -lopencv_core -lopencv_imgproc -lQtGui -L/usr/local/qt4.8_arm/lib -lQtNetwork -lQtCore -lpthread 
AR            = arm-linux-ar cqs
RANLIB        = 
QMAKE         = /usr/local/qt4.8_arm/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = arm-linux-strip
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

SOURCES       = main.cpp 
OBJECTS       = main.o
DIST          = /usr/local/qt4.8_arm/mkspecs/common/unix.conf \
		/usr/local/qt4.8_arm/mkspecs/common/linux.conf \
		/usr/local/qt4.8_arm/mkspecs/common/gcc-base.conf \
		/usr/local/qt4.8_arm/mkspecs/common/gcc-base-unix.conf \
		/usr/local/qt4.8_arm/mkspecs/common/g++-base.conf \
		/usr/local/qt4.8_arm/mkspecs/common/g++-unix.conf \
		/usr/local/qt4.8_arm/mkspecs/common/qws.conf \
		/usr/local/qt4.8_arm/mkspecs/qconfig.pri \
		/usr/local/qt4.8_arm/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/qt4.8_arm/mkspecs/features/qt_functions.prf \
		/usr/local/qt4.8_arm/mkspecs/features/qt_config.prf \
		/usr/local/qt4.8_arm/mkspecs/features/exclusive_builds.prf \
		/usr/local/qt4.8_arm/mkspecs/features/default_pre.prf \
		/usr/local/qt4.8_arm/mkspecs/features/release.prf \
		/usr/local/qt4.8_arm/mkspecs/features/default_post.prf \
		/usr/local/qt4.8_arm/mkspecs/features/warn_on.prf \
		/usr/local/qt4.8_arm/mkspecs/features/qt.prf \
		/usr/local/qt4.8_arm/mkspecs/features/unix/thread.prf \
		/usr/local/qt4.8_arm/mkspecs/features/moc.prf \
		/usr/local/qt4.8_arm/mkspecs/features/resources.prf \
		/usr/local/qt4.8_arm/mkspecs/features/uic.prf \
		/usr/local/qt4.8_arm/mkspecs/features/yacc.prf \
		/usr/local/qt4.8_arm/mkspecs/features/lex.prf \
		/usr/local/qt4.8_arm/mkspecs/features/include_source_dir.prf \
		app.pro
QMAKE_TARGET  = app
DESTDIR       = ../bin/
TARGET        = ../bin/app

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

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) ../bin/ || $(MKDIR) ../bin/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: app.pro  /usr/local/qt4.8_arm/mkspecs/qws/linux-arm-g++/qmake.conf /usr/local/qt4.8_arm/mkspecs/common/unix.conf \
		/usr/local/qt4.8_arm/mkspecs/common/linux.conf \
		/usr/local/qt4.8_arm/mkspecs/common/gcc-base.conf \
		/usr/local/qt4.8_arm/mkspecs/common/gcc-base-unix.conf \
		/usr/local/qt4.8_arm/mkspecs/common/g++-base.conf \
		/usr/local/qt4.8_arm/mkspecs/common/g++-unix.conf \
		/usr/local/qt4.8_arm/mkspecs/common/qws.conf \
		/usr/local/qt4.8_arm/mkspecs/qconfig.pri \
		/usr/local/qt4.8_arm/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/qt4.8_arm/mkspecs/features/qt_functions.prf \
		/usr/local/qt4.8_arm/mkspecs/features/qt_config.prf \
		/usr/local/qt4.8_arm/mkspecs/features/exclusive_builds.prf \
		/usr/local/qt4.8_arm/mkspecs/features/default_pre.prf \
		/usr/local/qt4.8_arm/mkspecs/features/release.prf \
		/usr/local/qt4.8_arm/mkspecs/features/default_post.prf \
		/usr/local/qt4.8_arm/mkspecs/features/warn_on.prf \
		/usr/local/qt4.8_arm/mkspecs/features/qt.prf \
		/usr/local/qt4.8_arm/mkspecs/features/unix/thread.prf \
		/usr/local/qt4.8_arm/mkspecs/features/moc.prf \
		/usr/local/qt4.8_arm/mkspecs/features/resources.prf \
		/usr/local/qt4.8_arm/mkspecs/features/uic.prf \
		/usr/local/qt4.8_arm/mkspecs/features/yacc.prf \
		/usr/local/qt4.8_arm/mkspecs/features/lex.prf \
		/usr/local/qt4.8_arm/mkspecs/features/include_source_dir.prf \
		/usr/local/qt4.8_arm/lib/libQtGui.prl \
		/usr/local/qt4.8_arm/lib/libQtNetwork.prl \
		/usr/local/qt4.8_arm/lib/libQtCore.prl
	$(QMAKE) -o Makefile app.pro
/usr/local/qt4.8_arm/mkspecs/common/unix.conf:
/usr/local/qt4.8_arm/mkspecs/common/linux.conf:
/usr/local/qt4.8_arm/mkspecs/common/gcc-base.conf:
/usr/local/qt4.8_arm/mkspecs/common/gcc-base-unix.conf:
/usr/local/qt4.8_arm/mkspecs/common/g++-base.conf:
/usr/local/qt4.8_arm/mkspecs/common/g++-unix.conf:
/usr/local/qt4.8_arm/mkspecs/common/qws.conf:
/usr/local/qt4.8_arm/mkspecs/qconfig.pri:
/usr/local/qt4.8_arm/mkspecs/modules/qt_webkit_version.pri:
/usr/local/qt4.8_arm/mkspecs/features/qt_functions.prf:
/usr/local/qt4.8_arm/mkspecs/features/qt_config.prf:
/usr/local/qt4.8_arm/mkspecs/features/exclusive_builds.prf:
/usr/local/qt4.8_arm/mkspecs/features/default_pre.prf:
/usr/local/qt4.8_arm/mkspecs/features/release.prf:
/usr/local/qt4.8_arm/mkspecs/features/default_post.prf:
/usr/local/qt4.8_arm/mkspecs/features/warn_on.prf:
/usr/local/qt4.8_arm/mkspecs/features/qt.prf:
/usr/local/qt4.8_arm/mkspecs/features/unix/thread.prf:
/usr/local/qt4.8_arm/mkspecs/features/moc.prf:
/usr/local/qt4.8_arm/mkspecs/features/resources.prf:
/usr/local/qt4.8_arm/mkspecs/features/uic.prf:
/usr/local/qt4.8_arm/mkspecs/features/yacc.prf:
/usr/local/qt4.8_arm/mkspecs/features/lex.prf:
/usr/local/qt4.8_arm/mkspecs/features/include_source_dir.prf:
/usr/local/qt4.8_arm/lib/libQtGui.prl:
/usr/local/qt4.8_arm/lib/libQtNetwork.prl:
/usr/local/qt4.8_arm/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile app.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/app1.0.0 || $(MKDIR) .tmp/app1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/app1.0.0/ && $(COPY_FILE) --parents IM_320_240.hpp .tmp/app1.0.0/ && $(COPY_FILE) --parents main.cpp .tmp/app1.0.0/ && (cd `dirname .tmp/app1.0.0` && $(TAR) app1.0.0.tar app1.0.0 && $(COMPRESS) app1.0.0.tar) && $(MOVE) `dirname .tmp/app1.0.0`/app1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/app1.0.0


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

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

main.o: main.cpp IM_320_240.hpp \
		/opt/lib-opencv/include/opencv2/core.hpp \
		/opt/lib-opencv/include/opencv2/core/core.hpp \
		/opt/lib-opencv/include/opencv2/core/types_c.h \
		/opt/lib-opencv/include/opencv2/core/version.hpp \
		/opt/lib-opencv/include/opencv2/core/operations.hpp \
		/opt/lib-opencv/include/opencv2/core/mat.hpp \
		/opt/lib-opencv/include/opencv2/imgproc/imgproc.hpp \
		/opt/lib-opencv/include/opencv2/imgproc/types_c.h \
		/opt/lib-opencv/include/opencv2/core/core_c.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

