#include <bits/stdc++.h>
using namespace std;
void swapping(double a, double b){
	a = a + b; // 11 = 5 + 6
	b = a - b; // 5 = 11 - 6
	a = a - b; // 6 = 11 - 5

	cout<<a<<" "<<b<<endl;
}

int main(int argc, char const *argv[])
{
	double a, b;
	cin>>a>>b;
	swapping(a, b);
	return 0;
}