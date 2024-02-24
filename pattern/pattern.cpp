#include<iostream>
using namespace std;

void pattern1(int x);

void pattern2(int x);

void pattern3(int x);

void triangle(int x);

void star( int x);
  


int main(){
 
int  rowsOfPattern;

cout << " enter number " << endl;
cin >> rowsOfPattern;
 star(rowsOfPattern);
// pattern1(rowsOfPattern);
// pattern2(rowsOfPattern);
// pattern3(rowsOfPattern);
// triangle(rowsOfPattern);
  

}


// pettern one

void pattern1(int x){

 int i = 1;

 while (i<=x)
 {
    int j=1;
    while(j<=x){
        cout << "*" ;
        j++;
    }
    cout << endl;
    i++;
 }
 

 cout << endl;

}



// pettern seconds

void pattern2(int x){

 int i = 1;

 while (i<=x)
 {
    int j=1;
    while(j<=x){
        cout << i ;
        j++;
    }
    cout << endl;
    i++;
 }

    cout << endl;

}

// pattern 3
void pattern3(int x){


int i =1; 

 while (i<=x)
 {
    // int j=i;

  int j=1;

  while (j<=x-i)
  {
     cout << i ; 
     j++;
  }
  
cout << endl;
i++;

 }
 


}


void triangle( int x){

 int i=1;
 

 while (i<=x)
 {
  int space = x-i+1; 
  while ( space>0)
  {
   cout << " ";
     space--;
  }

  int j=1;
  while (j<=i)
  {
   cout << j;
   j++;
  }
  
// if ( i>1)
// {
//   int k=1;

//    while (k+1<=i)
//   {
//    cout << k;
//    k++;
//   }
// }
int start = i-1;

while (start)
{
   cout<< start;
    start--;
}

i++;

cout << endl;

 }

}


void star( int x){

 int i=1;

 while (i<=x)
 {
   int j = 2*(i-1)+1;   
   while (j>0)
   {
      cout << "*";
      j--;
   }
   cout << endl;
   i++;
 }
 


}