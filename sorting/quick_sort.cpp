#include <iostream>
using namespace std;
// 1. Define i as the low index, which is the index of the first element of the sub array,and j as the high index, which is the index of the last element of the sub array.
// 2. Set the pivot as the element at the low index i since that is the first index of the unsorted sub array.
// 3. Increase i by 1 until you reach an element greater than the pivot element
// 4. Decrease j by 1 until you reach an element smaller than or equal to the pivot element.
// 5. Having fixed the values of i and j, interchange the elements at indice's i and j.
// 6. Repeat steps 3, 4, and 5 until j becomes less than or equal to i.
// 7. Finally, swap the pivot element and the element at the index.

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);


    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);  // sort left sub array
        quickSort(A, partitionIndex + 1, high); // sort right sub array
    }
}

int main()
{

    int A[] = {9, 4, 4, 8, 7, 5, 6};
    quickSort(A, 0, n - 1);
     for (int i = 0; i < n; i++)
    {
        cout<< A[ i ]<<" ";
    }
    cout<< endl;


    return 0;
}

