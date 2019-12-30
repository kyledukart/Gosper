// Turtle member function definitions

#include "turtle.h"
// #include <iostream>
// #include <fstream>
// #include "math.h"

// Turtle constructor
    Turtle::Turtle( float initX, float initY,float initAngle) {
        out.open( "output.ps", ios::app );
        angle = initAngle;
        out << "%!PS-Adobe-2.0" << endl;
        out << initX << "\t" << initY << "\tmoveto" << endl;
    }

// draw line by distance d
    void Turtle::draw( float d ) {
        float dX, dY;
        dX = d * cos(PI * angle / 180);
        dY = d * sin(PI * angle / 180);
        out << dX << "\t" << dY << "\trlineto" << endl;
    }
// simply move by distance d
    void Turtle::move( float d ) {
        float dX, dY;
        dX = d * cos(PI * angle / 180);
        dY = d * sin(PI * angle / 180);
        out << dX << "\t" << dY << "\trmoveto" << endl;
        }
// turn by angle a
    void Turtle::turn( float a ) {
        angle += a;
        }
// Turtle deconstructor
Turtle::~Turtle( ) {
    out << "stroke" << endl;
    out << "showpage" << endl;
    out.close( );






};
