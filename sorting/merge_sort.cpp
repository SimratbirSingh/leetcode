#include <iostream>

using namespace std;
void merge(int a[] , int mid , int lb, int ub)
{
   int i = lb;
    int j = mid+1;
    int k = lb;
     int b[100];
    while(i<=mid && j<=ub)
    {
        if(a[i] <= a[j])
        {
            b[k]= a[i];
            i++;
        }
        else{
             b[k]= a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k] = a[j]; j++;k++;
        }
    }
        else{
                while(i<=mid)
                {
                  b[k] = a[i];
                   i++;
                   k++;
                }

        }
        for(k = lb; k <= ub ; k++)
        {
            a[k]=b[k];
        }

}
void mergeSort(int A[] ,int lb, int ub)
{   int mid;
    if(lb < ub)
    {
        mid = (lb+ub)/2;
        mergeSort(A , lb ,mid);
        mergeSort(A , mid+1 ,ub);
        merge(A , mid ,lb , ub);
    }
}
int main()
{
    int A[6]={5,8,4,2,1,0};
    mergeSort(A,0,6);
    for(int i =0;i<6;i++)
    {
        cout<<A[i]<<" ";

    }


    return 0;
}
