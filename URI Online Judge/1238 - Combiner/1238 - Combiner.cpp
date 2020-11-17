#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,a,b;
    char firstString[50];
    char secondString[50];

    scanf("%d",&n);
    for(int i = 0; i < n; i++){
            cin >> firstString >> secondString;
            a = 0;
            b = 0;
            for(int j = 0; j < 50; j++){
                    if(firstString[j] == '\0')
                        a = 1;
                    if(secondString[j] == '\0')
                        b = 1;
                    if(a == 1 && b == 1)
                        break;
                    if(a == 0)
                        cout << firstString[j];
                    if(b == 0)
                        cout << secondString[j];
            }
            cout << endl;
    }
}
