#include<iostream>
using namespace std;

int rightBinearySearch(int arry[],int size,int key){
int start = 0;
  int end = size-1;
  int mid =(start + end)/2 ;
  int ans = -1;

  // cout << mid << endl;
  while (start <= end)
  {
    //   if ( arry[mid]==key)
    // {
    //   if ((mid+1)>size-1 ||arry[mid+1] != key  )
    //   {
    //      return mid;
    //   }
    
    // }
    
    // if (arry[mid]==key&&arry[mid+1]==key)
    // {
    //  
    // }

  
     if (arry[mid] == key)
     {

      ans = mid;
      start = mid+1;

     }
    if (arry[mid] < key)
    {
        start = mid+1;
    }
    if (arry[mid] > key )
    {
         end = mid-1;
    }
    
      mid =(start + end)/2;
  }
  

return ans;

}

int leftBinearySearch(int arry[], int size ,int key){
 
  int start = 0;
  int end = size-1;
  int mid = (start + end)/2;
  int ans = -1;

  // cout << mid << endl;
  while (start <= end)
  {
    if ( arry[mid]==key)
    {
          ans = mid;
          end = mid-1;
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
  

return ans;
 
}

int main(){

 int ans,ans2;
 int even[6] = {2,4,12,12,12,18};
 int odd[8] = {0, 0, 1, 1, 2, 2, 2, 2};
  ans = leftBinearySearch(odd,8,1);
  ans2 = rightBinearySearch(odd,8,1);

   cout << " from left " <<ans << " from right" << ans2 << endl;

}
