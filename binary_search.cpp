/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
//binary search algorithms
using namespace std;

int main()
{
    
    
    int key;
    int arr[6] = {9,4,6,7,8,9};
    cout<<"please enter key: ";
    
    cin>>key;
    
    cout<<"before sorting \n";
     for(int i =0 ; i<6; i++){
         printf("%d ", arr[i]);
     }
    
    //for binary search list as to be sorted
    for(int i =0 ; i<6-1; i++){
        for(int j = i+1; j<6; j++){
            if(arr[j] < arr[i] ){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
      cout<<"after sorting \n";
     for(int i =0 ; i<6; i++){
         printf("%d ", arr[i]);
     }
     
     
    //binary search is based on searching something in dictionary or telephone number
    int low = 0;
    int high= 5;
    int mid ;
    int pos = -1;
    
    while(high>=low){
        mid = (low+high)/2;
        
        if(arr[mid]==key){
            pos= mid;
            break;
        }
        else if(key>arr[mid]){
            low= mid+1;
        }
        else {
            //if(key<arr[mid])
            high= mid-1;
        }
        
    }
    
    if(pos == -1){
        printf("key not found in list\n");
    }
    else{
        printf("key found at position is :%d and key is :%d",pos,arr[pos]);
    }
    
    
    return 0;
}
