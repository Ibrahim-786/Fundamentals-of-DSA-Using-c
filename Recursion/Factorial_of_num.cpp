/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

//Direct Recursion and Indirect recursion
//head Recursion Tail Recursion
//base case and general case
//Recursion will consume more stack compare to loops

//Recursion can reduce time complexity. ...
//Recursion adds clarity and reduces the time needed to write and debug code. ...
//Recursion is better at tree traversal. ...
//Recursion uses more memory. ...
//Recursion can be slow

//well Recursion can replace loops but loop can't

using namespace std;


int factorial(int num){
    
    if(num == 0){
        return 0;
    }
    else if(num == 1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
    
    
    
}


int main()
{
    int num;
    printf("please enter the number : ");
    scanf("%d",&num);
    
    
    printf("\n factorial of the number  %d is %d\n",num, factorial(num));

    return 0;
}
