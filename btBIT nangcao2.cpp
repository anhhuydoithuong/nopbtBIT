#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[], long long &n){
	cin >> n;
	for (long long i=0;i<n;i++){
		cin >> a[i];
	}
}
int demuoc(long long x){
	if (x<=0)return 0;
	if (x==1) return 1;
	long long souoc=0;
	long long s= (long long)sqrt(x);
	for(long long b=1; b<=s;b++){
		if (x%b==0){
			souoc++;
			if(b != (x/b)){
				souoc++;
			}
		}
	}
	return souoc;
}
void xuat(long long a[], long long n){
	for (long long i=0;i<n;i++){
	cout << demuoc(a[i]) << endl;
    }
}

int main(){
long long a[106], n;
nhap(a,n);
xuat(a,n);
}

