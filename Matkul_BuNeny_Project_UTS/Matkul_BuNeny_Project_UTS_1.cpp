#include "stdafx.h"
#include <glut.h>
#include <math.h>
#include <string.h>

// Jenis Font
void *Bitmap8x13 = GLUT_BITMAP_8_BY_13;
void *Bitmap9x15 = GLUT_BITMAP_9_BY_15;
void *Roman10 = GLUT_BITMAP_TIMES_ROMAN_10;
void *Roman24 = GLUT_BITMAP_TIMES_ROMAN_24;
void *Helvetica10 = GLUT_BITMAP_HELVETICA_10;
void *Helvetica12 = GLUT_BITMAP_HELVETICA_12;
void *Helvetica18 = GLUT_BITMAP_HELVETICA_18;

// Fungsi menampilkan Text
void displayText(char *text, void *font, float x, float y)
{
	glRasterPos2f(x,y);
	int pj = strlen(text);
	for (int i = 0; i < pj; i++)
		glutBitmapCharacter(font, text[i]);
}

void teksDraw() 
{
	char text[255];

	glColor3f(0.,0.5,0.);
	strcpy_s(text, "Nama : Moh. Aflah Azzaky");
	displayText(text, Helvetica18, 40., 40.);

	glColor3f(0.,0.,0.8);
	displayText("NIM   : B34180029", Helvetica18, 40., 20.);
}

void warnaDraw()
{
	/* Membuat dimensi tv */
	glColor3f(0.86,0.84,0.76);
	glBegin(GL_POLYGON);
	glVertex2f(60.,160.);
	glVertex2f(160.,80.);
	glVertex2f(160.,460.);
	glVertex2f(60.,340.);
	glEnd();

	/* Membuat dimensi tv deban */
	glColor3f(0.84,0.84,0.84);
	glBegin(GL_POLYGON);
	glVertex2f(160.,80.);
	glVertex2f(480.,160.);
	glVertex2f(480.,340.);
	glVertex2f(160.,460.);
	glEnd();

	/* Membuat layar tv */
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(200.,140.);
	glVertex2f(440.,200.);
	glVertex2f(440.,320.);
	glVertex2f(200.,360.);
	glEnd();
}

void garisDraw()
{
	/* Membuat garis */
	glColor3f(0,0,0);
	glLineWidth(2.);
	glBegin(GL_LINE_LOOP);
	glVertex2f(60.,160.);
	glVertex2f(160.,80.);
	glVertex2f(160.,460.);
	glVertex2f(60.,340.);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(160.,80.);
	glVertex2f(480.,160.);
	glVertex2f(480.,340.);
	glVertex2f(160.,460.);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(280.,460.);
	glVertex2f(320.,380.);
	glVertex2f(360.,460.);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(380.,160.);
	glVertex2f(440.,180.);
	glEnd();
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	teksDraw();
	warnaDraw();
	garisDraw();
	glutSwapBuffers();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(200,0);
	glutInitWindowSize(950,700);
	glutCreateWindow("B34180029 - Moh. Aflah Azzaky");
	glClearColor(1.,1.,1.,0.);
	gluOrtho2D(0.,950.,0.,700.);
	glutIdleFunc(display);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
