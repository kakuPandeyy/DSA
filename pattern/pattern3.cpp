#include<iostream>
using namespace std;

void startPattern(int n,char t);



int main(){

char typeOfPattern;
int rowsOfPattern;
 
 cout << " enter any number of rows" << endl;
 cin >> rowsOfPattern;

cout << " enter any type of pattern like a,b,c " << endl;
  cin >> typeOfPattern;
startPattern(rowsOfPattern,typeOfPattern);
}


void startPattern(int n,char t){
 
 cout <<endl;
if (t=='a')
{
    int i = 1;

    while (i<=n)
    {
        int space = n-i;
       int j=1;


        while (space>0)
        {
          cout << " " ;
          space--;
        }
         while (j<=i)
        {
          cout << "*" ;
          j++;
        }
         cout <<endl;
    i++;


    }
    
}
if (t=='b')
{
  int i=1;
  while (i<=n)
  {
  
    int start = n - i + 1;
    while (start>0)
    {
        cout << "*";
        start--;
    }
      cout << endl;
    i++;
  }
  
}


}