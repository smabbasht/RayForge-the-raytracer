#include <iostream>
#include "vec3.h"

int main(void)
{
	int nx = 200;
	int ny = 100;
	// direct output of cout to hello.ppm using dup2 
	// dup2(1, 2);
	// direct output to terminal
	std::cout << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j=ny-1; j>=0; j--) {
		for (int i=0; i<nx; i++) {
			vec3 col(int((float(i) / float(nx))*255.99), int((float(j) / float(ny))*255.99), int(0.2*255.99));
			// float r = float(i) / float(nx);
			// float g = float(j) / float(ny);
			// float b = 0.2;
			// int ir = int(255.99*r);
			// int ig = int(255.99*g);
			// int ib = int(255.99*b);
			std::cout << col << "\n";
		}
	}
	return 0;
}
