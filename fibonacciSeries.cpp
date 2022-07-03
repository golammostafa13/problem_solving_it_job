#include <bits/stdc++.h>
using namespace std;


void solution(int num){
	if(num == 1)cout<<0<<endl;
	else if(num == 2)cout<<1<<endl;

	int first = 0, second = 1;
	int fibo;
	for(int i = 3; i<=num; i++){
		fibo = first + second;
		first = second;
		second = fibo;
	}
	cout<<fibo<<endl;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	solution(n);
	return 0;
}
// 0 1 1 2 3