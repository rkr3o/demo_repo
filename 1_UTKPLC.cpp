#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)
// added a comment


void byte()

{
        char first , second , third ;
        cin>>first>>second>>third;

        char a , b;
        cin>>a>>b;

        if(a==first && b == second)
        {
            cout<<a;
        }
        
        else if(a==second && b == third)        {
            cout<<a;
        }

        else
        {
            cout<<b;
        }
       

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