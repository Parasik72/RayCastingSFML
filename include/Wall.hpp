#ifndef WALL_HPP
#define WALL_HPP

class Wall final {
public:
	Wall(float x1, float y1, float x2, float y2): x1(x1), y1(y1), x2(x2), y2(y2){}
	float x1;
	float y1;
	float x2;
	float y2;
};

#endif