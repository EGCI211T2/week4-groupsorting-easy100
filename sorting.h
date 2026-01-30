#ifndefine SORTING_H
#define SORTING_H

#include <iomanip>
/* function prototype*/


void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        std::cout<<setw(3)<<a[i];

	std::cout<<std::endl;
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
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
} 



void insertion(int a[],int n){
  for(int i = n-1; i >= 0; i--){
          if(a[i]<= newnb){
              break;
          }
          swap(a[i+1], a[i]);
          //display(a, n);
      }
}

void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how many pair to compare?
for(j=1;j<n;j++){
	for(int j = 0; j < i; j++){
      if(a[i] < a[j]){
          swap(a[i], a[j]);
      }
  }
  display(a,n);
 }
  
}
#endif