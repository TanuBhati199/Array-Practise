// Rotated Array
#include <bits/stdc++.h>
using namespace std;

class Reverse{
    private:
    vector<int> reversenum(vector<int> &num,int s,int l){
       while(s<l){
        int temp=num[s];
        num[s]=num[l];
        num[l]=temp;
        s++;
        l--;
       }
    };
    
    public:
    vector<int> reversearr(vector<int>arr,int n){
      int l=arr.size()-1;  
      int s=0;
      reversenum(arr,s,l);
      reversenum(arr,s,n-1);
      reversenum(arr,n,l);
      return arr;
    }
};
int main()
{
    int n, s;
    cout << "enter n value";
    cin >> n;
    cout << "enter s value";
    cin >> s;
    vector<int> num(s);
    for (int i = 0; i < s; i++)
    {
        cout << "enter value in num" << i + 1 << ": ";
        cin >> num[i];
    }
    Reverse re;
    vector<int> ans = re.reversearr(num, n);
    for(int res:ans){
        cout<<res<<" ";
    }
    return 0;
}

/*#include<iostream>
#include<math.h>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;

class Reverse{
    public:
    vector<int> reversearray(vector<int> num,int n){
        reverse(num.begin(),num.end());
        reverse(num.begin(),num.begin()+n);
        reverse(num.begin()+n,num.end());
   return num; }
};
int main(){
    int n,s;
    cout<<"Enter n value";
    cin>>n;
    cout<<"enter number in array size";
    cin>>s;
    vector<int>arr(s);
    for(int i=0;i<s;i++){
        cout<<"enter numbers in array"<<i+1<<":";
        cin>>arr[i];
    }
    Reverse re;
    vector<int>reverseoutput=re.reversearray(arr,n);
    for(int num:reverseoutput){
        cout<<num<<" ";
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
 int nextnum(int n){
  string num=to_string(n);
  if(next_permutation(num.begin(),num.end())){
    return stol(num)>INT_MAX?-1:stol(num);
  }
  return -1;

 }
};
int main(){
int n=1234;
Solution s;

cout<<s.nextnum(n);
 return 0;
}


#include<iostream>
using namespace std;
class Myclass{
    private:
    int val=0;
    public:
    int myfunction(int a,int b){
        for(int i=0;i<a;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
                val++;
            }
            cout<<"\n";
        }
   return val; }

};

int main(){
    int a,b;
    a=3;
    b=3;
    Myclass m;

    cout<<m.myfunction(a,b);
    return 0;
}*/