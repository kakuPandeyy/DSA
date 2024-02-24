#include<iostream>
#include<math.h>
using namespace std;

bool powerOfTwo(int x);

int main(){
   
   int n;

  cout << " enter any number " << endl;

  cin >> n;


//   cout << " number : " << n << " is the "  << powerOfTwo?" is the power of 2 ": " is not a power of 2" << endl;


 powerOfTwo(n)? cout << " number  :" << n << " is power of 2 " << endl: cout << " number  :" << n << " is not power of 2 " << endl;

}

bool powerOfTwo(int x){

int ans =1;

for (int i = 0; i <= 30; i++)
{
   
   if (ans == x)
   {
    return true;
   }
   if (ans < INT32_MAX/2)
   {
    ans*=2;
   }

}
    return false;

}

// 2147483647


