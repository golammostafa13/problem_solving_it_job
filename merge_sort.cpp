#include <bits/stdc++.h>
using namespace std;

void merge(int *ar, int left, int mid, int right){
	int lf_size = mid - left + 1;
	int rt_size = right - mid;

	auto *leftArray = new int[lf_size];
	auto *rightArray = new int[rt_size];

	int lf = 0, rt = 0, k = left;

	for (int i = 0; i < lf_size; ++i)
	{
		leftArray[i] = ar[left+i];
	}
	for(int i = 0; i < rt_size; i++){
		rightArray[i] = ar[mid+i+1]; 
	}

	while(lf < lf_size && rt < rt_size){
		if(leftArray[lf] <= rightArray[rt]){
			ar[k] = leftArray[lf];
			lf++;
		}else{
			ar[k] = rightArray[rt];
			rt++;
		}
		k++;
	}

	while(lf<lf_size){
		ar[k] = leftArray[lf];
		lf++; k++;
	}
	while(rt < rt_size){
		ar[k] = rightArray[rt];
		rt++; k++;
	}
}

void merge_sort(int *ar, int left, int right){
	if(left >= right)return;

	int mid = (right + left) / 2;

	merge_sort(ar, left, mid);
	merge_sort(ar, mid+1, right);
	merge(ar, left, mid, right);
}

int main(int argc, char const *argv[])
{
	int ar[5] = {33, 22, 11, 00, 44};
	merge_sort(ar, 0, 5);

	for (int i = 0; i < 5; ++i)
	{
		cout<<ar[i]<<" ";
	}cout<<endl;
	return 0;
}