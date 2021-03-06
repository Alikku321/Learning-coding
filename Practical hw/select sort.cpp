#include <iostream>
#define N 5
using namespace std;
void swapping(int &a, int &b) {         //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]);
   }
}

int main()
{
    int arr[N];
    cout<<"Enter elements: "<<endl;
    for(int i = 0; i<N; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting: ";
    display(arr, N);
    selectionSort(arr, N);
    cout<<"Array after sorting: ";
    display(arr, N);

    return 0;
}