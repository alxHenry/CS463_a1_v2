#include "Cube.h"
#include <iostream>
using namespace std;

int main() {
	Cube * cube = new Cube(4);
	cube->printCube();

	cin.ignore(200, '\n');
	return 0;
}