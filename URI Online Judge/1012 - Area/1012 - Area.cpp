#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a1,a2,a3,a4,a5,a,b,c;
    cin >> a >> b >> c;
    a1 = (1/2.0)*a*c;
    a2 = 3.14159*c*c;
    a3 = (1/2.0)*(a+b)*c;
    a4 = b*b;
    a5 = a*b;
    cout << "TRIANGULO: " << fixed << setprecision(3) << a1 << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << a2 << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << a3 << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << a4 << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << a5 << endl;
}
