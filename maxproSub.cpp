#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

class Maxsub{
    public:
    int maxsunmul(vector<int>&num){
        int mul=num[0];
        int s=0;
        int mul1=1,mul2=1;
        int l=num.size()-1;
        for(int i=0;i<num.size();i++){
            mul1=(mul1==0)?1:mul1;
            mul2=(mul2==0)?1:mul2;
            mul1*=num[i];
            mul2*=num[l-i];
            mul=max(mul,max(mul1,mul2));
             }
    return mul;}
};


int main(){
    vector<int>arr(4);
    for(int i=0;i<arr.size();i++){
        cout<<"enter number"<<" ";
        cin>>arr[i];
    }
    Maxsub ms;
    cout<<ms.maxsunmul(arr);
    return 0;
}