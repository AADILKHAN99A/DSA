#include<iostream>

using namespace std;

int pivotValue(int arr[],int size)
{
	int start = 0, end = size-1;
	int mid = start +(end-start)/2;
	while(start<end)
	{
		if(arr[mid]>=arr[0])
		{
			start = mid+1;
		}
		else{
			end = mid;
		}
		mid = start +(end-start)/2;
	}
	
	return start;
}

int main()
{
	int arr[] = {4,0,1,2,3};  //Sorted rotated array
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int result = pivotValue(arr,size);
	
	cout<<result<<endl;
	
	
	
	return 0;
}