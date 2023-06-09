#include<iostream>

using namespace std;

int linearsearch(int a[],int n,int size)
{

	for(int i =0; i<size;i++)
	{
		if(n==a[i])
		{	
			
			
			return i;
		}
		
	}
	return -1;
	
		
}

int main()
{
	int arr[]= {1,2,5,7,9,6,4,5,3};
	
	int key;
	cout<<"Enter Search Element: ";
	cin>>key;
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int result = linearsearch(arr,key,size);
	
	if(result==-1)
	{
		cout<<"Element is not found"<<endl;
	}
	else
	{
		cout<<"Element is found at position: "<<result+1;
	}
	
	
	return 0;
}
