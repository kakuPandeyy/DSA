#include<iostream>
using namespace std;


int main(){

int a=8;
int b=9;

//a=8,converted into 1000
//b=9,converted into 1001
//a&b ,converted int 1001, which is 8


cout << "a&b   :" << (a&b) << endl;


//a=8,converted into 1000
//b=9,converted into 1001
//a|b ,converted int 1001, which is 9
cout << "a|b   :" << (a|b) << endl;



//b is 32 bit or 4 bytes
//b=9,converted into 0000,0000 0000,0000 0000,0000 0000,1001
//~b ,converted into 1111,1111 1111,1111 1111,1111 1111,0110
//its first digit is 1 so it interperted as negitive number

//for printing
// comptuter will take its 2's complemet 
// 1'st completment whill convert the converted into 1111,1111 1111,1111 1111,1111 1111,0110 to  
// into 0000,0000 0000,0000 0000,0000 0000,1001
// 2't complement 1 add to 1'st complement

//0000,0000 0000,0000 0000,0000 0000,1001 
                          //      +     1
                          //-------------
//0000,0000 0000,0000 0000,0000 0000,1010 

// it will print as 1010 into 10

//so ~bs will be -10

cout << "~b   :" << (~b) << endl;

//X0R

//1,1 = 0
//1.0 =1
//1,1 = 1
//0,0 = 0


//a=8,converted into 1000
//b=9,converted into 1001
//a^b,converted into 0001,it will be 1


cout << "a^b    :"<< (a^b) << endl;


}