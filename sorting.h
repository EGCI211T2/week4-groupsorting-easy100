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
     
	
} 



void insertion(int a[],int n){
int i,j,new_number;

for(j=1; j<n; j++){
  cout<<"==Round"<<j<<"inseting"<< a[j]<<endl;
  new_number =a[j];
  for(i=m-1; i>=0; i--){
    if(new_number <a[i]) a[i+1] = a[i];
    else break;

  }
  display(a,N)
  a[i+1] = new_number;

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
// how may pair to compare?
for(j=1;j<n;j++){


	
  display(a,n);
 }
  
}
#endif




