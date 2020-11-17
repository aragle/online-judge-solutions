#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a,TOTAL;
    cin >> a;
    TOTAL = (4/3.0)*3.14159*a*a*a;
    cout << "VOLUME = " << fixed << setprecision(3) << TOTAL << endl;
}
