#include<iostream>
using namespace std;

int main() {
    int c,pr,ne,f=0;
    cin>>c;
	cin>>pr;
	c--;
    while(c)
    {
        cin>>ne;
		if(pr==ne)
		{
			cout<<"false";
			return 0;
		}
        if(ne < pr && f == 0)
        {
            pr = ne;
			c--;
            continue;
        }
		else if(ne < pr && f == 1)
		{
			cout<<"false";
			return 0;
		}
		else if(ne > pr)
		{
			f=1;
		}
        pr = ne;
		c--;            
    }
    cout<<"true";
    return 0;
}