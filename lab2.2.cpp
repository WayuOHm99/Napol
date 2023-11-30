/* LANG : C++ */
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	float r, sqArea, crArea, area;
	cin >> r;
	sqArea = (r+r)*(r+r);
	crArea = 22.0/7.0 *r*r;
	area = sqArea-crArea;
	cout << setprecision(3) << "Area: " << area;
	
	return 0;
	
}
