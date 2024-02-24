#include<iostream>
#include<math.h>
using namespace std;

void decimalToBinary(int x);
void decimalToBinary2(int x);
int multipler(int x);


int main(){
    
   int deciamal;

   cout << " enter an deciamal number " << endl;
   
   cin >> deciamal;

decimalToBinary2(deciamal);

    // int ans=0;
   
    // for (int i = 0; deciamal!=0; i++,deciamal>>=1)
    // {
    //  int bit = deciamal & 1;
    //  ans = (bit*pow(10,i)) + ans;
    // }
    // cout << decimalToBinary(2) << endl;  
}

void decimalToBinary(int x){
  
  int rem,ques=x;

  int count=0;
  while (ques>0)
  {
   rem=ques%2;
   cout << rem ;
   count++;
    ques = ques/2;
  }
cout << endl;
}



void decimalToBinary2(int x){


  int bit;
int ans=0;
int i=0;

  while (x!=0)
  {
      int bit= x&1;
      ans= (bit*multipler(i)) +ans;
      // cout << "bit printing" << bit << endl ;
         
       cout << "ans printing"  << ans << endl  ;
       x>>=1;
       i++;
  }
  cout << endl;
}

int multipler(int x){

  int powerOf10=1;

  for (int i = 0; i < x; i++)
  {
  powerOf10*=10;
  }
  
  return powerOf10;

}


//formula for reverse the number is ans = digit*10ofPower + ans i=0 for first digit 


// let 123
// let ans =0


// case 1 for 

// digit 1 is first for i of this is 0
 
 // ans = 1*10ofPowerZero + 0(ans)
 // ans= 1*1+0
 // ans = 1

 // next digit 2
 // ans = 2*10ofPowerOne of + 1(ans)
 // ans = 20 +1 = 21

 // next digit is 3
// ans = 3*10ofPowerTwo + 11(ans)
 // ans = 3*100 + 21 = 321

 // hence 321 

 // case does not change
// formula ans = (ans*10) + digit 
 // let 123 to varify
 // let ans = (0*10) + 1 =1
 // ans= (1*10) +2 = 12
 // ans = 12*10 + 3= 123
 // hence 123


