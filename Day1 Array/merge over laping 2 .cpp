#include <bits/stdc++.h>
using namespace std;
void merge(vector<pair<int,int>> &intervals) 
{
    sort(intervals.begin(), intervals.end());
    vector<pair<int,int>> merged;
    for(auto interval : intervals) 
    {
        if(merged.empty() || merged.back().second < interval.first) {
            merged.push_back({interval});
        }
        else 
        {
            merged.back().second = max(merged.back().second, interval.second);
        }
    }
    for(auto u: merged)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}
    
int main()
{
   int n;
   cin>>n;
   vector<pair<int,int>> a;
   for(int i=0;i<n;i++)
   {
       int x,y;
       cin>>x>>y;
       a.push_back({x,y});
   }
   merge(a);
   return 0;
}
