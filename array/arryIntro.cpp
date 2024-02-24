#include<iostream>
using namespace std;



void printArry(int arry[], int size){

cout << " printing the arry " << endl;

for (int i = 0; i < size; i++)
{
cout << arry[i] << " ";   
}
cout << " printing the arry done " << endl;
}






int main(){
//first
int number[15];
cout << " value at14 index " << number[14] << endl;
printArry(number,14);


//second
int second[3] = {5,7,11};
cout << " value at 2 index of second arrry " << second[2] << endl;

// thrid
int n=15;

int third[15] = {2,7};
printArry(third,n);
 
 // bad practice to puting vaariable in arry
// int m=10;
// int forth[m] = {0};
// printArry(forth,m);

//forth
int m=10;
int forth[10] = {0};
printArry(forth,m);


//fifth
int o=10;
int fifth[10] = {1};
printArry(fifth,o);

// size of arry

int size = sizeof(fifth)/sizeof(int);

cout << " size of fifth arry " << size << endl;
 

}