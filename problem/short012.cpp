#include<iostream>
using namespace std;

void printingArry(int arry[],int size){
   
 for (int  i = 0; i < size; i++)
 {
   cout << arry[i] << " ";
 }cout << endl;

}

void shorted(int arry[],int size){

    int i =0 ,j= size-1;

    // checking 2,0

 while (i< j)
 {
  
  while (arry[i]!=2)
  {
      i++;
  }
   while (arry[j]!=0)
  {
      j--;
  }
 
  while (arry[j]==0 && arry[i]==2)
  {
    if (i<j)
    {
       swap(arry[i],arry[j]);
     i++;
     j--;
    }else{
  
  break;

    }
  }
      i++;
     j--;
  
 }
 
   // checking 2,1
  i= 0 , j= size-1;

 while (i<j)
 {
  
  while (arry[i]!=2)
  {
      i++;
  }
   while (arry[j]!=1)
  {
      j--;
  }
 
  while (arry[i]==2 && arry[j]==1)
  {
    if (i< j)
    {
       swap(arry[i],arry[j]);
     i++;
     j--;
    }else{
  break;
    }
  }
    i++;
     j--;
 }

// checking 1,0 ,
i= 0 , j= size-1;

 while (i<j)
 {
  
  while (arry[i]!=1)
  {
      i++;
  }
   while (arry[j]!=0)
  {
      j--;
  }
 
  while (arry[i]==1 && arry[j]==0)
  {
    if (i< j)
    {
       swap(arry[i],arry[j]);
     i++;
     j--;
    }else{
  break;
    }
  }
    i++;
     j--;
 }



}

int main(){
 
 int arry[9] ={2,2,2,1,0,1,1,0,2};
shorted(arry,9);
printingArry(arry,9);

}


