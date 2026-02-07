#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <iomanip>

using namespace std;
/* function prototype*/


void display(int a[],int n){
    for(int i = 0; i < n; ++i){
        if(i) cout << " ";
        cout << a[i];
    }
    cout << endl;
  
}

void selectionSort(int a[], int n) 
{
    int i, mi;
    for(int j = 0; j < n-1; j++){
        mi = j;
        for(i = j+1; i < n; i++){
            if(a[mi] > a[i]){
                mi = i;
            }
        }
        swap(a[j], a[mi]);
    }
} 


/*
void insertion(int a[],int n){
int i,j,new_number;

for(j=1; j<n; j++){
  cout<<"==Round"<<j<<"inserting"<< a[j]<<endl;
  new_number =a[j];
  for(i=n-1; i>=0; i--){
    if(new_number <a[i]) a[i+1] = a[i];
    else break;

  }
  display(a,n);
  a[i+1] = new_number;

}

}*/

void insertion(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void bubbleSort(int a[],int n){
    for(int i = 0; i < n-1; ++i){
        for(int j = 0; j < n-1-i; ++j){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
#endif