#include <iostream>
using namespace std;

long long int square(long int x)
{
    return static_cast<long long int>(x) * x;
}
int main()
{    
    long int n;
    while (cin >> n) {
        if( n <= 2 ) {
            cout << "-1\n";
        }
        else {
            if ( n % 2 == 0 ) {
                long long int q = square(n / 2);
                cout << (q - 1) << " " << (q + 1) << '\n';
            }
            else {
                long long int q = square(n);
                cout << (q - 1)/2 << " " << (q + 1)/2 << '\n';
            }
        }
    }
}