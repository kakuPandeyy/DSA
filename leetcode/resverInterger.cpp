#include<iostream>
#include<math.h>

using namespace std;
int reverse(int x);
int digitKnow(int x);

int main(){
    int n;
cout << " enter the num " << endl;

cin >> n;

cout << reverse(n) << endl;

}

int reverse(int x){


 int ans=0;



   while (x!=0)
   {

 int digit =x%10;
 if ( ans > INT32_MAX/10 || ans < INT32_MIN/10 )
 {
    return 0;
 }

 ans = (ans*10)+digit;
     
   x/=10;

   }
   return ans;


}
