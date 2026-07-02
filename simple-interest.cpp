#include<iostream>
using namespace std;

int main(){
    int principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
    float simple_interest = (principal * rate * time) / 100;
    cout << "Simple Interest is: " << simple_interest << endl;
    return 0;
}