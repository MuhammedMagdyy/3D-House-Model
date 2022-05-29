#include <bits/stdc++.h>
#include<windows.h>
#include<mmsystem.h>
#include <GL/glut.h>

using namespace std;

double translation_x = 0.0, translation_y = 0.0, translation_z = 0.0;

double rotation_x = 0.0, rotation_y = 0.0, rotation_z = 0.0;

double scale_x = 1.0, scale_y = 1.0, scale_z = 1.0;

void init() {
    // Set clear buffer to white
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glEnable(GL_DEPTH_TEST);
}

void grass() {
    glColor3f(0, 1, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.95, -0.8, 0);
    glVertex3f(0.85, -1.1, 0);
    glVertex3f(1.15, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.85, -0.8, 0);
    glVertex3f(0.75, -1.1, 0);
    glVertex3f(0.95, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.8, -0.8, 0);
    glVertex3f(0.7, -1.1, 0);
    glVertex3f(0.9, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.7, -0.6, 0);
    glVertex3f(0.6, -1.1, 0);
    glVertex3f(0.8, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.6, -0.8, 0);
    glVertex3f(0.5, -1.1, 0);
    glVertex3f(0.7, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.5, -0.8, 0);
    glVertex3f(0.4, -1.1, 0);
    glVertex3f(0.6, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.4, -0.8, 0);
    glVertex3f(0.3, -1.1, 0);
    glVertex3f(0.5, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.3, -0.8, 0);
    glVertex3f(0.2, -1.1, 0);
    glVertex3f(0.4, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.2, -0.8, 0);
    glVertex3f(0.1, -1.1, 0);
    glVertex3f(0.3, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.1, -0.8, 0);
    glVertex3f(0.0, -1.1, 0);
    glVertex3f(0.2, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(0.0, -0.8, 0);
    glVertex3f(-0.1, -1.1, 0);
    glVertex3f(0.1, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.1, -0.8, 0);
    glVertex3f(-0.2, -1.1, 0);
    glVertex3f(0.0, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.2, -0.8, 0);
    glVertex3f(-0.3, -1.1, 0);
    glVertex3f(-0.1, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.3, -0.8, 0);
    glVertex3f(-0.4, -1.1, 0);
    glVertex3f(-0.2, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.4, -0.8, 0);
    glVertex3f(-0.5, -1.1, 0);
    glVertex3f(-0.3, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.5, -0.8, 0);
    glVertex3f(-0.6, -1.1, 0);
    glVertex3f(-0.4, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.6, -0.8, 0);
    glVertex3f(-0.7, -1.1, 0);
    glVertex3f(-0.5, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.7, -0.8, 0);
    glVertex3f(-0.8, -1.1, 0);
    glVertex3f(-0.6, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.8, -0.8, 0);
    glVertex3f(-0.9, -1.1, 0);
    glVertex3f(-0.7, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-0.9, -0.8, 0);
    glVertex3f(-1, -1.1, 0);
    glVertex3f(-0.8, -1.1, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(-1, -0.8, 0);
    glVertex3f(-1.1, -1.1, 0);
    glVertex3f(-0.9, -1.1, 0);
    glEnd();
}

void borderHouse() {
    /* Borders */
    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, -0.5, -0.5);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.4, 0.1, -0.6);
    glVertex3f(0.4, 0.3, -0.6);
    glVertex3f(0.2, 0.3, -0.6);
    glVertex3f(0.2, 0.1, -0.6);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.4, 0.1, -0.6);
    glVertex3f(-0.4, 0.3, -0.6);
    glVertex3f(-0.2, 0.3, -0.6);
    glVertex3f(-0.2, 0.1, -0.6);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.1, -0.5, -0.6);
    glVertex3f(-0.1, 0.0, -0.6);
    glVertex3f(0.1, 0.0, -0.6);
    glVertex3f(0.1, -0.5, -0.6);
    glEnd();
}

void borderPyramid() {
    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.0, 0.9, 0.0);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.9, 0.0);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.9, 0.0);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.9, 0.0);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.9, 0.0);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.0, 0.9, 0.0);
    glEnd();
}

void house() {
    glBegin(GL_QUADS);

    // Front
    glColor3f(0.207, 0.494, 0.780);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);

    // Back
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);

    // LEFT
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, -0.5, -0.5);

    // RIGHT
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);

    // Top
    glColor3f(1.0, 0.5, 1.0);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);

    // BOTTOM
    glColor3f(0.5, 1.0, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glEnd();

    // Door
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-0.1, -0.5, -0.6);
    glVertex3f(-0.1, 0.0, -0.6);
    glVertex3f(0.1, 0.0, -0.6);
    glVertex3f(0.1, -0.5, -0.6);
    glEnd();

    // Window 1
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.4, 0.1, -0.6);
    glVertex3f(0.4, 0.3, -0.6);
    glVertex3f(0.2, 0.3, -0.6);
    glVertex3f(0.2, 0.1, -0.6);
    glEnd();

    // Line 1
    glColor3f(0.0, 0.0, 0.1);
    glLineWidth(1);
    glBegin(GL_POLYGON);
    glVertex3f(0.31, 0.1, -0.7);
    glVertex3f(0.31, 0.3, -0.7);
    glVertex3f(0.29, 0.3, -0.7);
    glVertex3f(0.29, 0.1, -0.7);
    glEnd();


    // Line 2
    glColor3f(0.0, 0.0, 0.1);
    glLineWidth(1);
    glBegin(GL_POLYGON);
    glVertex3f(0.4, 0.19, -0.7);
    glVertex3f(0.4, 0.21, -0.7);
    glVertex3f(0.2, 0.21, -0.7);
    glVertex3f(0.2, 0.19, -0.7);
    glEnd();


    //Window 2
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-0.4, 0.1, -0.6);
    glVertex3f(-0.4, 0.3, -0.6);
    glVertex3f(-0.2, 0.3, -0.6);
    glVertex3f(-0.2, 0.1, -0.6);
    glEnd();

    // Line 1
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(1);
    glBegin(GL_POLYGON);
    glVertex3f(-0.31, 0.1, -0.7);
    glVertex3f(-0.31, 0.3, -0.7);
    glVertex3f(-0.29, 0.3, -0.7);
    glVertex3f(-0.29, 0.1, -0.7);
    glEnd();

    // Line 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(1);
    glBegin(GL_POLYGON);
    glVertex3f(-0.4, 0.19, -0.7);
    glVertex3f(-0.4, 0.21, -0.7);
    glVertex3f(-0.2, 0.21, -0.7);
    glVertex3f(-0.2, 0.19, -0.7);
    glEnd();

    borderHouse();
}

void pyramid() {
    glBegin(GL_QUADS);
    // FRONT
    glColor3f(0.968, 0.470, 0.631);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.0, 0.9, 0.0);

    // BACK
    glColor3f(0.968, 0.470, 0.6310);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.9, 0.0);

    // LEFT
    glColor3f(0.968, 0.470, 0.631);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.9, 0.0);

    // RIGHT
    glColor3f(0.968, 0.470, 0.631);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.9, 0.0);

    // TOP
    glColor3f(0.968, 0.470, 0.631);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.0, 0.9, 0.0);

    // BOTTOM
    glColor3f(0.968, 0.470, 0.631);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.0, 0.9, 0.0);
    glEnd();

    borderPyramid();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glRotatef(rotation_x, 1.0, 0.0, 0.0);
    glRotatef(rotation_y, 0.0, 1.0, 0.0);
    glRotatef(rotation_z, 0.0, 0.0, 1.0);
    glTranslatef(translation_x, 0, 0);
    glTranslatef(0, translation_y, 0);
    glTranslatef(0, 0, translation_z);
    glScalef(scale_x, scale_y, scale_z);
    pyramid();
    house();
    grass();
    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();
}

void mouseClick(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON and state == GLUT_DOWN) {
        scale_x += 0.3, scale_y += 0.3, scale_z += 0.3;
    }
    if (button == GLUT_RIGHT_BUTTON and state == GLUT_DOWN) {
        scale_x -= 0.3, scale_y -= 0.3, scale_z -= 0.3;
    }
    glutPostRedisplay();
}

void keyboardPress(unsigned char key, int x, int y) {
    switch (key) {
        case 's':
            translation_x += 0.2;
            break;
        case 'w':
            translation_x -= 0.2;
            break;
        case 'a':
            translation_y += 0.2;
            break;
        case 'q':
            translation_y -= 0.2;
            break;
        case 'd':
            translation_z += 0.2;
            break;
        case 'e':
            translation_z -= 0.2;
            break;
        case 27:
            exit(0);
        default:
            break;
    }
    glutPostRedisplay();
}

void specialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_RIGHT:
            rotation_y += 3;
            break;
        case GLUT_KEY_F1:
            rotation_y -= 3;
            break;
        case GLUT_KEY_UP:
            rotation_x += 3;
            break;
        case GLUT_KEY_F2:
            rotation_x -= 3;
            break;
        case GLUT_KEY_LEFT:
            rotation_z += 3;
            break;
        case GLUT_KEY_F3:
            rotation_z -= 3;
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char **argv) {
    cout << "Welcome to Mazarita House" << '\n';
    cout << "Here's a guide for you to make it easy :D" << '\n';
    cout << "--------------------------------------------------------" << '\n';
    cout << "\t\t\tGuide\t\t\t" << '\n';
    cout << "--------------------------------------------------------" << '\n';
    cout << "For Scaling:" << '\n';
    cout << "Left button for mouse -> scale (x, y, z) - Zoom in\nRight button for mouse -> scale (x, y, z) - Zoom out"
         << '\n';
    cout << "--------------------------------------------------------" << '\n';
    cout << "For Translation:" << '\n';
    cout << "for x-axis -> press [s, w]\nfor y-axis -> press [a, q]\nfor z-axis -> press [d, e]" << '\n';
    cout << "--------------------------------------------------------" << '\n';
    cout << "For Rotation:" << '\n';
    cout << "for x-axis -> press [up, f2]\nfor y-axis -> press [right, f1]\nfor z-axis -> press [left, f3]" << '\n';
    cout << "--------------------------------------------------------" << '\n';
    cout << "For Closing:" << '\n';
    cout << "Press ESC" << '\n';
    cout << "--------------------------------------------------------" << '\n';
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(640, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Mazarita House");
    glutMouseFunc(mouseClick);
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);
    glutKeyboardFunc(keyboardPress);
    init();
    glutMainLoop();
    return 0;
}
