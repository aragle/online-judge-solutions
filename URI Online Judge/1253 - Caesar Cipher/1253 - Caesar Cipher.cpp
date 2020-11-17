#include <bits/stdc++.h>
using namespace std;

int main(){

    int testCase,code;
    char value[50];

    cin >> testCase;
    for(int i = 0; i < testCase; i++){
            cin >> value >> code;

            for(int j = 0; j < 50; j++){
                    if(value[j] == '\0'){
                        break;
                    }
                    if((value[j] - code) < 65){
                        printf("%c", (value[j] - code)+ 26);
                    }
                    else{
                        printf("%c", (value[j] - code));
                    }
            }
            printf("\n");
    }
}
