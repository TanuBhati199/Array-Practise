#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Square{
    public:
    vector<int> squareSort(vector<int> num){
        for(int i=0;i<num.size();i++){
            num[i]=num[i]*num[i];
        }
        //sort(num.begin(),num.end());
    int head=0,tail=num.size()-1;
    vector<int> result(num.size());
    for(int pos=num.size()-1;pos>=0;pos--){
        if(num[head]>num[tail]){
         result[pos]=num[head];
         head++;
        }
        else{
            result[pos]=num[tail];
            tail--;
        }
    }
    
return result;}
};
int main(){
    int n;
    cout<<"size of array";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
    cout<<"enter numer in array"<<i+1;
    cin>>arr[i];
    }
    Square sq;
    vector<int> res=sq.squareSort(arr);
    for(int t:res){
        cout<<t<<" ";

    }
    cout<<endl;
    return 0;
}