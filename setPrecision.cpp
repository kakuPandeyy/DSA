#include<iostream>
#include <iomanip>
using namespace std;



int main(){



    stringstream ss;
    ss<< setprecision(3) << 33.244444;
    string result = ss.str();
    cout << result << endl;
}