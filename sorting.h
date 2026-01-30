#ifndef SORTING_H
#define SORTING_H

#include <iomanip>

using namespace std;
/* function prototype*/


void display(int a[],int n){
    int i;
    for(i=0;i<n;i++)
        std::cout<<setw(3)<<a[i];
	  std::cout<<std::endl;
  
}

void selectionSort(int a[], int n) 
{ 
	  int i, j, m, mi; 
    cout<<"Before selection sort: ";
    display(a,n);
    mi = 0;
    for(int j = 0; j < n-1; j++){
        mi = j;
        for(i = j+1; i < n; i++){
            if(a[mi] > a[i]){
                mi = i;
            }
        }
        swap(a[j], a[mi]);
        //display(a, n);
    }
    cout<<"After selection sort: ";
    display(a,n);
} 



void insertion(int a[],int n){
  
}

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void bubbleSort(int a[],int n){
    cout<<"Before bubble sort: ";
    int i,j;
    int sorted;
    // how many pair to compare?
    for(j=1;j<n;j++){
    	for(int j = 0; j < i; j++){
          if(a[i] < a[j]){
              swap(a[i], a[j]);
          }
      }
      //display(a,n);
    }
    cout<<"After bubble sort: ";
}
#endif