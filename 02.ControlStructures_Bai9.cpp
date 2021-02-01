#include <bits/stdc++.h>

using namespace std;			
int main() {
	long t;
    cin >> t;
    long maxHeight= 0, maxWidth=0;
    while(t--){
        long x,y;
        cin >> x >> y;
        if(maxHeight == 0 && maxWidth == 0)
            maxHeight= x, maxWidth = y;
        else if(maxWidth > y)
            maxWidth= y;
        else if(maxHeight > x)
            maxHeight = x;
    }
    cout << maxHeight*maxWidth;  
}
