// [12, 15, 18, 2, 4] , 'k' = 2
// search in the an element in rotated shorted arr

#include<iostream>
using namespace std;





int binearySearch(int arry[],int start,int end,int key ){
   
  

  int mid = start + (end - start)/2;   
//1,2,4,15,18
  while (start <=end)
  {

    if (arry[mid] == key )
    {
    return mid;
    }
    if (arry[mid] < key)
    {
       start = mid +1;
    }
    if (arry[mid] > key)
    {
      end = mid - 1;  
    }
    
     mid = start + (end - start)/2;  
  }
  return -1;
  
}

int pivote(int arr[],int size){

   int s =0;
   int e = size-1;
   
   
   int mid = s + (e-s)/2;


    while (s<e)
    {
      if (arr[0]<arr[mid])
      {
          s = mid+1;
      }else{
         e = mid;
      }
      mid = s + (e-s)/2;
    }

   return s;
}


int searchInShortedArry(int arr[],int size,int key){


   // [12, 15, 18, 2, 4] , 'k' = 2
// search in the an element in rotated shorted arr

   int pivotePoint = pivote(arr,size);
 
    if (key>=arr[pivotePoint] && key<=arr[size-1])
    {
       return binearySearch(arr,pivotePoint,size-1,key );
    }else{
      return binearySearch(arr,0,pivotePoint-1,key );
    }
    

}


int main(){
 
   int arr[5] = {15,18,1,2,4};
    
    int ans;
     
  ans = searchInShortedArry(arr,5,15);

  cout << ans ;
   
}