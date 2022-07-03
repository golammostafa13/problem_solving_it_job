#include <bits/stdc++.h>
using namespace std;

void palindromeCheck(string word){
	bool palindrome = true;

	int begin = 0, end = word.size() - 1;
	
	while(begin < end){
		if(word[begin] != word[end]){
			palindrome = false;
			break;
		}else{
			begin++;
			end--;
		}
	}

	if(palindrome)cout<<word<<" is a palindrome"<<endl;
	else cout<<word<<" is not a palindrome"<<endl;
}

int main(int argc, char const *argv[])
{
	string word;
	cin>>word;
	palindromeCheck(word);
	return 0;
}