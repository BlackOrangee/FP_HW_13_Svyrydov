// Task 3. Create a two-dimensional arr. Fill it with random numbers and show it on the screen. 
// The user selects the number of shifts and the position (left, right, up, down). 
// Move the arr and display the result on the screen. The blink is cyclical.
//

#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	const int SIZE = 4;
	int blink, choise, menu, temp;
	int arr[SIZE][SIZE];

	/*=========|| Array generating ||=========*/
	cout << "\n\n\t";
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 10 + 0;
			cout << arr[i][j] << " ";
		}
		cout << "\n\t";
	}

	cout << "\n\t1 -- Left\n\t2 -- Right\n\t3 -- Up\n\t4 -- Down\n\n\t0 -- Finish\n";	// Menu

	do
	{	/*=========|| User data input ||=========*/

		cout << "\n\tInput direction --> ";	cin >> menu;
		cout << "\n\tInput the blink size --> "; cin >> blink;

		switch (menu)
		{
		case 1:
			/*=========|| Left blink ||=========*/
			for (int i = 0; i < SIZE; i++)
			{
				temp = arr[i][0];
				for (int j = 0; j < SIZE - blink; j++)
				{
					arr[i][j] = arr[i][j + blink];
				}
				arr[i][SIZE - blink] = temp;
			}
			/*=========|| Array output ||=========*/
			cout << "\n\n\t";
			for (int i = 0; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << "\n\t";
			}
			break;
		case 2:
			/*=========|| Right blink ||=========*/
			for (int i = 0; i < SIZE; i++)
			{
				temp = arr[i][SIZE - blink];
				for (int j = SIZE - blink; j > 0; j--)
				{
					arr[i][j] = arr[i][j - blink];
				}
				arr[i][0] = temp;
			}
			/*=========|| Array output ||=========*/
			cout << "\n\n\t";
			for (int i = 0; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << "\n\t";
			}
			break;
		case 3:
			/*=========|| Up blink ||=========*/
			for (int i = 0; i < SIZE; i++)
			{
				temp = arr[0][i];
				for (int j = 0; j < SIZE - blink; j++)
				{
					arr[j][i] = arr[j + blink][i];
				}
				arr[SIZE - blink][i] = temp;
			}
			/*=========|| Array output ||=========*/
			cout << "\n\n\t";
			for (int i = 0; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << "\n\t";
			}
			break;
		case 4:
			/*=========|| Down blink ||=========*/
			for (int i = 0; i < SIZE; i++)
			{
				temp = arr[SIZE - blink][i];
				for (int j = SIZE - blink; j > 0; j--)
				{
					arr[j][i] = arr[j - blink][i];
				}
				arr[0][i] = temp;
			}
			/*=========|| Array output ||=========*/
			cout << "\n\n\t";
			for (int i = 0; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << "\n\t";
			}
			break;
		default:
			break;
		}
		cout << "\n\t1 -- Continue\n\t0 -- Exit\n\t"; cin >> choise; // Menu

	} while (choise != 0);
}