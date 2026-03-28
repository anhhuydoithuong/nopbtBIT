#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int &n){
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap mang: ";
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
}
void xuli(int a[], int n){
	for (int i=0; i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]< a[j]){
                swap (a[i],a[j]);
			}
		}
	}
}
void xuat(int a[], int n){
	for(int i=0;i<n;i++) cout << a[i] << " ";
}
int main(){
int a[1000],n;
nhap(a,n);
xuli(a,n);
xuat(a,n);
}

