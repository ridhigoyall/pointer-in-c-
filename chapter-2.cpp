//PRINTING A VALUE OF VAR IN POINTER 
#include<iostream>
using namespace std;
int main()
{
    int var=10;
    cout<<&var<<endl;
    int *intP;
    intP=&var;
    cout<<intP<<endl;
    cout<<*intP<<endl;
    var=20;
    cout<<*intP<<endl;

    return 0;
}