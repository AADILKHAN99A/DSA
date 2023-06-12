#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

bool cowsAllocation(vector <int> &stalls, int mid, int cows)
{
//	cout<<"mid in cowsAllocation:"<<mid<<endl;
	int cowsCount=1;
	int lastPos = stalls[0];
	
	for(int i =0;i<stalls.size();i++)
	{
		if(stalls[i]-lastPos>=mid)
		{
			cowsCount++;
			if(cowsCount==cows)
			{
				return true;
			}
			lastPos = stalls[i];
		}
		
	}
	
	return false;
	
}

int binarySearch(vector <int> &stalls, int max,int cows)
{
	
	int start = 0, end = max;
	int mid = start +(end-start)/2;
	int ans = -1;
//	cout<<"mid at first"<<mid<<endl;
	while(start<=end)
	{ 
//	cout<<"mid in while loop:"<<mid<<endl;
		if(cowsAllocation(stalls,mid,cows))
		{
			start=mid+1;
			ans =mid;
		}
		else
		{
			end = mid-1;
		}
		
		mid = start +(end -start)/2;
	}
	
	return ans;
}


int main()
{
	vector <int> stalls{4,2,1,3,6};
	 
	 sort(stalls.begin(),stalls.end());  //for sorting 
	 
	int cows=2;
	
	// for find largest element in stall vector
	
	int maxi=-1;
	
	for(int i =0 ; i<stalls.size();i++)
	{
		maxi = max(maxi,stalls[i]);
	}
	
//			or you can use this method also to find largest element

//	int max = stalls[0];
//	
//	for(int i =1;i<size;i++)
//	{
//		if(max<stalls[i])
//		{
//			max = stalls[i];
//		}
//	}
	
		
	// for find minimum element in stalls vector
	
//	int min = stalls[0];
//	
//	for(int i =1;i<stalls.size();i++)
//	{
//		if(min>stalls[i])
//		{
//			min = stalls[i];
//		}
//	}

	

	int Result = binarySearch(stalls,maxi,cows);
	
	cout<<Result;
	
	return 0;
} 