#include<iostream>
using namespace std;

void insert(int arry[],int &n, int e,int size){
   
if ( n < size )
{
    arry[n] = e;
}
  
 n++;    
}


void printingArry(int arry[],int n){

for (int  i = 0; i < n; i++)
{
     cout << arry[i]  << " ";
}

}

void internection(int arry1[], int size1, int arry2[],int size2,int intersec[],int size3){

    int i =0; 
	int j =0;

	 
	while(i<size1&& j< size2){
  // 1,2,2,2,3,4
  //2 ,2, 3 ,3
   


    if(arry1[i] <arry2[j]){
	 i++;	
	}
	 if(arry1[i] >arry2[j]){
	 j++;	
	}


  if(arry1[i] == arry2[j] && i<size1&& j< size2){
	  cout << arry1[i]  << " ";

	  i++;
	  j++;
  }
     }
// int n=0;

// for (int  i = 0; i < size1; i++)
// {
//      int check = arry1[i];

//      for (int j = 0; j < size2; j++)
//      {
//          if (check == arry2[j])
//          {
//           insert(intersec,n,check,size3); 
//           break;  
//          }
//      }
// }


printingArry(intersec,size3);


}

int main(){
 
int arry1[6] = {1,2,2,2,3,4};

int arry2[4] = {2 ,2, 3 ,3};

int intersection[6] = {0};

 internection( arry1 ,6, arry2,4,intersection,6);

}