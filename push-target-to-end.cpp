#include <iostream>
using namespace std;
int main()
{
	int arr[] = {3, 6, 7, 2, 7, 5, 3, 8, 7, 4, 5, 6, 3, 7, 5, 4, 9, 3, 7, 3, 7, 7, 7, 7, 6, 5, 7, 7, 4, 5, 3, 3, 5, 6, 4, 3, 3, 3},
		target = 7, arr_end_pos = sizeof(arr) / sizeof(*arr) - 1, temp = 0, i = 0;
	cout << "array length : " << arr_end_pos << endl;
	cout << "before array operation" << endl;
	for (i = 0; i < (sizeof(arr) / sizeof(*arr)); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	for (i = 0; i < arr_end_pos; i++)
	{
		// cout << endl
		// 	 << "loop iteraion with i : " << i << endl;
		// cout << "End Possition " << arr_end_pos << endl;
		while (arr[arr_end_pos] == target)
		{
			arr_end_pos--;
			// cout << "end possion changed to : " << arr_end_pos << endl;
			// continue;
		}
		if (arr[i] == target)
		{
			temp = arr[i];
			arr[i] = arr[arr_end_pos];
			arr[arr_end_pos] = temp;
			arr_end_pos--;
			// cout << endl
			// 	 << "swap workd " << endl;
			// cout << "decremented after swap " << endl;
			// for (int j = 0; j < (sizeof(arr) / sizeof(*arr)); j++)
			// {
			// 	cout << "[" << j << "]" << arr[j] << " ";
			// }
			// cout << endl;
			// for (int j = 0; j < (sizeof(arr) / sizeof(*arr)); j++)
			// {
			// 	cout << arr[j] << " ";
			// }
			// cout << endl;
		}
	}
	cout << endl
		 << "After swaping done " << endl;
	for (i = 0; i < (sizeof(arr) / sizeof(*arr)); i++)
	{
		cout << arr[i] << "  ";
	}
	return 0;
}
