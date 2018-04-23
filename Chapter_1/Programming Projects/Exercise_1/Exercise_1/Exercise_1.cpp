/*
Write a C++ program that reads in two integers and then outputs both their
sum and their product. One way to proceed is to start with the program in
Display 1.8 and to then modify that program to produce the program for
this project. Be certain to type the first line of your program exactly the same
as the first line in Display 1.8. In particular, be sure that the first line begins
at the left-hand end of the line with no space before or after the # symbol.
Also, be certain to add the symbols \n to the last output statement in your
program. For example, the last output statement might be the following:
cout << "This is the end of the program.\n";

(some systems require that final \n, and your system may be one of these.)
*/


#include "stdafx.h"
#include <iostream>


using namespace std;
int main()
{
	int val1, val2;

	cout << "Insert the first value: ";
	cin >> val1;

	cout << "Insert the second value: ";
	cin >> val2;

	cout << "The sum of the two values is : " << val1 + val2 << endl;
	cout << "The product of the two values is : " << val1 * val2 << endl;

	return 0;
}

