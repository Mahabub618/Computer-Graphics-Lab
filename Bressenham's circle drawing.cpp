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
	int x, y, r, D, h, k;
	cout << "Enter center point: ";
	cin >> h >> k;
	cout << "\nEnter the radius of the circle: ";
	cin >> r;
	cout << '\n';
	
	x = 0;
	y = r;
	D = 3-2*r;
	
	vector<pair<int, int>> point;
	while(1)
	{
		point.push_back({x+h, y+k});
		if(x >= y) break;
		if(D < 0)
		{
			D = D + 4*x + 6;
			x = x+1;
			y = y;
		}
		else
		{
			D = D + 4*(x-y) + 10;
			x = x+1;
			y = y-1;
		}
	}
	vector<pair<int, int>> temp;
	temp = point;
	
	temp.pop_back();
	while(!temp.empty())
	{
		int xx = temp.back().first;
		int yy = temp.back().second;
		temp.pop_back();
		point.push_back({yy, xx});
	}
	
	cout << "Quadrant-1\t" << "Quadrant-2\t" << "Quadrant-3\t" << "Quadrant-4\t" << endl;
	
	for(int i=0; i<point.size(); i++)
	{
		cout << "(" << point[i].first << "," << point[i].second <<")\t\t";
		cout << "(" << -point[i].first << "," << point[i].second <<")\t\t";
		cout << "(" << -point[i].first << "," << -point[i].second <<")\t\t";
		cout << "(" << point[i].first << "," << -point[i].second <<")\n";
	}
	
}