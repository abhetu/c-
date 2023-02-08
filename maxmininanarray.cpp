/* The following is a program that reads maximum and minimum element in the array and outputs them. 
There are several ways to do it. This is one of the way. I have used function to solve the problem. */
#include <iostream>
using namespace std;

int GetMax(int a[], int n) // function to find largest element
{
    int i, max;
    max = a[0]; // assume that first element is max
    for (i = 1; i < n; i++)
    {
        if (a[i] > max) // if current element is greater than max
            max = a[i]; // assign that number as max now
    }
    return max; // returns the largest number to main function
}

int GetMin(int a[], int n) // function to find smallest element
{
    int i, min;
    min = a[0]; // assuming first element as minimum
    for (i = 1; i < n; i++)
    {
        if (a[i] < min) // If current element is smaller than min
            min = a[i]; // assigning the smaller number to min
    }
    return min; // returns the smallest number to main function
}

int main()
{
    int i, array[100], size, max, min;

    cout << "Input number of elements in array\n";
    cin >> size;

    cout << "Enter " << size << " integers\n";
    for (i = 0; i < size; i++)
        cin >> array[i];

    max = GetMax(array, size); // calls the max function
    min = GetMin(array, size); // calls the min function

    // Print maximum and minimum element
    cout << "Maximum element: " << max << "\n";
    cout << "Minimum element: " << min << "\n";

    return 0;
}
