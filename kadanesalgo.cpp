//Kadane's Algorith
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

class Maxsub{
    public:
    int maxsubarr(vector<int>nums){
        int res=0;
        int maxnum=0;

    for(int n:nums){
    maxnum=max(n,maxnum+n);
    res=max(maxnum,res);
    }
    return res;
    }
};

int main(){
    vector<int> arr(9);
    for(int i=0;i<9;i++){
        cout<<"enter no. "<<i+1<<": ";
        cin>>arr[i];
    }
    Maxsub ms;
    cout<<ms.maxsubarr(arr);
   
    return 0;
}