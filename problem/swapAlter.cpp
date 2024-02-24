#include<iostream>
using namespace std;

void printingArry(int arry[],int n){

for (int  i = 0; i < n; i++)
{
     cout<< arry[i]  << " ";
}

}

int swapAlternative(int arry[],int size){
 
 for (int  i = 0; i < size; i=i+2)
 {
   if (i+1<size)
   {
    swap(arry[i],arry[i+1]);
   }
   
     
     
 }
 

}

int main(){

  int arry[6] = {1,2,3,4,5,6};
  
  swapAlternative(arry,6);
  printingArry(arry,6);

}