// Find an index in the array where:

// Sum of elements on the left
// =
// Sum of elements on the right

// The element at that index itself is not included in either sum.
// Example
// [1, 3, 5, 2, 2]

// Consider index 2:
//       5
//     ↑
// Left side:

// 1 + 3 = 4

// Right side:

// 2 + 2 = 4
// Both sums are equal.

// Therefore:
// Equilibrium Index = 2

#include <iostream>
using namespace std;

// Function to calculate left sum
int leftSum(int arr[], int index)
{
    int sum = 0;

    for(int i = 0; i < index; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Function to calculate right sum
int rightSum(int arr[], int size, int index)
{
    int sum = 0;

    for(int i = index + 1; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int equilibriumIndex(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(leftSum(arr, i) == rightSum(arr, size, i))
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Equilibrium Index = "
         << equilibriumIndex(arr, size);

    return 0;
}