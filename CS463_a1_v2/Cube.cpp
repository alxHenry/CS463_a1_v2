#include "Cube.h"
#include <iostream>
using namespace std;

Cube::Cube(int inNumTiles) {
	int numTiles = inNumTiles;

	//Face(int id, char color, int numtiles, int inLeft, int inRight, int inTop, int inBottom, int inBack);
	front = new Face(2, 'b', inNumTiles, 1, 3, 0, 5, 4);
	left = new Face(1, 'o', inNumTiles, 4, 2, 0, 5, 3);
	right = new Face(3, 'r', inNumTiles, 2, 4, 0, 5, 1);
	top = new Face(0, 'y', inNumTiles, 1, 3, 4, 2, 5);
	bottom = new Face(5, 'w', inNumTiles, 1, 3, 2, 4, 0);
	back = new Face(4, 'g', inNumTiles, 3, 1, 0, 5, 2);

	defFront = *front;
	defLeft = *left;
	defRight = *right;
	defTop = *top;
	defBottom = *bottom;
	defBack = *back;
}

Cube::~Cube() {}

void Cube::printCube() {
	cout << "  " << defTop.getTiles()[0] << defTop.getTiles()[1] << endl;
	cout << "  " << defTop.getTiles()[2] << defTop.getTiles()[3] << endl;
	cout << defLeft.getTiles()[0] << defLeft.getTiles()[1] << defFront.getTiles()[0] << defFront.getTiles()[1] << defRight.getTiles()[0] << defRight.getTiles()[1] << defBack.getTiles()[0] << defBack.getTiles()[1] << endl;
	cout << defLeft.getTiles()[2] << defLeft.getTiles()[3] << defFront.getTiles()[2] << defFront.getTiles()[3] << defRight.getTiles()[2] << defRight.getTiles()[3] << defBack.getTiles()[2] << defBack.getTiles()[3] << endl;
	cout << "  " << defBottom.getTiles()[0] << defBottom.getTiles()[1] << endl;
	cout << "  " << defBottom.getTiles()[2] << defBottom.getTiles()[3] << endl;
}

//Left half of the front is rotated up
void leftFlipUp() {			
	
}
void leftFlipDown();		//Left half of the front is rotated down
void rightFlipUp();			//Right half of the front is rotated up
void rightFlipDown();		//Right half of the front is rotated down
void topRotateRight();		//Top half of the front is rotated to the right
void topRotateLeft();		//Top half of the front is rotated to the left
void bottomRotateRight();	//Bottom half of the front is rotated to the right
void bottomRotateLeft();	//Bottom half of the front is rotated to the left
void poleCloseRight();		//The half of the top of the cube closest is rotated right
void poleCloseLeft();		//The half of the top of the cube closest is rotated left
void poleFarRight();		//The half of the top of the cube furthest is rotated right
void poleFarLeft();			//The half of the top of the cube furthest is rotated left