#include<iostream>
using namespace std;

void fabonacci(int n){

  int first =0;
  int second =1;
  int sum=0;
cout << "01" ;
for (int i = 0; i <= n; i++)
{   
     sum = first + second;
     cout << sum;
     first = second;
     second=sum;
}



}

int main(){


int n=5;

cout << " enter the  terms you want in print fabonacci" << endl;

// cin >> n;

fabonacci(n);



}