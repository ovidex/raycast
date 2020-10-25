#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
# define M_PI           3.14159265358979323846
//-----------------------------MAP----------------------------------------------
#define mapX  8      //map width
#define mapY  8      //map height
#define mapS 64      //map cube size
int map[] =           //the map array. Edit to change level but keep the outer walls
{
 1,1,1,1,1,1,1,1,
 1,0,1,0,0,0,0,1,
 1,0,1,0,0,0,0,1,
 1,0,1,0,0,0,0,1,
 1,0,0,0,0,0,0,1,
 1,0,0,0,0,1,0,1,
 1,0,0,0,0,0,0,1,
 1,1,1,1,1,1,1,1,
};
float player_x, player_y;

void drawPlayer() {
    glColor3f(1, 1, 1);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(player_x,player_y);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    drawPlayer();
    glutSwapBuffers();
}
void init()
{
    glClearColor(0.5, 0.4, 0, 0);
    gluOrtho2D(0, glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT), 0);
    player_x = 300;
    player_y = 200;

}
void pressedButton(unsigned char key, int x, int y) {
    switch (key) {
        case 'w':

            break;
        case 'a':

            break;
        case 's':

            break;
        case 'd':

            break;
}
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
    glutCreateWindow("RayCasting");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(pressedButton);
    glutMainLoop();
}