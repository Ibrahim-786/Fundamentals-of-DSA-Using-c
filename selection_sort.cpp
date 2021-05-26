/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World\n";


  int arr[6] = {2,5,7,31,1,6};
  
  
 for(int i=0; i<6-1;i++){
     
    for(int j = i+1; j<6;j++){
     
     if(arr[i] > arr[j]){
         int temp;
         temp = arr[i];
         arr[i] =arr[j];
         arr[j] = temp;
     }
     
   }

}
 
 
      for(int i =0 ; i<6; i++){
          printf("%d ",arr[i]);
      }
  
    return 0;
}
