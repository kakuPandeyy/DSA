#include<iostream>
using namespace std;

int peakOfMountain(int arr[],int size){

int start = 0;
int end = size - 1;

int mid = start + (end - start)/2;

while (start < end)
{
   if (arr[mid] < arr[mid+1] )
   {
    start = mid+1;
   }
   else{
   end = mid;
   }
   mid = start + (end - start)/2;
}
}

int main(){

int arry[5] = {12,17,3,2,2};
int ans;

// ans = peakOfMountain(arry,5);

ans = peakOfMountain(arry,5);
cout << ans << endl;

}