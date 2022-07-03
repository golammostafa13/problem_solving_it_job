#include<bits/stdc++.h>
using namespace std;

int method1(int a, int b){
	return a - (-b);
}

int method2(int a, int b){

	while(b){
		unsigned carry = a & b;
		a = a ^ b;
		b = carry << 1;
	}
	return a;
}

// subtraction

int method3(int a, int b){
	while(b){
		unsigned borrow = (~a) & b;
		a = a ^ b;
		b = borrow << 1;
	}
	return a;
}
int main(int argc, char const *argv[])
{
	int a, b;
	cin>>a>>b;
	cout<<method1(a, b)<<endl;
	cout<<method2(a, b)<<endl;
	cout<<method3(a, b)<<endl;
	return 0;
}