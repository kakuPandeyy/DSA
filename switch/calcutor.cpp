#include<iostream>
using namespace std;

int calculator(int x ,int y, char opra);

int main(){

   int a,b;
   char opra;
    cout << " welcome to calculator aap " << endl;
     cout << " enter  number  valu a" << endl;
     cin >> a;
      cout << " enter  number  valu b" << endl;
     cin >> b;
       cout << "  operatioin you wnat to do + / - * %" << endl;
     
       cout << endl;

  cin >> opra;

     cout << endl;

    cout << " calculation of " << a <<  " and "<< b  << " is " <<  calculator(a,b,opra) << endl;
}

int calculator(int x, int y , char opra){


switch (opra)
{
case '+':
    return (x+y);
    break;

case '-':
    return (x-y);
    break;

case '*':
    return (x*y);
    break;

case '/':
    return (x/y);
    break;
case '%':
    return (x%y);
    break;
default:
    break;
}



}