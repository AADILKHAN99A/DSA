#include<iostream>

using namespace std;

void swap( int arr[], int minIndex, int i)
{
	int temp=arr[minIndex];
	arr[minIndex]=arr[i];
	arr[i]=temp;
	
}

int main()
{
	int arr[]={42,32,11,22};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for(int i =0;i<size-1;i++)
	{
		int minIndex = i;
		
		for(int j =i+1;j<size;j++)
		{
			if(arr[j]<arr[minIndex])
			{
				
				minIndex = j;
				 
			}
		}
			swap(arr,minIndex,i);
	for(int i =0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	}
	
		for(int i =0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}