#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif    
}
int main()
{
	init_code();
	int x1, y1, x2, y2, dx, dy, x, xend;
	double m, y, b;
	cout << "Enter starting point(x1, y1): ";
	cin >> x1 >> y1;
	cout << "\nEnter ending point(x2, y2): ";
	cin >> x2 >> y2;
	cout << "\n";
	
	dx = x2-x1;
	dy = y2-y1;
	m = dy/(dx*1.0);
	b = y1-(1.0*m*x1);

	if(dx < 0)
	{
		x = x2;
		y = y2;
		xend = x1;
	}
	else
	{
		x = x1;
		y = y1;
		xend = x2;
	}
	int iteration = 0;
	while(1)
	{
		cout << "step-" << ++iteration << ": " << x << " " << setprecision(3) << y << endl;
		if(x == xend) break;
		x = x+1;
		y = (1.0*m*x) + b;
	}
}