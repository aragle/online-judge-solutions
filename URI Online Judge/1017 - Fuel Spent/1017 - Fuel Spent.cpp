#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a,b,L;
    cin >> a >> b;
    L = (a*b)/12;
    cout << fixed << setprecision(3) << L << endl;
}
