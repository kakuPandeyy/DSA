#include<iostream>

using namespace std;

void update( int arrry[], int size){
    cout << " printing in update function" << endl;
  
  arrry[0] = 120;

  for (int i = 0; i < 3; i++)
    {
        cout << arrry[i] << " " ;
    }
    
cout << "  going back to main function " << endl;
}

int main(){
   

   int arry[3] = {1,2,3};

  update(arry,3);
   
 cout << " printing in main function" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arry[i] << " " ;
    }
    








}