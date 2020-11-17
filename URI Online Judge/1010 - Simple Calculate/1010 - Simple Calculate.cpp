#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a,b,c,d,e,f,T1,T2,TOTAL;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    T1 = b*c;
    T2 = e*f;
    TOTAL = T1 + T2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << TOTAL << endl;
}
