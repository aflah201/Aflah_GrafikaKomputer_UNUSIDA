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
	/* Membuat Tembok Depan */
	glColor3f(0.99,0.91,0.85);
	glBegin(GL_POLYGON);
	glVertex2f(40.,80.);
	glVertex2f(360.,80.);
	glVertex2f(360.,360.);
	glVertex2f(40.,360.);
	glEnd();

	/* Membuat Tembok Belakang */
	glBegin(GL_POLYGON);
	glVertex2f(360.,80.);
	glVertex2f(860.,80.);
	glVertex2f(860.,360.);
	glVertex2f(360.,360.);
	glEnd();

	/* Membuat Atap Depan */
	glColor3f(0.85,0.93,0.95);
	glBegin(GL_POLYGON);
	glVertex2f(40.,360.);
	glVertex2f(360.,360.);
	glVertex2f(200.,600.);
	glEnd();

	/* Membuat Atap Belakang */
	glColor3f(0.89,0.42,0.03);
	glBegin(GL_POLYGON);
	glVertex2f(360.,360.);
	glVertex2f(900.,360.);
	glVertex2f(740.,600.);
	glVertex2f(200.,600.);
	glEnd();

	/* Membuat Jendela Depan */
	glColor3f(1,0.75,0);
	glBegin(GL_POLYGON);
	glVertex2f(60.,120.);
	glVertex2f(220.,120.);
	glVertex2f(220.,260.);
	glVertex2f(60.,260.);
	glEnd();

	/* Membuat Jendela 2 */
	glBegin(GL_POLYGON);
	glVertex2f(380.,120.);
	glVertex2f(540.,120.);
	glVertex2f(540.,260.);
	glVertex2f(380.,260.);
	glEnd();

	/* Membuat Jendela 3 */
	glBegin(GL_POLYGON);
	glVertex2f(560.,120.);
	glVertex2f(720.,120.);
	glVertex2f(720.,260.);
	glVertex2f(560.,260.);
	glEnd();

	/* Membuat Pintu */
	glColor3f(0,0.69,0.31);
	glBegin(GL_POLYGON);
	glVertex2f(240.,80.);
	glVertex2f(340.,80.);
	glVertex2f(340.,260.);
	glVertex2f(240.,260.);
	glEnd();

	/* Membuat Ventilasi Depan */
	glColor3f(0.21,0.37,0.56);
	glBegin(GL_POLYGON);
	glVertex2f(60.,280.);
	glVertex2f(220.,280.);
	glVertex2f(220.,320.);
	glVertex2f(60.,320.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(240.,280.);
	glVertex2f(340.,280.);
	glVertex2f(340.,320.);
	glVertex2f(240.,320.);
	glEnd();

	/* Membuat Ventilasi Belakang */
	glBegin(GL_POLYGON);
	glVertex2f(380.,280.);
	glVertex2f(540.,280.);
	glVertex2f(540.,320.);
	glVertex2f(380.,320.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(560.,280.);
	glVertex2f(720.,280.);
	glVertex2f(720.,320.);
	glVertex2f(560.,320.);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(740.,280.);
	glVertex2f(840.,280.);
	glVertex2f(840.,320.);
	glVertex2f(740.,320.);
	glEnd();

}

void garisDraw()
{
	/* Garis Tembok */
	glColor3f(0,0,0);
	glLineWidth(2.);

	glBegin(GL_LINE_LOOP);
	glVertex2f(40.,80.);
	glVertex2f(360.,80.);
	glVertex2f(360.,360.);
	glVertex2f(40.,360.);
	glEnd();

	/* Garis Tembok */
	glBegin(GL_LINE_LOOP);
	glVertex2f(360.,80.);
	glVertex2f(860.,80.);
	glVertex2f(860.,360.);
	glVertex2f(360.,360.);
	glEnd();

	/* Garis Atap Depan */
	glBegin(GL_LINE_LOOP);
	glVertex2f(40.,360.);
	glVertex2f(360.,360.);
	glVertex2f(200.,600.);
	glEnd();

	/* Garis Atap Belakang */
	glBegin(GL_LINE_LOOP);
	glVertex2f(360.,360.);
	glVertex2f(900.,360.);
	glVertex2f(740.,600.);
	glVertex2f(200.,600.);
	glEnd();

	/* Garis Jendela */
	glBegin(GL_LINE_LOOP);
	glVertex2f(60.,120.);
	glVertex2f(220.,120.);
	glVertex2f(220.,260.);
	glVertex2f(60.,260.);
	glEnd();

	/* Garis Jendela 2 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(380.,120.);
	glVertex2f(540.,120.);
	glVertex2f(540.,260.);
	glVertex2f(380.,260.);
	glEnd();

	/* Garis Jendela 3 */
	glBegin(GL_LINE_LOOP);
	glVertex2f(560.,120.);
	glVertex2f(720.,120.);
	glVertex2f(720.,260.);
	glVertex2f(560.,260.);
	glEnd();

	/* Garis Pintu */
	glBegin(GL_LINE_LOOP);
	glVertex2f(240.,80.);
	glVertex2f(340.,80.);
	glVertex2f(340.,260.);
	glVertex2f(240.,260.);
	glEnd();

	/* Garis Ventilasi */
	glBegin(GL_LINE_LOOP);
	glVertex2f(60.,280.);
	glVertex2f(220.,280.);
	glVertex2f(220.,320.);
	glVertex2f(60.,320.);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(240.,280.);
	glVertex2f(340.,280.);
	glVertex2f(340.,320.);
	glVertex2f(240.,320.);
	glEnd();

	/* Garis Ventilasi  */
	glBegin(GL_LINE_LOOP);
	glVertex2f(380.,280.);
	glVertex2f(540.,280.);
	glVertex2f(540.,320.);
	glVertex2f(380.,320.);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(560.,280.);
	glVertex2f(720.,280.);
	glVertex2f(720.,320.);
	glVertex2f(560.,320.);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(740.,280.);
	glVertex2f(840.,280.);
	glVertex2f(840.,320.);
	glVertex2f(740.,320.);
	glEnd();

	/* Garis Jendela Tunggal */
	glBegin(GL_LINE_STRIP);
	glVertex2f(160.,120.);
	glVertex2f(160.,260.);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(480.,120.);
	glVertex2f(480.,260.);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(660.,120.);
	glVertex2f(660.,260.);
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
