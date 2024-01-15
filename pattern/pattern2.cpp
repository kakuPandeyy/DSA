#include<iostream>
using namespace std;

void pattern3(int x,bool rev);

void pattern4(int x );

void startPattern(int x,char t);


void  alphabPatt(int x , char t);

void  alphaPt2(int n, char x , char t);



int main(){
   
   int rowsOfPattern;
   bool reversed;
   bool test=false;
   char typeOfPattern;
   char patternCharacter;

cout << " enter of row  pattern " << endl;
   

   cin >> rowsOfPattern;

  
cout << " enter of character pattern any  " << endl;

  cin >> patternCharacter;

  cout << " enter of type of pattern a,b,c,d  " << endl;

  cin >> typeOfPattern;

   alphaPt2(rowsOfPattern,patternCharacter,typeOfPattern);

}






void pattern4(int x ){

int i = 1;
int count = 1;

while (i<=x)
{
    int j=1;
    while (j<=x)
    {
      cout << " " <<  count;
     
     count++;
    
    j++;

    }
  cout<<endl;
   i++;
  
}



}

void pattern3(int x,bool rev ){

    int i=1;

    while (i<=x)
    {
        int j=1;
        while (j<=x)
        {

          rev? cout << " " << x-j+1 :cout << " " << j ;
           j++;
        }
        cout<<endl;
       i++;
    } 

}

 void startPattern(int x,char t){
    
         int i = 1;
         int row;
      int countNormal =1;
   while ( i<=x)
   {
    int j =1;
    row =i;
    int countC =1;
    while (j<=i)
    {
        switch (t)
        {
        case 'a':
              cout << "* ";
            break;
         case 'b':
            cout << " " << i;
            break;    
         case 'c':
            cout << " " << countC;
            countC++;
            break; 
         case 'd':
            cout << " " << row;
            row++;
            break;
        case 'e':
            cout << " " << countNormal;
            countNormal++;
            break;
         case 'f':
            cout << " " << i-countC+1;
            countC++;
            break;
        default:
            break;
        }
    
      j++;
    }
    cout<<endl;
      i++;
  
    }
   }

        
void  alphabPatt(int x,char t){
  if (t=='a')
  {
int i=1;

while (i<=x)
{
    int j=1;
    while (j<=x)
    {
      char ch;
      ch = ('A'+i-1);
      cout << ch << endl;
      j++;
    }
     cout << endl;
i++;
} 
  }
  else if (t=='b')
  {
    int i=1;

while (i<=x)
{
    int j=1;
    while (j<=x)
    {
      char ch;
      ch = ('A'+i+j-2);
      cout << ch ;
      j++;
    }
      cout << endl;
i++;
  }

}

 else if (t=='c'){
    int i=1;
    while (i<=x)
    {
        int j=1;
        while (j<=i)
        {
            char ch;
            ch = ('A'+i-1) ;   
      cout << ch;
       j++;
        }
        cout<< endl;
      i++;  
    }
 }
 else if (t=='d')
 {
      int i=1;
    while (i<=x)
    {
        int j=1;
        while (j<=i)
        {
            char ch;
            ch = ('A'+i+j-2) ;   
      cout << ch;
       j++;
        }
        cout<< endl;
      i++;  
    }
 }
  else if (t=='e')
 {
      int i=1;
    while (i<=x)
    {
        int j=1;
        while (j<=i)
        {
            char ch;
            ch = ('D'+j-i) ;   
      cout << ch;
       j++;
        }
        cout<< endl;
      i++;  
    }
 }
 else if (t=='f')
 {
      int i=1;
    while (i<=x)
    {
        int j=1;
        while (j<=i)
        {
            char ch;
            ch = ('D'-j+1);   
      cout << ch;
       j++;
        }
        cout<< endl;
      i++;  
    }
 }else{
  cout <<  " not exist this type" << endl;
 }


}

void  alphaPt2(int n, char x , char t){

if (t=='a')
{
      int row=1;

    while (row<=n)
    {
      int colm=1;
      char startchar = ('A' + n -row+1);
      while (colm<=row)
      {
        cout << startchar;
         colm++;
         startchar++;
      }
       cout << endl;
      row++;
    } 
}
else if (t=='b')
{
      int row=1;

    while (row<=n)
    {
      int colm=1;
      char startchar = (x-row+1);
      while (colm<=row)
      {
        cout << startchar;
         colm++;
         startchar++;
      }
       cout << endl;
      row++;
    } 
}
else if (t=='c')
{
      int row=1;

    while (row<=n)
    {
      int colm=1;
      char startchar = ('A'+row-1);
      while (colm<=n)
      {
        cout << startchar;
         colm++;
         startchar++;
      }
       cout << endl;
      row++;
    } 
}

}
