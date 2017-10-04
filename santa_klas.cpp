#include <iostream>
#include <math.h>

#define PI 3.14159265

int main() {
	int h, v;
	std::cin >> h >> v;
	if (v >= 0 && v <= 180)
	{
		std::cout << "safe";
		return 0;
	}
	int angle = abs(270 - v);
	std::cout << (int)(h / cos(angle * PI / 180));
}