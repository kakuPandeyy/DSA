#include<iostream>
#include<math.h>
using namespace std;

int BinaryToDecimal(int x);

int main(){

  int binary ;
  cout << "enter binary" << endl;

  cin >> binary;

  cout << " decimal of this is :"<< BinaryToDecimal(binary) <<endl;

}

int BinaryToDecimal(int x){

int n=x;
int digit;
int ans=0;
int i=0;

while (n!=0)
{ 
  digit = n%10;
  if (digit&1==1)
  {
   ans = ans  +  pow(2,i);
  }
   i++;
   n /= 10;
}


return ans;

}