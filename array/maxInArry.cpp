#include<iostream>
using namespace std;


//finding maximum

int getMax(int num[],int size){
  
  int maxi = INT32_MIN;

  for (int i = 0; i < size; i++)
  {

 maxi = max(maxi, num[i] );
 // alternative
//    if (max < num[i])
//    {
//      max = num[i];
//    }
    
  }


 return maxi;

}


int getMin(int num[],int size ){

  int minim = INT32_MAX;

  for (int i = 0; i < size; i++)

   
  {

    minim = min(minim,num[i]);
    //alternative
//    if (min > num[i]  )
//    {
//      min = num[i];
//    }
    
  }


 return minim;

}


int main(){

int size;

cout << " enter the size of arry" << endl;

cin >> size;

int num[100] = { 1,2,3,4,5};

for (int i = 0; i < size; i++)
{

    cin >> num[i];
    
}


cout << " maximum value of given arry is " << getMax(num,size) << endl;
cout << " minimum value of given arry is " << getMin(num,size) << endl;



// predefined function of find maximum is max
// int ans;
 
//  ans = max( 33,44);

// cout  << " ans fo " << ans << endl;
  
}