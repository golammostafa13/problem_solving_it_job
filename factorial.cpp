#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin>>num;

	long long fact = 1;

	for(int i = 1; i<=num; i++){
		fact = i * fact;
	}
	cout<<fact<<endl;
	return 0;
}