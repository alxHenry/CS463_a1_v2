#include "Face.h"
using namespace std;

Face::Face(int inId, char color, int numtiles, int inLeft, int inRight, int inTop, int inBottom, int inBack) {
	//Set ID
	id = inId;

	//Initialize tile colors
	for (int i = 0; i < numtiles; i++) {
		tiles[i] = color;
	}

	//Set the neighbor data members
	left = inLeft;
	right = inRight;
	top = inLeft;
	bottom = inBottom;
	back = inBack;
}

Face::Face() {}
Face::~Face() {}

int Face::getID() {
	return id;
}

char * Face::getTiles() {
	return tiles;
}