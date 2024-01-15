#include<iostream>
using namespace std;

void pattern1(int x);

void pattern2(int x);

void pattern3(int x);
  


int main(){
 
 int  rowsOfPattern;

cout << " enter number " << endl;
cin >> rowsOfPattern;
pattern1(rowsOfPattern);
pattern2(rowsOfPattern);
pattern3(rowsOfPattern);

  

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