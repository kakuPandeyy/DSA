#include<iostream>
using namespace std;

int binearySearch(int arry[], int size ,int key){
 
  int start = 0;
  int end = size-1;
  int mid = (start + end)/2;

  // cout << mid << endl;



  while (start <= end)
  {
    if (arry[mid]==key)
    {
      return mid;
    }
    if (arry[mid] < key)
    {
        start = mid+1;
    }
    if (arry[mid] > key )
    {
         end = mid-1;
    }
    
      mid = (start + end)/2;
  }
  

return -1;
 

   

}

int main(){

 int ans;
 int even[6] = {2,4,6,8,12,18};
 int odd[5] = {3,8,11,14,16};
  ans = binearySearch(odd,5,14);
   cout << ans << endl;

}