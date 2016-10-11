#include<bits/stdc++.h>
using namespace std;
int my_function(int N)
{
    int i,a[100];
    for(i=0;i<N;i++)
        cin>>a[i];
    sort(a,a+N);
    return (a[N-3]);
}
int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        cout<<my_function(N)<<endl;
    }
    return 0;
}
