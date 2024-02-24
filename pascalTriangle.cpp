#include<iostream>
using namespace std;

void pascalTriangle(int x);
int factorial(int x);
int combination(int n,int r );


int main(){

  int numOfRow =6;

   cout << " enter the number of row  ";
  //  cin >> numOfRow;
   pascalTriangle(numOfRow);

}



  int factorial(int x){
    
    int i =1;
    int fact=1;

    while (i<=x)
    {
        fact*=i;
        i++;
    }
    return fact;

  }

int combination(int n,int r ){

  int result;

  result = factorial(n)/(factorial(r)*factorial(n-r));

return result;

}

void pascalTriangle(int x){

   
   cout << endl ; 
int i=1;

while (i<=x)
{
    int j=1;
    
    int odd = 2*(i-1)+1;

    
    
     
   while (j<=odd)
   {
   
   if (j==1)
   {
    
     int space= x-i+1;
    while (space>0)
    {

     cout << " "; 
    space--;};


   }
   

   if (j%2==0)
    {
          cout << " ";
        
     
    }
    else
    {
    
    int oddToNatural = (j-1)/2;
      cout << combination(i-1,oddToNatural);
     
    }


   j++;

   i++;
    cout << endl ; 
}



}

