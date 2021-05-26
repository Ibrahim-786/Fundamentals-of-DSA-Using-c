/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
//linear search algorithms
using namespace std;

int main()
{
    cout<<"Hello World\n";
    
    int key;
    int data[6] = {2,4,6,7,8,9};
    cout<<"please enter key: ";
    
    cin>>key;
    int pos = -1;
    //for linear search sort is not required
    for(int i= 0; i<6; i++){
        
        if(data[i]==key){
            pos = i;
            break;
        }
    }
    
    if(pos==-1){
        printf("key not found\n");
    }
    else{
        printf("key found at position %d and the key is : %d",pos,data[pos]);
    }
    
    

    return 0;
}
