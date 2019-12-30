#ifndef TURTLE_H_INCLUDED
#define TURTLE_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;
#include "math.h"

//---------------------------------------------------------------------------
// Turtle graphics: a tool to draw lines by the following three actions:
//   -- draw: draw a line by a given distance and move to the destination
//   -- move: simply move by a given distance without drawing a line
//   -- turn: turn left by a given angle
// Assumptions:
//   -- all parameters and data members are float.
//   -- Outputs are in postscript format.
//---------------------------------------------------------------------------

const float PI = 3.1459265;

class Turtle {

public:
    Turtle( float initX=0.0, float initY=0.0,float initAngle=0.0);
    ~Turtle();

    void draw(float d);
    void move(float d);
    void turn(float d);

private:
    float angle;
    ofstream out;

};



#endif // TURTLE_H_INCLUDED
