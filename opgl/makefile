LIBPATH += -L"/System/Library/Frameworks/OpenGL.framework/Libraries"
FRAMEWORK = -framework GLUT
FRAMEWORK += -framework OpenGL

COMPILERFLAGS = -Wall
CC = g++
CFLAGS = $(COMPILERFLAGS)
LIBRARIES =-lGL -lGLU -lm -lobjc -lstdc++

OBJECTS = GlutExample.o
ALL:GlutExample

GlutExample : GlutExample.o
	$(CC) $(FRAMEWORK) $(CFLAGS) -o $@ $(LIBPATH) $(OBJECTS) 

#$(LIBRARIES)
#	./GlutExample

clean:
	\rm *.o *~ 

