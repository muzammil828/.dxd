#include <GL/glut.h>


void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0,0.0,0.0,1.0);
	glPointSize(8.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(1.0,1.0);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(0.5,-0.5);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(-0.5,0.5);
	glColor3f(0.0,1.0,1.0);
	glVertex2f(0.5,0.5);
	glEnd();
	glFlush();
}
int main(int argc , char **argv){
	glutInit(&argc , argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("hello");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

