#LIBPATH += -L"/System/Library/Framworks/OpenGL.framwork/Libraries"
#FRAMEWORK = -framework GLUT
#FRAMEWORK += -framework OpenGL
#LIBRARIES += -lGL -lGLU -lm

CC = gcc
CXX = g++
CCFLAGS = -Wall -g 
CXXFLAGS = -Wall -g 
FRAMEWORK = -framework OpenGL -framework GLUT

SRC = ./Framework/Render.cpp ./Framework/Test.cpp ./Framework/Main.cpp TestEntries.cpp
OBJECTS = ${SRC:.cpp = .o}
TARGET = Bridge

INCLUDES += -I/System/Library/Frameworks/OpenGL.framework/Headers -I/System/Library/Frameworks/GLUT.framework/Headers -I../ -I. 

#INCLUDES = -I../ -I.

STATICLIBS = -L../Build/freeglut -lfreeglut_static -L../Build/glui -lglui -L../Build/Box2D -lBox2D
SHAREDLIBS = -L/System/Library/Frameworks/OpenGL.framework/Libraries -lGL -lGLU 

### build
$(TARGET):$(OBJECTS)
	${CXX} ${CXXFLAGS} ${FRAMEWORK} ${INCLUDES} ${OBJECTS} -o ${TARGET} ${SHAREDLIBS} ${STATICLIBS}

###compile
$(OBJECTS):$(SRC)
	$(CXX) $(CXXFLAGS) ${FRAMEWORK} $(INCLUDES)  $^ -c $@
	
clean:
	rm -f ${OBJECTS} ${TRAGET} core




