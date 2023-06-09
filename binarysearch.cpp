#include<iostream>

using namespace std;

int binarysearch(int arr[],int key, int size) {
	int start = 0, end=size-1;
	int mid= start + (end-start)/2;  //because if you take (start+end)/2  then it soemtimes go beyond the range of integer
	
	while(start<=end) {
		if(arr[mid]==key) {
			return mid;
		}

		else  if(key>arr[mid]) {
			start=mid+1;
		}

		else {
			end=mid-1;
		}


		mid= start + (end-start)/2;
	}
	return -1;
}


int main() {
	int even[]= {1,4,6,8,9,10};
	int odd[]={1,3,5,6,9};
	int key;
	cout<<"Enter Element: ";
	cin>>key;
	int input;
	cout<<"1. Even Array"<<endl;
	cout<<"2. Odd Array"<<endl;
	cin>>input;
	
	
	int result;
	if(input ==1)
	{
		int size = sizeof(even)/sizeof(even[0]);
		result =binarysearch(even,key,size);
	}
	else if(input ==2)
	{
		int size = sizeof(odd)/sizeof(odd[0]);
		result = binarysearch(odd,key,size);
	}
	else
	{
		cout<<"Wrong Input";
		goto label;
	}

	if(result==-1) {
		cout<<"Element not found";
	} else {
		cout<<"Element is found at position:"<<result+1;
	}
	label:
	

	return 0;
}