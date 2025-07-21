#include <GL/glew.h> 
#include <GL/glut.h>
#include <iostream>

const unsigned int WINDOW_WIDTH = 800;
const unsigned int WINDOW_HEIGHT = 640;

void	display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	// glColor3f(1.0f, 0.f, 0.f);	
	// glBegin(GL_TRIANGLES);
	// 	glVertex2f(-0.5f, -0.5f);
	// 	glVertex2f(0.5f, -0.5f);
	// 	glVertex2f(0.f, 0.5f);
	// glEnd();
	// float vertices[] = {
	// 	-0.5f, -0.5f, 0.0f,
	// 	0.5f, -0.5f, 0.0f,
	// 	0.0f,  0.5f, 0.0f
	// 	};
	// GLuint vbo;
	// glGenBuffers(1, &vbo);
	// glBindBuffer(GL_ARRAY_BUFFER, vbo);
	// glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	// glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	// glEnableVertexAttribArray(0);
	// glDrawArrays(GL_TRIANGLES, 0, 3);

	glFlush();
}

int	main(int argc, char **argv)
{
	glutInit(&argc, argv);
	
	int maxWidth = glutGet(GLUT_SCREEN_WIDTH);
	int maxHeight = glutGet(GLUT_SCREEN_HEIGHT);

	glutInitWindowSize(maxWidth, maxHeight);
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow("REDCARD");

	glutDisplayFunc(display);
	glClearColor(1.f, 0.f, 0.f, 1.f);
	glutMainLoop();
	return (0);
}