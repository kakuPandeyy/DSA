#include<iostream>
using namespace std;

double precise(int squareRoot , int giveNum, int numOfPre ){
float point = 1;
double ans;

for (int i = 0; i < numOfPre; i++)
{ 
   point = point/10;
  

  for (float j = squareRoot; j*j < giveNum; j = j+point)
  {
    ans = j;
   
  }

}

   return ans;

}

long long int squareRoot(int num){
 
 int s = 0;
 int e = num-1; 
long long int ans;
long long int mid = s + (e-s)/2;


while (s<=e)
{ 
long long int square = mid*mid;
if (square==num)
{
  return mid;
}
else if(square>num)
{
  e = mid -1; 
}else
{
   s = mid +1;
   ans = mid;
}
 mid = s + (e-s)/2;
}

return ans;
    

}

int main(){
double ans;
int num;
int ansOfSquare = squareRoot(10);
 
 ans =  precise(ansOfSquare,10,5);

cout << ansOfSquare << endl;

}