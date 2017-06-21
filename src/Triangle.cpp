#include "Triangle.h"

Triangle::Triangle(Point origin, Vector v1, Vector v2)
{
    getAnimation().setPos(origin);

    _origin = origin;
    _v1 = v1;
    _v2 = v2;
}

Triangle::Triangle(Point origin, Point p1, Point p2)
{
    _origin = origin;
    _v1 = Vector(p1.x - origin.x, p1.y - origin.y, p1.z - origin.z);
    _v2 = Vector(p2.x - origin.x, p2.y - origin.y, p2.z - origin.z);
}

void Triangle::render()
{
    Form::startRendering();

    glBegin(GL_TRIANGLES);
    {
        glColor3f(1,0,0);
        glVertex3d(_origin.x, _origin.y, _origin.z);
        glColor3f(0,1,0);
        glVertex3d(_origin.x + _v1.x, _origin.y + _v1.y, _origin.z + _v1.z);
        glColor3f(0,0,1);
        glVertex3d(_origin.x + _v2.x, _origin.y + _v2.y, _origin.z + _v2.z);
    }
    glEnd();

    Form::endRendering();
}

void Triangle::update(double delta_t)
{
    // Do nothing
}
