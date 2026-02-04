#include <iostream>
#include <cstring>
#include <cstdlib> //atoi
using namespace std;

#include "sorting.h"

int main(int argc, char**argv) {
  if (argc < 3)
    cout << "Usage : " << argc[0] << " <sorting_type <num1> <num2> ..." << endl;
    return 1;
}
 
 int N = argc -2; 
 int *a = new int[N];
    
  for (int i = 0; i<N; i++){
    a[i] = atoi(argv[i+2]); 
  }

   cout << " Before sorting: ";
   display(a,N);

  if(strcmp(argv[1], "bubble") == 0){
    cout<< "Sorting using: Bubble Sort" << endl;
    bubblesort (a,N);
  }
  else if(strcmp(argv[1], "selection")==0){
    cout << "Sorting using: Selection Sort" << endl;
    selectionsort(a,N);
  }
  else if(strcmp(argv[1], "intsertion")==0){
    cout << "Sorting using: Insertion Sort" << endl;
    insetion(a,N);
  }
  else{
    cout<<"Unknow sorting type:" <, argv[1] << endl;
  }
  cout<< "After sorting: ";
  display(a,N);

  delete[] a;
  return 0;

}


