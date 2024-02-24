#include<iostream>
using namespace std;
// 2m +1
 // one m's are two and n is one

void printingArr(int arry[],int size){

    for (int i = 0; i < size; i++)
    {
       cout  << arry[i] << " ";
    } cout << endl;
    
}

int findUniqe(int arry[],int size){
  

int ans = 0;
for (int i = 0; i < size; i++)
{
   ans = ans^arry[i];
}


 return  ans;

//   for (int  i = 0; i < size; i++)
//   {
//      int check = arry[i];

//      for (int j = 0; j < size; j++)
//      {
//         if (j==i)
//         {
//             continue;
//         }
//         if (check == arry[j])
//         {
//             arry[i]=0;
//             arry[j]=0;
//             break;
//         }   
//      }
     
//   }

//   for (int k = 0; k < size; k++)
//   {
//      if (arry[k]!=0)
//      {
//         return arry[k];
//      }
     
//   }
  

}



int main(){

int arr[4] = {5,2,6,3};

int ans = findUniqe(arr,4);
cout << ans << endl;

}