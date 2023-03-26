// Task 2. Write a program that creates a two-dimensional array and fills it according to the following principle:
// the user enters a number(for example, 3) the first element of the array takes the value of this number, 
// the next element of the array takes the value of this number + 1 (that is, 4 for our example), 
// the third element of the array – previous element + 1 (ie 5 for our example). 
// Display the created array on the screen.
//

#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size][size];
	int c = 0;
	cout << "\n\n\tEnter tehe number (1/10) --> "; cin >> arr[c][0];	// Inserting the first elements of the array
	c++;
	cout << "\t0 -- Done\n\t1 -- Enter next\n\t";	cin >> arr[c][0];	// Selection menu

	while ((arr[c][0] != 0) && (c < size))
	{
		int i = c + 1;
		cout << "\n\n\tEnter tehe number (" << i << " / 10)--> "; cin >> arr[c][0];	// Inserting the first elements of the array
		c++;
		cout << "\t0 -- Done\n\t1 -- Enter next\n\t";	cin >> arr[c][0];	// Selection menu
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j < size; j++)
		{
			arr[i][j] = arr[i][j - 1] + 1;		// Creating an array. Multiplying by 2 previous
		}
	}

	cout << "\n\t";
	for (int i = 0; i < size; i++)		// Array Output
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] == 0)
			{
				return 0;
			}
			cout << arr[i][j] << " ";
		}
		cout << "\n\t";
	}
}