#include <iostream>
using namespace std;
int n;
int a[105];
int main(){
	cin >> n;
	for( int i = 0; i < n; i++){
		cin >> a[i];
	}
	int minV = 1e9;
	for ( int i = 0; i < n; i++){
		if(a[i] < minV) minV = a[i];
		}
			int minV2 = 1e9;
			for (int i = 0; i < n; i++){
				if( a[i] < minV2 && a[i] > minV) minV2 = a[i];
			}
			for ( int i = 0; i < n; i++){
				if ( minV2 == a[i]) cout << i + 1<< " ";
				}
}
