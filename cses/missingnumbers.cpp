#include<bits/stdc++.h>
using namespace std ;
int main(){
long long n,ttsum,sum=0;
cin>>n;
ttsum=(n*(n+1))/2;
for(int i=0;i<n-1;i++){
    int x;
    cin>>x;
    sum+=x;
}
cout<<ttsum-sum;
return 0;
}
