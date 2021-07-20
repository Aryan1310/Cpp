#include<iostream>
using namespace std;

int main() {
	int Fmin,Fmax,step,c,f;
	cin >> Fmin;
	cin >> Fmax;
	cin >> step;
	while(Fmin<=Fmax)
	{
		c=0.555555555556*(Fmin-32);
		cout<<Fmin<<" "<<c<<endl;
		Fmin+=step;
	}
	return 0;
}