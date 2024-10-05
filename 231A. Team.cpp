#include <iostream>
using namespace std;

int main(){
	int n, dem = 0; cin >> n;
	while(n){
		int a, b, c; cin >> a >> b >> c;
		if(a + b == 2 || b + c == 2 || a + c == 2){
			++dem;
		}
		--n;
	}
	cout << dem;
}