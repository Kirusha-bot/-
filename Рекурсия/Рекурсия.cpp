#include <iostream>
#include  <cmath>
using namespace std;

double R(int n, int x)
{
	if (n == 0) return x;
	return pow(x, 4 * n + 1) / (4 * n + 1) + R(n - 1, x);
}

int main()
{
	int n, x;
	cin >> x >> n;
	cout << R(n, x);
	return 0;
}