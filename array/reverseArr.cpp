#include<iostream>
using namespace std;


void printingArry(int arry[],int n){

for (int  i = 0; i < n; i++)
{
     cout<< arry[i]  << " ";
}

}
  
int reverse(int arry[] , int n ){
    
    int start=0;
    int end= n-1;

   while ( start <= end)
   {
    swap(arry[start],arry[end]);
     start++;
     end--;
   }
   
    
printingArry(arry,n);
}



// int reverse(int arry[], int size){

// int reveArry[size];

// for (int  i = 0; i < size; i++)
// {
//     reveArry[size-i-1] = arry[i];
// }

//   for (int i = 0; i < size; i++)
//   {
//      cout << reveArry[i] << " " ;
//   }
  
// }


int main(){
  
  int arry[9] = {2,4,5,1,4,6,76,332,2}; 
 

   reverse(arry,9);

}