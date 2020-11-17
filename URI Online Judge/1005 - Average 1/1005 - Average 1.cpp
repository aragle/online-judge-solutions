#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a,b,MEDIA=0;
    cin >> a >> b;
    MEDIA = (a * 3.5 + b * 7.5)/ (3.5+7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << MEDIA << endl;
}
