#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *ar, int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(ar[i] > ar[j]){
				swap(ar[i], ar[j]);
			}
		}
	}
	
}

int main(int argc, char const *argv[])
{
	int ar[5] = {33, 22, 11, 00, 44};
	bubble_sort(ar, 5);

	for (int i = 0; i < 5; ++i)
	{
		cout<<ar[i]<<" ";
	}cout<<endl;
	return 0;
}