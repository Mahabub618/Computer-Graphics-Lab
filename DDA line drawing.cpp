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
	int x1, y1, x2, y2, dx, dy, step;
	cout << "Enter starting point (x1, y1): ";
	cin >> x1 >> y1;
	cout << "\nEnter ending point (x2 ,y2): ";
	cin >> x2 >> y2;
	cout << "\n";
	
	dx = x2-x1;
	dy = y2-y1;
	
	if(abs(dx) >= abs(dy)) step = abs(dx);
	else step = abs(dy);
	
	double xinc, yinc, x, y;
	xinc = dx/(1.0*step);
	yinc = dy/(1.0*step);
	x = x1;
	y = y1;
	
	cout << "Coordinate Point\t" << "Plotted to Pixel\n";
	while(1)
	{
		cout << setprecision(3) << fixed << "(" << x << ", " << y << ")\t\t\t" << "(" << (int)round(x) << ", " << (int)round(y) << ")\n";
		if(x >= x2 or y >= y2) break;
		x = x+xinc;
		y = y+yinc;
	}
}
