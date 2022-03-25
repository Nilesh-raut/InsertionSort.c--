// hr element ko check kro 
// ki sare element apne correct possition pr hai ya nahi
// Assume that in array 4th position pr 32 hai ab left side me 32 se greater num hai to swap kro   

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int insertionSort(int arr[], int size)
{
    int temp;

    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{

    int size = 6;
    int arr[size] = {12, 45, 23, 51, 19, 8};

    // cout << arr[1];
    insertionSort(arr, size);
    printArray(arr, size);

    return 0;
}