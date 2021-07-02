/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
//sum of array elements

int sum_array(int array[],int size){
    
   // int static size_t = size;
    
    if(size == -1){
        return 0;
    }
    
    return array[size]+sum_array(array,--size);
}


int main()
{
    int arr[10] = {2,1,3,4,5,6,7,8,9,10};
    
    printf("the sum of array is : %d",sum_array(arr,10));
   

    return 0;
}
