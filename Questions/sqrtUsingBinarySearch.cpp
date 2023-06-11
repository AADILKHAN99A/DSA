#include<iostream>

using namespace std;

long long int sqrtInteger(int arr[],int num)
{
	int start=0, end = num;
	long long int mid = start +(end - start)/2;

	int ans=-1;
	while(start<=end)
		{
			if((arr[mid]*arr[mid])==num)
			{
				return mid;
			}
			
			else if((arr[mid]*arr[mid])<num)
			{
				ans = mid;
				start = mid+1;
			}
			
			else
			{
				end = mid-1;
			}	
			mid = start + (end - start)/2;
		}
	return ans;
}

float sqrtFloat(long long int tempSqrt,int precision,int num)
{
	
	double factor = 1;
	double ans=tempSqrt;
	
	for(int i =0;i<precision;i++)
	{
		factor = factor/10;
		for(double j=ans;j*j<num;j=j+factor)
		{
			ans =j;
		}
	}
	return ans;
}

int main()
{
	int num;
	cout<<"Enter Number"<<endl;
	cin>>num;
	int arr[num];
	int i =0;
	
	do{
		arr[i]=i;
		i++;
	  }while(i<=num);

	
	long long int tempSqrt = sqrtInteger(arr,num);
	
	double fullSqrt = sqrtFloat(tempSqrt,3,num);
	
	cout<<"Square root is : "<<fullSqrt;
	
			
	
	
	return 0;
}