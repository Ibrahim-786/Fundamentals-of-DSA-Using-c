/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>

using namespace std;


int main()
{
    
   int arr[10] = {2,3,6,4,1,7,8,9,5,0};
   
   int pos =0;
   
   for(int i =1; i<10;i++){
       if(arr[i]<arr[pos]){
           pos = i;
       }
       
      
   }
   
   printf("the smallest no is %d  and position is %d\n",arr[pos],pos);
    

    return 0;
}
