#include<iostream>

using namespace std;

int linearsearch(int a[],int n)
{


	for(int i =0; i<sizeof(a);i++)
	{
		if(n==a[i])
		{
			return 1;
		}
		
	}
}

int main()
{
	int arr[5]= {1,2,5,7,9};
	int key;
	cout<<"Enter Search Element: ";
	cin>>key;
	cout<<sizeof(arr);
	int result = linearsearch(arr,key);
	if(result==1)
	{
		cout<<"Element found!";
	}
	else
	{
		cout<<"Element not found";
	}
	
	
	return 0;
}
