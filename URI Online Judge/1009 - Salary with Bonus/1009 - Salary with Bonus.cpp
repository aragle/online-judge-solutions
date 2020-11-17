#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    string fname;
    double fs,ts,ps,TOTAL;
    cin >> fname >> fs >> ts;
    ps = (ts*15)/100;
    TOTAL = fs + ps;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << TOTAL << endl;
}
