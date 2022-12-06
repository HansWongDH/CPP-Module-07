#include "array.tpp"
#include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	Array<int> arr(5);
	int	i = 0;
	cout << "Checking the size of array..." << endl;
	while(i < arr.getSize())
	{
		cout << arr[i] << endl;
		arr[i++] = 1;
	}
	cout << "size of array is : " << i << endl;
	cout << "Checking modification of array..."<< endl;
	for (int i = 0; i < arr.getSize(); i++)
		cout << arr[i] << endl;
	cout << "Testing out of bound..." << endl;
	cout << arr[10] << endl;
}