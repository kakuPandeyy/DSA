#include<iostream>
#include<math.h>
using namespace std;

int negitiveToBinary(int n);


int main (){
  
  int n=-6;

  cout << " enter any number" << endl;

//   cin >> n;

  cout <<  " binary of this number in negitive term  :" << negitiveToBinary(n) << endl;




}


int negitiveToBinary(int n){


int ans=0;

// step one to ignoer nagitive sign

 if (n<0)
 {
    n = -n;
 }
 

 // take ones component
 // 0000 ..... 0011
  n = ~n;


// take two component
n= n+1;


for ( int j = 0; j < sizeof(n)*8; j++,n>>=1)
{
int bit = n&1;
cout << bit;
  
  

}

return 0;



 


}