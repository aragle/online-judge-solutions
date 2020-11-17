#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double a,b,c,d,Dist;
    cin >> a >> b >> c >> d;
    Dist = sqrt((c-a)*(c-a)+(d-b)*(d-b));
    cout << fixed << setprecision(4) << Dist << endl;
}
