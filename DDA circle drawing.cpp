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
    float x1,y1,x2,y2,x,y,k; 
    int gd,gm,i,val,r; 
    cout<<"Enter the radius of circle "; 
    cin>>r; 
    x1=r*cos(0); 
    y1=r*sin(0); 
    x=x1; 
    y=y1; 
    i=0; 
    do 
    { 
        val=pow(2,i); 
        i++; 
    }while(val<r); 
    k=1/pow(2,i-1); 
    int iteration = 0;
    do 
    { 
        x2=x1+y1*k; 
        y2=y1-k*x2; 
        cout << "step-" << ++iteration << ": (" << x2 << ", " << setprecision(3) << y2 << ")\n";
        x1=x2; 
        y1=y2; 
    }while((y1-y)<k||(x-x1)>k); 
    return 0; 
}


