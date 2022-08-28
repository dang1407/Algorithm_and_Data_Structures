#include<iostream>
using namespace std;
//Thuật toán Euclid tìm UCLN của 2 số

int GCD_Euclidbean_Algorithm1(int n, int m){
    while(n>0 && m>0){
        if(n>m) n = n%m;
        else m = m%n;
        
    }
    return m+n;
}

int GCD_Euclid_Algorithm2(int n, int m){
    while(m>0 && n>0){
        if(n>m) n = n-m;
        else m = m - n;
    }
    return m+n;
}
int main(){
    cout << "UCLN(15,5): " << GCD_Euclidbean_Algorithm1(15,5) << endl;
    cout << "UCLN(0,21): " << GCD_Euclid_Algorithm2(0,21) << endl;
    cout << "UCLN(37,49): " << GCD_Euclid_Algorithm2(37,49) << endl;
}