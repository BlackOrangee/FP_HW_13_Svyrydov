// Task 1. Write a program that creates a two-dimensional array and fills it according to the following principle:
// the user enters a number (for example, 3) the first element of the array takes the value of this number,
//  the next element of the array takes the value of this number multiplied by 2 (that is, 6 for our example),
//  the third element of the array — the previous element multiplied by 2 (that is, 6*2=12 for our example).
//  Display the created array on the screen.
//

#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size][size];
	int c = 0;
	cout << "\n\n\tEnter tehe number (1/10) --> "; cin >> arr[c][0];
	c++;
	cout << "\t0 -- Done\n\t1 -- Enter next\n\t";	cin >> arr[c][0];

	while ((arr[c][0] != 0) && (c < size))
	{
		int i = c + 1;
		cout << "\n\n\tEnter tehe number (" << i <<" / 10)--> "; cin >> arr[c][0];
		if (true)
		{

		}
		c++;
		cout << "\t0 -- Done\n\t1 -- Enter next\n\t";	cin >> arr[c][0];
	}

}