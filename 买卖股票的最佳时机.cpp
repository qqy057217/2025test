#include<iostream>
#include<vector>
using namespace std;

int max(int a,int b){
    return a>b?a:b;
}
int min(int p,int q){
return p<q?p:q;

}

int main(){
int n;
cin>>n;
vector<int> pieces(n);


for (int i=0;i<n;i++){
cin>>pieces[i];
}

int maxnumber=0;
int minnumber=pieces[0];

for(int i=1;i<n;i++){
    int current=pieces[i]-minnumber;
    maxnumber=max(current,maxnumber);
    minnumber=min(pieces[i],minnumber);

}

if(maxnumber>0)
cout<<maxnumber<<endl;

else cout<<0<<endl;


return 0;
}












