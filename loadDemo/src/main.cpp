#include <iostream>
#include "chooseser.h"

int main()
{
	Val result; // put it here!
	LoadValFromFile("myfile.p0", result, SERIALIZE_P0);
	std::cout << (int)result << std::endl; // print it out! {’a’:1, ’b’:2}
}