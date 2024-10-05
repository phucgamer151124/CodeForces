#include <iostream>
using namespace std;
 
int main(){
    int n; cin >> n;
    if(n % 2 == 0 && n >= 4 && n > 0 && n < 101){
        cout << "YES";
    }else{
        cout << "NO";
    }
}