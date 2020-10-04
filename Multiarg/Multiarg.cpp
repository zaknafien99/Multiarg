// Multiarg.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Multiple constructor arguments with aggregate initialisation

#include <iostream>
using namespace std;

class Z
{
	int i, j;

public:
	Z(int ii, int jj);
	~Z();
	void print();

private:

};

Z::Z(int ii, int jj)
{
	i = ii;
	j = jj;
}

void Z::print()
{
	cout << "i = " << ", j =" << j << endl;
}

Z::~Z()
{
}

int main()
{
	Z zz[] = { Z(1,2), Z(3,4), Z(5,6), Z(7,8) };
	for (size_t i = 0; i < sizeof zz / sizeof * zz; i++)
		zz[i].print();
	
} ///:~

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
