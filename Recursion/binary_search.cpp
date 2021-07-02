/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//binary search
int binary_search(int arr[],int key,int lower,int higher){
    
    printf("\n%d %d\n",lower,higher);
    
    if(higher>=lower)
    {
       int mid = (lower+higher)/2;
        if(arr[mid] == key)
        {
            return 0;
        }
      
        if(arr[mid]< key)
        {
            lower = mid+1;
            binary_search(arr,key,lower,higher);
        }
        else
        {
             higher= mid-1;
             binary_search(arr,key,lower,higher);
        }
    }
   else
   {
          
      return -1;
       
   }
      
    
    
    
}



void sort(int arr[],int size){
    
    
    for(int i= 0 ; i<size-1; i++){
        
        for(int j= i+1; j<size; j++){
            if(arr[i]>arr[j]){
                
                int temp =arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    
}

int main()
{
    
    int arr[8] = { 2,3,41,4,6,7,8,9};
    
    sort(arr,8);
    
    for(int i =0 ; i<8 ; i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    sort(arr,8);
    
    for(int i =0 ; i<8 ; i++){
        printf("%d ",arr[i]);
    }
    
    int key;
    printf("\n enter the key: ");
    scanf("%d",&key);
    int ret = binary_search(arr,key,0,8);
    
    
    if(ret == -1){
        printf("key not found\n");
        
    }
    else if (ret == 0){
        printf("key found \n");
    }
        
    

    return 0;
}
