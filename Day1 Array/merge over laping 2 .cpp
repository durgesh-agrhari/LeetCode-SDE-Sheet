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
