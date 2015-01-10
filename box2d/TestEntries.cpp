#include "./Framework/Test.h"
#include "./Framework/Render.h"
//#include "./../freeglut/GL/glut.h"
#include <cstring>

#include "Bridge.h"

TestEntry g_testEntries[] =
{
	{"Bridge", Bridge::Create},
	{NULL, NULL}
};
