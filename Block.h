#ifndef Block_H
#define Block_H
#include <fstream>
#include <iostream>
using namespace std;

class Block
{
public:
	Block();
	Block(float x1, float y1, float z1, float x2, float y2, float z2);
	Block(const Block &G);
	~Block();

	float x1, y1, z1, x2, y2, z2;
	float interVolumn(float x1, float y1, float z1, float x2, float y2, float z2);
	void rotate(int p, bool d);
	virtual void shift(int p, float d);
};

#endif