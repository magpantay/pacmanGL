#include "App.h"

int main(int argc, char **argv)
{
	// Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);

	// Instantiate a new App
	App *myApp = new App("PacmanGL", 50, 50, 600, 600);

	// Start the app
	myApp->run();
}
