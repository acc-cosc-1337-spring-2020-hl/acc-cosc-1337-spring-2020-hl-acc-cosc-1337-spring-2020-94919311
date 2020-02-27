//write include statemetns
#include"rectangle.h"
#include <vector>
#include<iostream>

using std::vector;
using std::cout;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	int all_areas = 0;
	vector<Rect> areas{Rect(4, 5), Rect(10, 10), Rect(100, 10)};
	for (auto r : areas)
	{ 
		cout << r.get_area() << "\n";
		all_areas += r.get_area();
	}

	cout << all_areas;
	return 0;
}