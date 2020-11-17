#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a,b,c,MEDIA=0;
    cin >> a >> b >> c;
    MEDIA = (a * 2 + b * 3 + c * 5)/ (2+3+5);
    cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl;
}
