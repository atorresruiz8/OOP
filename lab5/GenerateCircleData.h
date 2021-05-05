#ifndef GenerateCircleData_h
#define GenerateCircleData_h

#include "Vec.h"

#define _USE_MATH_DEFINES
#include <math.h>

void generateCircleData(std::vector<Vec*>& points, const Vec& center, float radius, int resolution){
    // Clear the points vector to make sure it's empty before you start
    points.clear();
    
    // Provide the rest of the code here...

	float x = center.getX(); // get x coordinate for center
	float y = center.getY(); // get y coordinate for center

	float xx, yy; // coordinates for the points
	
	for (int i = 0; i < resolution; i++) { // generate points up to resolution
		float theta = (2 * M_PI / resolution) * i; // angle to incrememnt circle by
		xx = (radius * cos(theta)) + x; // parameterized equation for circle coordinates
		yy = (radius * sin(theta)) + y; // parameterized equation for circle coordinates

		points.push_back(new Vec(xx, yy)); // add points to vector
	}
}

#endif*/