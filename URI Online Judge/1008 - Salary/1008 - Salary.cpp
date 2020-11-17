#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n,h;
    float s,SALARY;
    cin >> n >> h >> s;
    SALARY = (float) h * s;
    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << SALARY << endl;
}
