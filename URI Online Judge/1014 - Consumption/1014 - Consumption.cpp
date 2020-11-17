#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a,b,con;
    cin >> a >> b;
    con = a/b;
    cout << fixed << setprecision(3) << con << " km/l" << endl;
}
