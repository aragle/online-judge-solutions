#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    int a,b,c,mab,mab2;
    cin >> a >> b >> c;
    mab = (a+b+abs(a-b))/2;
    mab2 = (mab+c+abs(mab-c))/2;
    cout << fixed << setprecision(3) << mab2 << " eh o maior" << endl;
}
