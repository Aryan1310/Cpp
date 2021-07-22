#include<iostream>
using namespace std;
int main() {
	int n,k=0;
	cin>>n;
	int prev=n/2,next=n/2+2,mid=n/2+1;
	for (int i=1;i<=n;i++)
	{
		if(i<=mid)
		k++;
		else
		k--;
		for(int j=1;j<=n;j++)
		{
			if (j<=next-k || j>=prev+k)
			{
				cout<<"*	";
			}
			else
			cout<<"	";
		}
		cout<<endl;
	}
	return 0;
}