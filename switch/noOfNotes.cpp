#include<iostream>
using namespace std;

int noteCouter(int x);

int main(){
  
  int amount;

   cout << " enter the amount " << endl;

   cin >> amount;


noteCouter(amount);

}

int noteCouter(int x){

    int _100n=0;
    int _50n=0;
    int _20n=0;
    int _1n=0;
    int rem=x;

   int _cas = 1;
   switch (_cas)
   {
   case 1:
       _100n = rem/100;
        rem = rem%100; 
        cout << " 100 notes is " << _100n << endl;

   case 2 :  
          _50n = rem/50;
   rem = rem%50; 
     cout << " 50 notes is " << _50n << endl;


   case 3:  
      _20n = rem/20;
     rem = rem%20; 
      cout << " 20 notes is " << _20n << endl;
   default:
       int _1n=rem;
      cout << " 1 notes is " << _1n << endl;
    break;
   }


 

}