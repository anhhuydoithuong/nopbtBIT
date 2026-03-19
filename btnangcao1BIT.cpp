#include <iostream>

using namespace std;

int main(){
int n;
int a[105];
int min1 = 1e9, min2 = 1e9;
cin >> n;
	for ( int i = 0; i < n; i++) cin >> a[i];
	for ( int i = 0; i < n; i++) if ( a[i] < min1 ) min1 = a[i];
    for ( int i = 0; i < n; i++) if ( a[i] < min2 && a[i] > min1) min2 = a[i];
	for ( int i = 0; i < n; i++) if ( min2 == a[i] ) cout << i + 1 << " ";
}
