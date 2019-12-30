//  Gosper member function definitions

#include "gosper.h"

//------------------------- Gosper fractal ----------------------------
// constructs a Gosper class
Gosper::Gosper( float initX, float initY, float initAngle )
  : Turtle( initX, initY, initAngle ) {
}

//------------------------------ leftCurve ----------------------------------
// draw a level-x left curve with distance d
void Gosper::leftCurve( int level, float d ) {
  if ( level > 0 ) {
    leftCurve(level-1,d);
    turn(60);
    rightCurve(level-1,d);
    turn(60);
    turn(60);
    rightCurve(level-1,d);
    turn(-60);
    leftCurve(level-1,d);
    turn(-60);
    turn(-60);
    leftCurve(level-1,d);
    leftCurve(level-1,d);
    turn(-60);
    rightCurve(level-1,d);
    turn(60);
  }
  else
    draw( d );
}

//------------------------------ rightCurve ---------------------------------
// draw a level-x right curve with dist d
void Gosper::rightCurve( int level, float d ) {
  if ( level > 0 ) {
    turn(-60);
    leftCurve(level-1,d);
    turn(60);
    rightCurve(level-1,d);
    rightCurve(level-1,d);
    turn(60);
    turn(60);
    rightCurve(level-1,d);
    turn(60);
    leftCurve(level-1,d);
    turn(-60);
    turn(-60);
    leftCurve(level-1,d);
    turn(-60);
    rightCurve(level-1,d);
  }
  else
    draw( d );
}
