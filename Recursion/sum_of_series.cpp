/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

//sum of the series

int sum_series(int num){
    if(num == 0){
        return 0;
    }
    else{
       return num+sum_series(num-1);
    }
    
    
}

using namespace std;

int main()
{
    int num;
    printf("enter the num : ");
    scanf("%d",&num);
    
    printf("\nthe summation of %d is %d",num ,sum_series(num));

    return 0;
}
