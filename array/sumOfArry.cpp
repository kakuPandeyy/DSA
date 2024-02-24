#include<iostream>
using namespace std;

int sumOfArry(int arry[],int size){

int sum=0;

for (int  i = 0; i < size; i++)
{
    sum += arry[i];
}

return sum;

}

int main(){


 cout << "  welcome to sum calculator  " << endl;

 int size;

 cout << " enter the size of arry " << endl;

 cin >> size;
 
 int arry[size];

 cout << "  enter the " << size << " number of elements  " << endl;

for (int i = 0; i < size; i++)
{
   cin >> arry[i];
}

cout << " sum of the arry is " << sumOfArry(arry,size) << endl;
 



}