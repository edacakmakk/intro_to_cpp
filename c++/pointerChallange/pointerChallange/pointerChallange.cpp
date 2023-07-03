/*
Write a c++ function named apply_all that expect two arrays of integers and their sizes and
dynmically allocates a new array of integers whose size is the product of the 2 array sizes

the function should loop through the second array and multiple each element across element of array 1 and store the 
product in the newly created array.

the function should return a pointer to newly allocated array.

you can also write a print function  that expects a pointer to an array and its size and display the
elements in the array.

for example:

below is the output from the following code which would be in main:

	int array1[] {1,2,3,4,5};
	int array2[] {10,20,30};

	cout << "Array 1: ";
	print(array1,5);

	cout << "Array 2: ";
	print (array2,3);

	int *results = apply_all(array1, 5, array2, 3);
	cout << "Results: ";
	print (results, 15);

OUTPUT
-------------------------

Array1: [1 2 3 4 5 ]
Array2: [10 20 30 ]
Results: [10 20 30 40 50 20 40 60 80 100 30 60 90 120 150]
*/

#include <iostream>

using namespace std;

void print(const int* const array, size_t array_size);
int* apply_all(const int* const array1, size_t array1_size, const int* const array2, size_t array2_size);

int main()
{
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1, 2, 3, 4, 5 };
	int array2[]{ 10, 20, 30 };

	cout << "Array 1: ";
	print(array1, array1_size);

	cout << "Array 2: ";
	print(array2, array2_size);

	int* results = apply_all(array1, array1_size, array2, array2_size); //results burada fonksiyonun içinde oluşturulan new_array'e işaret eder
	constexpr size_t results_size{ array1_size * array2_size }; //constexpr sabit ifade anlamına geliyor

	cout << "Results: ";
	print(results, results_size);

	delete[] results; //işimiz bittiği zaman mutlaka heap'i serbest bırakmalıyız!!!!
	cout << endl;
	return 0;
}

void print(const int *const arr, size_t array_size) //işaret ettiği şeyi değiştirmek istemediğimiz için const
{
	cout << "[ ";
	for (size_t i{ 0 }; i < array_size; i++)
		cout << arr[i] << " ";
	cout << " ]";
	cout << endl;
}
/*
this function expects:
	arr - a pointer to an array of integers
	size - the number of integers iin arr

	this function loops through arr and displays all the integers
	in the array
*/


int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2)
{
	int *new_array{};

	new_array = new int[size1 * size2]; //heap üzerinde boyutu 15 olan yeni bir array oluşturuyoruz.

	int k{ 0 };
	for (size_t i{ 0 }; i < size2; i++)
	{
		for (size_t j{ 0 }; j < size1; j++)
		{
			new_array[k] = array1[j] * array2[i];
			k++;
		}
	}

	return new_array;
}

/*
	the function dynamically allocates a new array that is of size = size1 * size2
	then it loops through each element of arr2 and mutiples it across all the 
	elements of arr1 and each product is stored in the newly created arrat
*/
