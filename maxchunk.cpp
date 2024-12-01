#include <bits/stdc++.h>
using namespace std;

class Maxchunk
{
public:
    int maxChunk(vector<int> num)
    {
        int res = 0;
        int max_seen = 0;
        for (int i = 0; i < num.size(); i++)
        {
            max_seen = max(max_seen, num[i]);
            if (max_seen == i)
            {
                res++;
            }
        }
        return res;
    }
};
int main()
{
    int n;
    cout << "enter value of n";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter values in arr";
        cin >> arr[i];
    }
    Maxchunk mc;
    cout << mc.maxChunk(arr);

    return 0;
}