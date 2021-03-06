
/*
Modify the C++ program you entered in Practice Program 1. Change the
program so that it first writes the word Hello to the screen and then goes
on to do the same things that the program in Display 1.8 does. You will
only have to add one line to the program to make this happen. recompile
the changed program and run it. Then change the program even more. Add
one more line that will make the program write the word Good-bye to the
screen at the end of the program. Be certain to add the symbols \n to the
last output statement so that it reads as follows:
cout << "Good-bye\n";
(some systems require that final \n, and your system may be one of them.) recompile and run the changed program.
*/


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number_of_pods, peas_per_pod, total_peas;

	cout << "Hello\n";
	cout << "Press return after entering a number.\n";
	cout << "Enter the number of pods:\n";
	cin >> number_of_pods;

	cout << "Enter the number of peas in a pod:\n";
	cin >> peas_per_pod;

	total_peas = number_of_pods * peas_per_pod;

	cout << "If you have ";
	cout << number_of_pods;
	cout << " pea pods\n";
	cout << "and ";
	cout << peas_per_pod;
	cout << " peas in each pod, then\n";
	cout << "you have ";
	cout << total_peas;
	cout << " peas in all the pods.\n";

	cout << "Good-bye\n";

	return 0;
}