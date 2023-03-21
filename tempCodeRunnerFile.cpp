#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>n;
    }
    int q;
    cin>>q;
    vector<pair<int,int>>v1;
    for(int i=0;i<q;i++)
    {
      cin>>v[0]>>v[1];  
    }
    vector<int>ans;
   /* 4 
2 3 6 9 
3
1 2
0 3
2 2
*/
    
    for(auto it:v1)
    {
        int sum=0;
     for(int i=it.first;i<=it.second;i++)
     {
      sum=sum+v[i];   
     }
        ans.push_back(sum);
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    
    return 0;
}
