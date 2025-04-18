#pragma once

#include <memory>
#include <mutex>

#include "math.hpp"
#include "aCamera.hpp"


class grid
{
public:
	grid(vector2d position, int w, int h, double cellW, double cellH);
	void render(aCamera *camera);

private:
	vector2d position;
	int width;
	int height;
	double cellWidth;
	double cellHeight;
};