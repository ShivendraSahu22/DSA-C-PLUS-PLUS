#include<iostream>
using namespace std;

int main(){
    int n = 4;

    //outer loop for rows
    for (int i = 1; i <= n; i++) {
        //inner loop for columns
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}