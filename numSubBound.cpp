#include<bits/stdc++.h>
using namespace std;
class Solution{
   public:
    int numSub(vector<int> &nums,int left,int right){
    return count(nums,right)-count(nums,left-1);
    }
    int count(vector<int> num,int bound){
        int ans=0,cnt=0;
        for(int n:num){
            cnt=n<=bound?cnt+1:0;
            ans+=cnt;
        }
    return ans;}
};
int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
    cout<<"enter valie in arr";
    cin>>arr[i];
    }
    int left=2,right=3;
    Solution sa;
    cout<<sa.numSub(arr,left,right);
    return 0;
}