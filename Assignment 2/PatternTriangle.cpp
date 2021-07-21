#include<iostream>
using namespace std;

int main() {
	int row;
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row-i;j++)
		{
			cout<<"	";
		}
		int start=i;
		for(int j=1;j<=i;j++)
		{
			cout<<start<<"	";
			++start;
		}
		int end=2*i-2;
		for(int j=1;j<=i-1;j++)
		{
			cout<<end<<"	";
			--end;
		}
		cout<<endl;
	}
	return 0;
}