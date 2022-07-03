#include <bits/stdc++.h>
using namespace std;

void primeCheck(int num){
	bool prime = true;

	for(int i = 2; i < num; i++){
		if(num%i == 0){
			prime = false;
			break;
		}
	}
	if(prime)cout<<num<<" is prime number"<<endl;
	else cout<<num<<" is not a prime number"<<endl;
}

int main(){

	int num;
	cin>>num;
	primeCheck(num);

	return 0;
}