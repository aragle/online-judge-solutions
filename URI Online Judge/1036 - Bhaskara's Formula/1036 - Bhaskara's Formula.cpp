#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
   double A,B,C,D,E;
   cin >> A >> B >> C;
   D = B*B-4*A*C;
   E = sqrt(D);
   if( D>0 && A!=0){
        cout << "R1 = " << fixed << setprecision(5) << (-B+E)/(2*A) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (-B-E)/(2*A) << endl;
   }
   else{
        cout << "Impossivel calcular" << endl;
   }
}
