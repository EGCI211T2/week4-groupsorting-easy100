#include <iostream>
#include <cstring>
using namespace std;
#include "sorting.h"

int main(int argc, char**argv) {
  int *a,N;
  cout<<"argc = "<<argc<<endl;
  if (argc <= 2){
    cout<<"Not enough arguments"<<endl;
    return 0;
  }
  for(int i = 2; i < argc; i++){
    cout<<"argv[" << i<<"] : " <<argv[i]<<endl;
    a[i-2] = atoi(argv[i]);
  }
  N = argc - 2;
  display(a,N);

  if(argc>1){
       if(argv[1] =="bubble") bubbleSort(a,N); 
       else if(argv[1] =="insertion") insertion(a,N); 
       else if(argv[1] =="selection") selectionSort(a,N);
    
       //display(a,N);
      }
 return 0;
}


