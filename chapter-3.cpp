// pass by reference/pass by value with pointers
#include <iostream>
using namespace std;
void passByValue(int val)
{
    val = 100;
}
void passByRefrence(int *val)
{
    *val = 100;
}
int main()
{
    int x = 20;
    int y = 20;
    passByRefrence(&x);
    cout << x << endl;
    passByValue(y);
    cout << y << endl;
    return 0;
}