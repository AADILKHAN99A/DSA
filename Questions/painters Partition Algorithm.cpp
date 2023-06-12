#include<iostream>

using namespace std;

bool painterAllocation(int arr[], int mid, int size, int painters)
{
//	cout<<"mid in painterAllocation:"<<mid<<endl;
	int painterCount=1;
	int boardSum = 0;
	
	for(int i =0;i<size;i++)
	{
		if(boardSum+arr[i]<=mid)
		{
			boardSum+=arr[i];
//			cout<<boardSum<<endl;
//			cout<<"First painter boardSum"<<boardSum<<endl; 
		}
		else
		{
			painterCount++;
//			cout<<"painter Second Start: "<<endl;
				if(painterCount>painters || arr[i]>mid)
				{
//					cout<<"condition false"<<endl;
					return false;
					
				}
//			cout<<"second painter boardSum"<<endl;
			boardSum = arr[i];
//			cout<<boardSum<<endl;
		}
	}
	
	return true;
	
}

int binarySearch(int arr[], int sum, int painters,int size)
{
	
	int start = 0, end = sum;
	int mid = start +(end-start)/2;
	int ans = -1;
//	cout<<"mid at first"<<mid<<endl;
	while(start<=end)
	{ 
//	cout<<"mid in while loop:"<<mid<<endl;
		if(painterAllocation(arr,mid,size,painters))
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
	
	return ans;
}


int main()
{
	int arr[]={5,5,5,5};
	 
	int size = sizeof(arr)/sizeof(arr[0]);

	int sum=0;
	int painters=2;
	
	for(int i=0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	
	int Result = binarySearch(arr,sum,painters,size);
	
	cout<<Result;
	
	return 0;
} 