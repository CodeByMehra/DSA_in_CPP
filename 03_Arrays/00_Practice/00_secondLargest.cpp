#include <iostream>
#include <climits>
using namespace std;

void secondLargest(int arr[], int size)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // If current element is greater than largest
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        // If current element lies between largest and secondLargest
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
    {
        cout << "No second largest element exists";
    }
    else
    {
        cout << "Second Largest Element: " << secondLargest;
    }
}

int main()
{
    int arr[] = {100, 20, 9, 300, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    secondLargest(arr, size);

    return 0;
}