#include <bits/stdc++.h>
using namespace std;

void reverseString(string str){
	int i = 0, j = str.size()-1;
	while(i<j){
		swap(str[i], str[j]);
		i++, j--;
	}
	cout<<str<<endl;
}

int main(){
	string str;
	cin>>str;
	reverseString(str);
}