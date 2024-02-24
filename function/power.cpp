#include<iostream>
using namespace std;
 

 // a ki power b

int power(){
  int a; 
  int b;

cout << " enter a and b for a to power b" << endl;  

cin >> a;
cin >> b;

int ans=1;

for (int i = 1; i <= b ; i++)
{
     ans *= a;
}

return ans;



}


int main(){
 
 int ans = power();

 cout << " answer is  " << ans << endl;


}