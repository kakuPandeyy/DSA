#include<iostream>
using namespace std;

int setBits(int a,int b){


int count=0;
while (a!=0)
{
    if (a&1)
    {
    ++count;
        }
    a >>=1;
}
while (b!=0)
    {
    if (b&1)
    {
    ++count;
    }
    b >>=1;
}


  return count;

}

int main(){


int a,b;
cout << " enter number a " << endl;

cin >> a;
cout << " enter number b " << endl;

cin >> b;

cout << " total set bits or are " << setBits(a,b) << endl;
}

//1111011 123
//231 11100111