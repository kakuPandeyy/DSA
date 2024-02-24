#include<iostream>
using namespace std;

int main(){


//left shift


  int a=4;


// a is 32 bit or 4 bytes
// a=4,converted into 0000,0000 0000,0000 0000,0000 0000,0100
// << left shift operator 
// shift it by one bit into 0000,0000 0000,0000 0000,0000 0000,1000
//output will be 8

 cout <<  " left shift a=4 a<<1 :" <<  (a<<1) << endl;

 // we can also us formula 
 // like multiply by 2 for number of digits



 // a=4, for one place 4*2=8
 // a=4 for two place 4*2 =8 ,8*2=16
//output will be 16

 cout<< " left shift a=4 a<<2 :" <<  (a<<2) << endl;

 // a=4, for one place 4*2=8
 // a=4 for two place 4*2 =8 , 8*2=16
  // a=4 for third place 4*2 =8 ,8*2=16,16*2=32
//output will be 32

cout<< " left shift a=4 a<<3 :" << (a<<3) << endl;

int b=10;

 // b=10, for one place 10*2=20
//output will be 20

cout << " left shift b=10 b<<1 :" << (b<<1) << endl;

 // b=10, for one place 10*2=20
// b=10 for second place 10*2=20,20*2=40

//output will be 40

cout << " left shift b=10 b<<2 :" << (b<<2) << endl;

 // b=10, for one place 10*2=20
// b=10 for second place 10*2=20,20*2=40
// b=10 for third place 10*2=20,20*2=40,40*2=80
//output=80
 
cout << " left shift b=10 b<<3 :" <<(b<<3) << endl;


//in Case of positive padding will be 0
// in case of negitive padding will be opertor dependent



// right shift



// a is 32 bit or 4 bytes
// a=4,converted into 0000,0000 0000,0000 0000,0000 0000,0100
// << left shift operator 
// shift it by one bit into 0000,0000 0000,0000 0000,0000 0000,0010
//output will be 2s

  

 cout << " right shift a=4 a>>1 :" << (a>>1) << endl;

 // we can also us formula 
 // like dived by 2 for number of digits



 // a=4, for one place 4/2=2
 // a=4 for two place 4/2 =2 ,2/2=1
//output will be 1


 cout << " right shift a=4 a>>2 :" << (a>>2) << endl;
  // a=4, for one place 4/2=2
 // a=4 for two place 4/2 =2 ,2/2=2
 // a=4 for third place 4/2 =2 ,2/2=1,1/2=0
//output will be 0

 cout << " right shift a=4 a>>3 :" << (a>>3) << endl;

  // b=10, for one place 10/2=5

//output will be 5
 cout << " right shift b=10 b>>1 :" << (b>>1) << endl;


 // b=10, for one place 10/2=5
   // b=10 for two place 10/2 =5 ,5/2=2
  //output will be 2

 cout << " right shift b=10 b>>2 :" << (b>>2) << endl;

 // b=10, for one place 10/2=5
   // b=10 for two place 10/2 =5 ,5/2=2
   //b=10 for third place 10/2 =5 ,5/2=2 , 2/2=1
  //output will be 1
 cout << " right shift b=10 b>>3 :" << (b>>3) << endl;
}