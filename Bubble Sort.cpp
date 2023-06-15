#include<iostream>

using namespace std;

void swap( int arr[], int i, int newi)
{
	int temp=arr[newi];
	arr[newi]=arr[i];
	arr[i]=temp;
	
}

int main()
{
	int arr[]={10,1,7,6,14,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	bool swapped = false;
	
	for(int round =1; round<size; round++)
	{
	//  for round 1 to n-1
		
		for(int i=0;i<size-round;i++)
		{
			if(arr[i]>arr[i+1])
			{
				swap(arr,i,i+1);
				swapped = true;
			}
	
		}
		if(swapped == false)
		{
			break;
		}
	}
	
	for(int i = 0; i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}