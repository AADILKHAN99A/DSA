#include<iostream>

using namespace std;

int main()
{	int n;
	cout<<"Enter number in range 1 to 10:";
	cin>>n;
	int i =1;
	
	while(i<=n)
	{	
		int j=1;
	
		while(j<=i)
		{
			cout<<i-j+1<<" ";
		
			j++;
		}
		cout<<"\n";
		i++;
	}
	
	return 0;
}

