#include<iostream>

using namespace std;

bool bookAllocation(int arr[], int mid, int size, int students)
{
	int studentCount=1;
	int pageSum = 0;
	
	for(int i =0;i<size;i++)
	{
		if(pageSum+arr[i]<mid)
		{
			pageSum+=arr[i];
		}
		else
		{
			studentCount++;
				if(studentCount>students || arr[i]>mid)
				{
					return false;
				}
			
			pageSum = arr[i];
		}
	}
	
	return true;
	
}


int binarySearch(int arr, int sum, int students,int size)
{
	int start = 0, end = sum-1;
	int mid = start +(end-start)/2;
	int ans = -1;
	while(start<=end)
	{
		if(bookAllocation(arr,mid,size,students))
		{
			end=mid-1;
			ans =mid;
		}
		else
		{
			start = mid+1;
		}
		
		mid = start +(end -start)/2;
	}
	
	return ans
}


int main()
{
	int arr[]={10,20,30,40};
	 
	int size = sizeof(arr)/sizeof(arr[0]);

	int sum=0;
	int students=2;
	
	for(int i=0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	
	int Result = binarySearch(arr,sum,students,size);
	

	
	return 0;
} 