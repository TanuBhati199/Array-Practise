#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;
class Maxchunk
{
public:
    int maxChunk(vector<int> arr)
    {
        stack <int> stc;
        int max_chunk=-1;
        for(int i=0;i<arr.size();i++){
           max_chunk =max(arr[i],max_chunk); 
         while(stc.size() && stc.top()>arr[i]){
            stc.pop();
         }
         stc.push(max_chunk);
        }
   return stc.size();
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
        cout << "enter value in arr";
        cin >> arr[i];
    }
    Maxchunk mc;
    cout << mc.maxChunk(arr);

    return 0;
}