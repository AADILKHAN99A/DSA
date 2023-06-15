#include<iostream>

using namespace std;

int main()
{
	int arr[]={10,1,7,4,8,2,11};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for(int round =1;round<size;round++)
	{
		int temp = arr[round];
		int j =round-1;             //we initialize it here because "there" we cant use 'j' if we initialized in for loop (it give out of scope error)
		for(;j>=0;j--)
		{
			if(arr[j]>temp)
			{
				// shift
				arr[j+1]=arr[j];
			}
			
			else
			{
				//   stop
				break;
			}
			
		}
		arr[j+1]= temp;     // there
	}
	
	for(int i = 0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}