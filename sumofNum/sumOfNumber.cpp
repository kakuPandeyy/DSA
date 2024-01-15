#include<iostream>
using namespace std;

int sumOfNumber(int x);
int sumOfEvenNumber(int x);


int sumOfNumber(int x){
    int i=0;
    int sum=0;
    while (i<=x)
    {
         sum+=i;
         i++;
    }
    
    return sum;
}
int sumOfEvenNumber(int x){

 int i=2;
    int sum=0;
    while (i<=x)
    {
         sum+=i;
         i = i +2;
    }
    
    return sum;



}

 int main(){

  int a;
  cout << " enter positive number till you want sum " << endl;

  cin >> a;
  

  cout << " sum of number till  " << a << " is equal to :  " <<  sumOfNumber(a) << endl;
cout << " sum of number till  " << a << " is equal to :  " <<  sumOfEvenNumber(a) << endl;

 }

