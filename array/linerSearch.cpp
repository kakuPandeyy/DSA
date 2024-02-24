#include<iostream>
using namespace std;

bool search(int arry[],int size,int key){


for (int i = 0; i < size; i++)
{
     if (arry[i]== key)
     {
       return 1;

     }
     
}

return 0;

}



int main(){

int arry[5] = {5,6,8,11,12};

int key;

cout << "  enter the number you want to search in the arry" << endl;
 
cin >> key;

bool found = search(arry,5,key);

if (found)
{
    cout << " number is present in arry" << endl;
}
else{
  
  cout << " number is absent in arry" << endl;

}


}