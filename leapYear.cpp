#include<bits/stdc++.h>
using namespace std;

void solution(int year){
	if(year % 400 == 0){
		cout<<year<<" is a Leap year"<<endl;
	}else if((year % 4 == 0) && (year % 100 != 0)){
		cout<<year<<" is a Leap year"<<endl;
	}else{
		cout<<year<<" is not a Leap year"<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int year;
	cin>>year;
	solution(year);
	return 0;
}

