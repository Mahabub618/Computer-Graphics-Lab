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
	int x1, y1, x2, y2, dx, dy, m, c1, c2, p;
	cout << "Enter x1 and y1: ";
	cin >> x1 >> y1;
	cout << "\nEnter x2 and y2: ";
	cin >> x2 >> y2;
	cout << endl;
	
	dx = x2-x1;
	dy = y2-y1;
	m = dy/dx;
	
	if(m >= 1)
	{
		c1 = 2*dx;
		c2 = 2*(dx-dy);
		p = c1-dy;
	}
	else
	{
		c1 = 2*dy;
		c2 = 2*(dy-dx);
		p = c1-dx;
	}
	int iteration = 0;
	int curx = x1, cury = y1;
	while(curx <= x2)
	{
		cout << "Step-" << ++iteration << ": " << curx << " " << cury << endl;
		if(curx == x2 and cury == y2) break;
		if(m >= 1)
		{
			if(p < 0)
			{
				p = p+c1;
				cury = cury+1;
				curx = curx;
			}
			else
			{
				p = p+c2;
				cury = cury+1;
				curx = curx+1;
			}			
		}
		else
		{
			if(p < 0)
			{
				p = p+c1;
				curx = curx+1;
				cury = cury;
			}
			else
			{
				p = p+c2;
				curx = curx+1;
				cury = cury+1;
			}			
		}
	}
}