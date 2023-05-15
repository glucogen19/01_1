#include <cstdio>
#include <iostream>

class Road {
	public:
		double Length;
		int Width;
};

int main() {
	Road road;
	road.Length = 155.5;
	std::cout << "Length:" << road.Length << std::endl;
	return 0;
}