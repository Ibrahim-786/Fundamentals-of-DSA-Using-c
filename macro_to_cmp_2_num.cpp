/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


//macro to compare 2 numbers of any type
#define COMPARE(X,Y) ((X)==(Y)?0:((X)>(Y)?1:-1))

int main()
{
    cout<<COMPARE('A','a')<<"\n";
    cout<<COMPARE(20,20)<<"\n";
    cout<<COMPARE(10.2,5.8)<<"\n";

    return 0;
}
