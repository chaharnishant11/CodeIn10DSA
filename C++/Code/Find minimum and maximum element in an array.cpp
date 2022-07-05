// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    int mn=100000000001;
    int mx=0;
    for(int i=0;i<n;i++){
        //max
        if(a[i]>mx){
            mx=a[i];
        }
        
        //min
        if(a[i]<mn){
            mn=a[i];
        }
    }
    
    pair<long long,long long> ans; //pair is another data type; its elements are accessed via first and second
    ans.first = mn;
    ans.second = mx;
    
    return ans;
}