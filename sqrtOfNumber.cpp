#include<bits/stdc++.h>
using namespace std;

int sqrt(int num){
	int left = 1, right = num;
	int ans = -1;

	while(left <= right){
		int mid = (right + left) / 2;
		if(mid*mid == num)return mid;
		else if(mid*mid > num){
			right = mid - 1;
		}else{
			ans = mid;
			left = mid + 1;
		}
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	cout<<sqrt(num)<<endl;
	return 0;
}