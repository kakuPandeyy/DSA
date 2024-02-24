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
    ans += (x%10)*pow(10,digitKnow(x)-1);
    x /= 10;
