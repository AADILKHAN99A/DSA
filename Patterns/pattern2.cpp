#include<iostream>

using namespace std;

int main()
{	int n;
	cout<<"Enter number in range 1 to 10:  ";
	cin>>n;
	int i =1;
	int count = 1;
	while(i<=n)
	{	
		int j=1;
		while(j<=n)
		{
			cout<<count<<" ";
			count++;
			
			j++;
		}
		cout<<"\n";
		i++;
	}
	
	return 0;
}

