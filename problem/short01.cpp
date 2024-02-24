#include<iostream>
using namespace std;

void printingArry(int arry[],int n){

for (int  i = 0; i < n; i++)
{
     cout << arry[i]  << " ";
}

}

// void insert( int arr[], int &n, int e,int size ){
//    if( n < size ) {
//       arr[ n ] = e;
//    }
//  n--;
// }


// void shortingFunIn01(int arry[],int size){

//     int n = size-1;
//     int shortArry[size] = {0};

//   for (int  i = 0; i < size; i++)
//   { 
//     if (arry[i]==1)
//     {
//         insert(shortArry,n,arry[i],size);
//     }
    
    
//   }
  
// printingArry(shortArry,size);

// }

//twoPointerApproch
 void shortingFunIn01(int arry[],int size){

  int i = 0 ,j= size-1;

  while (i < j)
  {
    while (arry[i]==0)
    {
      i++;
    }
    while (arry[j]==1)
    {
      j--;
    }
     if ( i<j)
     {
       swap(arry[i],arry[j]);
    i++;
    j--;
     }
     
    

    
  }
  


 }

int main(){
 
 int arry[6]= {0,1,1,1,0,1};

 shortingFunIn01(arry,6);

 printingArry(arry,6);

}