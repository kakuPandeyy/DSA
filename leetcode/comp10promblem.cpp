#include<iostream>
#include<math.h>
using namespace std;

int bitwiseComplement(int n);
int option2(int n);


int main(){
  

  int a=5;
  cout << " enter num for convertion" << endl;
  
  cin >>  a;
 cout <<  option2(a) << endl;
  // bitwiseComplement(a);
   
}


// aam zindgi
 int bitwiseComplement(int n) {
      int maskCount=0;
      int mask=0;
      int x=n;

      while (x!=0)
      {
        maskCount= maskCount+1;
         x>>=1;
      }
    
    for (int i = 0; i<maskCount; i++)
    {
      mask += pow(2,i);
    }
  

      return mask&~n;
    }

// mantoze zindgi

int option2(int n){
 
 int m=n;
 int mask=0;
 while (m!=0)
 {
 mask = mask << 1|1;
 m>>=1;
 }

return  mask&(~n);


}
