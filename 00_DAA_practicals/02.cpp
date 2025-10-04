#include <iostream>
using namespace std;

/* 
Function that considers last element as pivot, 
places the pivot at its exact position, and places 
smaller elements to the left of the pivot and greater 
elements to the right of the pivot. 
*/
int partition(int a[], int start, int end) 
{
    int pivot = a[end];   // pivot element
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++) 
    {
        // If current element is smaller than the pivot
        if (a[j] < pivot) 
        {
            i++; // increment index of smaller element
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }

    int t = a[i + 1];
    a[i + 1] = a[end];
    a[end] = t;

    return (i + 1);
}

/* 
Function to implement quick sort 
a[] = array to be sorted, 
start = Starting index, 
end = Ending index 
*/
void quick(int a[], int start, int end) 
{
    if (start < end) 
    {
        int p = partition(a, start, end);  // p is the partitioning index
        quick(a, start, p - 1);
        quick(a, p + 1, end);
    }
}

/* Function to print an array */
void printArr(int a[], int n) 
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() 
{
    cout << "Vishal Mehra\n" << "Roll No. 2023242032" << endl;

    int a[] = {78, 8, 5, 32, 13, 22};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Before sorting array elements are:\n";
    printArr(a, n);

    quick(a, 0, n - 1);

    cout << "\nAfter sorting array elements are:\n";
    printArr(a, n);

    return 0;
}
