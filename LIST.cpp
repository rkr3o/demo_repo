#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


void byte()

{
        int n ;
        cin>>n;
        vector<int>a(n);
        for (int &i :a ) cin>>i;

        map<int  , int > freq;
        for(int i : a ) freq[i]++;

        int mxfreq = -1 ; 

        for (auto pii : freq )
        {
         mxfreq = max (mxfreq , pii.second);
        }
        int ans = -10 ;

        if(n==1  || mxfreq == n)
        {
            ans=0;
        }

        else if(mxfreq == 1)
        {
            ans=-1;
        }
        
        else {
            ans = (n-mxfreq)+1 ;
        }
        
        cout<< ans << endl ; 
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;
cin>>t;
while(t--){
byte();
}
}