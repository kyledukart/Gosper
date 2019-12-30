#ifndef GOSPER_H_INCLUDED
#define GOSPER_H_INCLUDED
#include "turtle.h"

//---------------------------------------------------------------------------
// Gosper graphics: a tool to draw recursive Gosper by the following two actions:
//   -- leftCurve: recursively draws a left gosper of the given level and length
//   -- rightCurve: recursively draws a right gosper of the given level and length
// Assumptions:
//   -- all parameters and data members are float.
//   -- Outputs are in postscript format.
//---------------------------------------------------------------------------


class Gosper : public Turtle
{
public:
    Gosper( float initX=0.0, float initY=0.0, float initAngle=0.0 );
    void leftCurve( int l, float d );  //draw a level-l left curve with dist d
    void rightCurve( int l, float d ); //draw a level-l right curve with dist d
};


#endif // GOSPER_H_INCLUDED
