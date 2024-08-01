#include<iostream>

using namespace std;

int main() {
    // if(num>0){
    //     cout<< " number is positive " <<endl;
    // }else{
    //     cout<< " number is negative " <<endl;
    // }
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
    int j = 1;
        while(j<=n){
            cout << "*" ;
            j++;
        }
        cout << endl;
        i++;
    };
    
}