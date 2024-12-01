#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<climits>

using namespace std;

class Nextgreater{
    public:
    int nextgreaternum(int num){
     string sn=to_string(num);
     if(next_permutation(sn.begin(),sn.end())){
        return stol(sn)>INT_MAX?-1:stol(sn);

     }
     return -1;
    }
};
int main(){
    int num;
    cout<<"enter any number";
    cin>>num;
    Nextgreater ng;
    cout<<ng.nextgreaternum(num);

    return 0;
}