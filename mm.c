#includ<stdio.h>
#include<conio.h>
void main()
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
// Driver program to test above functions
int main()
{
    // Since array size is 7, elements should be from 0 to 48
    int arr[] = {40, 12, 45, 32, 33, 1, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Given array is n";
    printArr(arr, n);
 
    sort(arr, n);
 
    cout << "nSorted array is n";
    printArr(arr, n);
    return 0;
}
