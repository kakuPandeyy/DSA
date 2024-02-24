#include<iostream>
using namespace std;
int hammingWeight(uint32_t n);


int main(){

uint32_t a=00000000000000000000000000001011;


cout << hammingWeight(a) << endl;

}
int hammingWeight(uint32_t n){
   int c=0;
   while ( n!=0)
   {
    if (n&1)
    {
      c++;
    }
n = n>>1;
   }
  return c;
 }