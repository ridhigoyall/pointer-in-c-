#include<iostream>
using namespace std;
void passByValue(int val)
{
  val=100;
}
void passByRefernce(int *val)
{
  *val=100;
}

int main(){
    int x=20;
    int y=20;
    passByValue(x);
    cout<<x<<endl;

    passByRefernce(&y);
    cout<<y<<endl;
}