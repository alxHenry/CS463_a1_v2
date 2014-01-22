class Face {
public:
	Face(int inId, char color, int numtiles, int inLeft, int inRight, int inTop, int inBottom, int inBack);
	Face();
	~Face();

	int getID();
	int * getNeighbors();	//array of integers representing the neighbors of the face. [left, right, top, bottom, back]
	char * getTiles();		//get the tile values

private:
	int id;
	char tiles[4];

	int left;
	int right;
	int top;
	int bottom;
	int back;
};