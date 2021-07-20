#include<iostream>
using namespace std;

int main() {
	int N1,N2;
	cin>>N1;
	cin>>N2;
	for(int n=1;N1>0;n++)
	{
		int a=3*n+2;
		if(a%N2!=0)
		{
			cout<<a<<endl;
			N1--;
		}
	}
	return 0;
}