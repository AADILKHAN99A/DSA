#include<iostream>

using namespace std;

int peakElement(int arr[],int size)
{
	int start =0, end = size-1;
	int mid = start+(end-start)/2;
	int ans=-1;
	while(start<end)
	{
		if(arr[mid]<arr[mid+1])
		{
			ans=arr[mid+1];
			start=mid+1;	
		}
		else if(arr[mid]<arr[mid-1])
		{
			ans = arr[mid-1];
			end = mid-1;
		}
		else
		{
			ans =arr[mid];
			end=mid;
		}
		mid=start +(end-start)/2;
	}
	return ans;
}

int main()
{
	int arr[]={1,2,3,4,5,3,1,0};
	int size = sizeof(arr)/sizeof(arr[0]);
//	cout<<size<<endl;
	
	int result=peakElement(arr,size);
	cout<<result<<endl;
	
	return 0;
}