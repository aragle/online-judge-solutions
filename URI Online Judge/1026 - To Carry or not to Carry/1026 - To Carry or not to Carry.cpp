#include <iostream>
using namespace std;

int main(){
    unsigned long int x, y;

    while(cin >> x >> y){
        cout << (x ^ y) << endl;
    }
    return 0;
}
