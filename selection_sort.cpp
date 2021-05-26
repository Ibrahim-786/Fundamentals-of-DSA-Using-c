/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//selection sort

#include <iostream>

using namespace std;

int main()
{
   int size;
   
   cin>>size;
   int arr[size];
   
   for(int i= 0 ; i<size; i++){
       cin>>arr[i];
   }
   
   printf("before sorting\n");
   
      for(int i= 0 ; i<size; i++){
       cout<<arr[i]<<" ";
   }
   
   
   for(int i= 0; i<size-1; i++){
       for(int j = i+1; j<size; j++){
           if(arr[i]>arr[j]){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
   
   printf("\n after sorting\n");
   
   
      for(int i= 0 ; i<size; i++){
       cout<<arr[i]<<" ";
   }
   
   
   
   
   

    return 0;
}
