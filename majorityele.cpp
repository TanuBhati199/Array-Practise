#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Majorele{
public:
int majorele(vector<int>&arr){
int cnt=0,el;
for(int i=0;i<arr.size();i++){
    if(cnt==0){
        el=arr[i];
        cnt++;
    }
    else if(el==arr[i]){
        cnt++;
    }
    else{cnt--;}
}
cnt=0;
for(int i=0;i<arr.size();i++){
    if(el==arr[i]){cnt++;}
}
if(cnt>=arr.size()/2) return el;
return -1;
}
};


int main(){
    vector<int>arr={3,5,5,5,7,5,9,3,8,3,5,5,5,6,7,4,5};
    Majorele me;
    cout<<me.majorele(arr);
    return 0;
}