/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>

using namespace std;
#define SWAP(x,y,temp) (temp = x, x =y, y =temp)

int main()
{
    
    int x,y,use;
    
    x= 10,y=20;
    SWAP(x,y,use);
    
    printf("%d %d",x,y);
    

    return 0;
}
