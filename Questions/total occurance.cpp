#include<iostream>

using namespace std;

int firstOcc(int arr[], int key, int size)
{
	int start=0,end=size-1;
	int mid = start+(end-start)/2;
	int ans=0;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			end = mid-1;
		}
		
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end = mid-1;
		}
		
		mid = start+(end-start)/2;
	}
	return ans;
}

int lastOcc(int arr[], int key, int size)
{
	int start=0,end=size-1;
	int mid = start+(end-start)/2;
	int ans=0;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans = mid;
			start = mid+1;
		}
		
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end = mid-1;
		}
		
		mid = start+(end-start)/2;
	}
	return ans;
}

int main()
{
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	int key;
	cout<<"Enter Element for search Occurance:";
	cin>>key;
	int arr[size];
	cout<<"Enter Array Elements: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	int firstans= firstOcc(arr,key,size);
	
	int lastans= lastOcc(arr,key,size);
	cout<<"Total Occurance is: ";
	int result = (lastans-firstans)+1;
	cout<<result<<endl;
	
	
	
	return 0;
}