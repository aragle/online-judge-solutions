#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a,b,x;

    while(cin >> a >> b){
        if(a == 1){
            x = 4 * b;
        }else if(a == 2){
            x = 4.5 * b;
        }else if(a == 3){
            x = 5 * b;
        }else if(a == 4){
            x = 2 * b;
        }else
            x = 1.5 * b;
        cout << "Total: R$ " << fixed << setprecision(2) << x << endl;
    }
}
