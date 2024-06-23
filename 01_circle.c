#include <GL/glut.h>
#include <math.h>

void myInit(void){
	glClearColor(0.0f,0.0f,0.0f,1.0f);
	glColor3f(0.0,1.0,0.0);
	glPointSize(2.0f);
	glLoadIdentity();
	gluOrtho2D(-780,780,-420,420);
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	float x ,y ,i;
	for(i = 0 ; i < 2*180; i+=0.001){
		x = 200 * cos(i);
		y = 200 * sin(i);
		glVertex2i(x,y);
	}
	glEnd();
	glFlush();
}

int main(int argv , char **argc){
	glutInit(&argv , argc);
	glutInitWindowSize(800,600);
	glutCreateWindow("Helo");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

