#include<iostream>

using namespace std;

int firstOcc(int arr[],int key, int size)
{
	int start=0,end=size-1;
	int mid = start+(end-start)/2;
	int ans=-1;
	while(start<end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		
		mid=start +(end-start)/2;
	}
	
	return ans;
	
}

int lastOcc(int arr[],int key, int size)
{
	int start=0, end=size-1;
	int mid=start +(end-start)/2;
	int ans=-1;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;	
		}
		else if(arr[mid]>key)
		{
			end =mid-1;
		}
		
		else
		{
			start=mid+1;
		}
			mid = start+(end-start)/2;
					
	}	
		return ans;
}


int main()
{
	int size,key;
	cin>>size;
	cin>>key;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		
	}
	
	int first = firstOcc(arr,key,size);
	int last = lastOcc(arr,key,size);
	cout<<first<<endl;
	cout<<last<<endl;
	
	return 0;
}