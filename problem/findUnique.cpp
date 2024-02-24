#include<iostream>
using namespace std;


void decoupling(int arr1[],int size1, int arry2[],int size2){


for (int i = 0; i < size2; i++)
{
   int check = arry2[i];

   for (int j = 0; j < size1; j++)
   {
    if (check == arr1[j] )
    {
      arr1[j] =0;
    }
    
   }
   
   
}

   

}


void insert( int arr[], int &n, int e,int size ){
   if( n < size ) {
      arr[ n ] = e;
   }
 n++;
}

void printingArry(int arry[],int n){

for (int  i = 0; i < n; i++)
{
     cout << arry[i]  << " ";
}

}

int findUnique(int arry[],int size){
int n= 0;
// int unique[size] ={0};
int duplicated[size] ={0};
int duplicatedCount=0;
int notCheckPoint = -1;

  for (int i = 0; i < size; i++)
  {
 

    if (notCheckPoint==i)
    {
       continue;
    }
    

     int chack = arry[i];
     for (int j = 0; j < size; j++)
     {
       if (j==i)
       {
         continue;
       }

       if (chack == arry[j] )
       {
         insert(duplicated,n,chack,size);
         duplicatedCount++;
         notCheckPoint = j; 
         break;
       }
      
     }
     

  }

  decoupling(arry,size,duplicated,duplicatedCount);
  printingArry(arry,size);
  
}


int main(){

int num[11] = {12,20,20,12,11,78,71,11,19,19,55 };
findUnique(num,11);
 

}