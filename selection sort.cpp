#include <iostream>
using namespace std;

  selecttionsort(int array[], int n){

  int step,cmpr, min;
  for (step=0; step<n-1; step++){
    min=step;
  for(cmpr=step+1; cmpr<n; cmpr++)
      if(array[cmpr]<array[min])
        min=cmpr;
       swap(array[min],array[step]);
  }
  }

int main()
{
    int n,i;
    cout <<"Enter the array size: ";
    cin >> n;
    int array[n];
    cout<<"Enter array element: ";
    for(i=0; i<n; i++)
      array[i]= rand() % 50;

    cout<<"unsorted array element: ";
    for(i=0; i<n; i++)
       cout<<array[i]<<" ";

       selecttionsort(array,n);

       cout<<"\nSorted array element: ";
         for(i=0; i<n; i++)
           cout<<array[i]<<" ";
}


