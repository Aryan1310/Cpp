#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num=0,n,last=0;
	cin>>n;
	for (int i =0;i<10 && n;i++)
	{
		last = n%10;
		if(last == 1)
		{
			num = num + pow(2,i);
		}
		n/=10;
	}
	cout<<num;
	return 0;
}