// Sort Elements of an Array by Frequency
// Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
// Output: 2 2 2 1 1 3 3 4

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{

    int arr[8] = {1, 2, 3, 2, 4, 3, 1, 2};

    map<int, int> mp;

    for (auto i : arr)
    {
        mp[i]++;
    }

    vector<pair<int, int>> temp;

    for (auto i : mp)
    {
        temp.push_back({i.first, i.second});
    }

    sort(temp.begin(), temp.end(), cmp);

    for (int i = 0; i < temp.size(); i++)
    {
        int count = temp[i].second ;
        while(count > 0){
            cout<<temp[i].first<<" " ;
            count -- ;
        }
    }

    return 0;
}


