#include<iostream>
using namespace std;

int main() {
	int sum=0,num ;
	for(int i=0;i<1000;i++)
	{
		cin>>num;
		sum+=num;
		if(sum<0)
		break;
		else
		cout<<num<<endl;
	}
	return 0;
}