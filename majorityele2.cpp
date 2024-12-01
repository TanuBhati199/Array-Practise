#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Majele{
    public:
    vector<int> majorele(vector<int> &num){
        int cnt1=0,cnt2=0,el1=0,el2=0;
        vector<int> ar;
        for(int i=0;i<num.size();i++){
            if(cnt1==0 && el2!=num[i]){
                el1=num[i];
                cnt1=1;
            }
            else if(cnt2==0 && el1!=num[i]){
                el2=num[i];
                cnt2=1;
             }
             else if(el1==num[i]){
                cnt1++;
             }
             else if(el2==num[i]){
              cnt2++;
             }
             else{
              cnt1--;
              cnt2--;
             }
        }
        cnt1=0,cnt2=0;
        for(int i=0;i<num.size();i++){
            if(el1==num[i]){cnt1++;}
            else if(el2==num[i]){cnt2++;}
        }
        if(cnt1>num.size()/3) ar.push_back(el1);
        if (cnt2>num.size()/3) ar.push_back(el2);
        return ar;
    }

};


int main(){
   
    int n;
    cout<<"enter value of n";
     cin>>n;
     vector<int> arr(n);
   
    for(int i=0;i<n;i++){
        cout<<"enter value in array";
        cin>>arr[i];
    }
    Majele me;
    
    vector<int>res=me.majorele(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
return 0;
}