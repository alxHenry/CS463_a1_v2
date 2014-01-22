#include "Face.h"

class Cube {
public:
	Cube(int inNumTiles);
	~Cube();

	void leftFlipUp();			//Left half of the front is rotated up
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

	void printCube();

private:
	int numTiles;	//Number of tiles per face

	//Members to orient the cube. These will be set initially but then will be reset every move
	//depending on the face that is chosen to manipulate.
	Face * front;
	Face * left;
	Face * right;
	Face * top;
	Face * bottom;
	Face * back;

	//Default view for us to print (solved blue side is facing us
	Face defFront;
	Face defLeft;
	Face defRight;
	Face defTop;
	Face defBottom;
	Face defBack;
};