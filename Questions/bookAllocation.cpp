#include<iostream>

using namespace std;

bool bookAllocation(int arr[], int mid, int size, int students)
{
//	cout<<"mid in bookAllocation:"<<mid<<endl;
	int studentCount=1;
	int pageSum = 0;
	
	for(int i =0;i<size;i++)
	{
		if(pageSum+arr[i]<=mid)
		{
			pageSum+=arr[i];
//			cout<<pageSum<<endl;
//			cout<<"First Student pagesum"<<pageSum<<endl; 
		}
		else
		{
			studentCount++;
//			cout<<"Student Second Start: "<<endl;
				if(studentCount>students || arr[i]>mid)
				{
//					cout<<"condition false"<<endl;
					return false;
					
				}
//			cout<<"second student pagesum"<<endl;
			pageSum = arr[i];
//			cout<<pageSum<<endl;
		}
	}
	
	return true;
	
}

int binarySearch(int arr[], int sum, int students,int size)
{
	
	int start = 0, end = sum;
	int mid = start +(end-start)/2;
	int ans = -1;
//	cout<<"mid at first"<<mid<<endl;
	while(start<=end)
	{ 
//	cout<<"mid in while loop:"<<mid<<endl;
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
	
	return ans;
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
	
	cout<<Result;
	
	return 0;
} 