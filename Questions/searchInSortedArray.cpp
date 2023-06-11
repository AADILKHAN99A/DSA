#include<iostream>

using namespace std;

int pivotValue(int arr[], int size)
{
	int start =0, end = size-1;
	int mid = start + (end-start)/2;
	
	while(start<end)
	{
		if(arr[mid]>=arr[0])
		{
			start = mid +1;
		}
		else
		{
			end = mid;
		}
		
		mid = start +(end-start)/2;
	}
	return start;
}

int binarySearch(int arr[],int start,int end,int target)
{
		int mid = start + (end-start)/2;
		
		while(start<=end)
		{
			
			if(arr[mid]==target)
			{
				return mid;
			}
			else if(arr[mid]<target)
			{
				start=mid+1;
			}
			else
			{
				end = mid-1;
			}
			mid = start+(end-start)/2;
		}
		
	return -1;	
}
	

int main()
{
	int target = 4;
	int arr[]={4,5,6,1,2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int pivot = pivotValue(arr,size);
	
	int result;
	if(arr[pivot]<=target && target<=arr[size-1])
	{													//BS on second line
		result = binarySearch(arr,pivot,size-1,target); 

	}
	else
	{													//BS on first line
		result = binarySearch(arr,0,pivot-1,target);

	}
	cout<<result;

	return 0;
}