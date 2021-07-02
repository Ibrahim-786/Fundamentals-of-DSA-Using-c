/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int figo(int num){
    
    if (num == 0){
        return 0;
    } 
    else if(num == 1){
        return 1;
    }
    else
     return figo(num-1)+figo(num-2);
    
    
    
}

int main()
{
    
    printf("%d ",figo(6));

    return 0;
}
