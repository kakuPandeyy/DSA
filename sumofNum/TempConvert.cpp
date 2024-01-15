#include<iostream>
using namespace std;

double fehreToCels( double x);

double celsToFehre( double x);




double fehreToCels( double x){
    //(32°F − 32) × 5/9 = 0°C

 double result;

     result = x - 32*5/9;

    return result;
}

double celsToFehre( double x){
 

 double result;

  result =  x*9/5+32;

  return result;

}


int main(){
   
   char cc;
   double fehrenheit;
    double celsius;
    double convented;
   cout << " press  F  to convent fehrenheit to celsius " << endl;
     cout << " press  C  to convent celsius to fehrenheit " << endl;

     cin >> cc;
     if ( cc=='f' || cc=='F' )
     {
         cout << " enter the value in fehrenheit  " << endl;
         cin >> fehrenheit;
         convented = fehreToCels(fehrenheit);
        cout << "  convertion of  fehrenheit to celsius is :  "  << convented << endl;
    
     }
     else if (cc=='c' || cc=='C'){
        cout << " enter the value in celsius  " << endl;
         cin >> celsius;
          convented = celsToFehre(celsius);
        cout << "  convertion of  celsius to fehrenheit is :  "  << convented << endl;
         
     }else {
             cout << cc << endl;
          cout << " error && some thing going wrong &&  try to choose between c or f  " << endl;
     }
     

}


//(32°F − 32) × 5/9 = 0°C

//Fehrenheit to celsius
//celsius to Fehrenheit
