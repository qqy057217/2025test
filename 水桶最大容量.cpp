#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> height(n);
for(int i=0;i<n;i++){
cin>>height[i];
}

int max_number=0;
int current=0;

for(int q=0;q<n;q++){
for(int p=q+1;p<n;p++){
    int min_height=min(height[q],height[p]);
    current=min_height*(p-q);
    max_number=max(max_number,current);



}

}
cout<<max_number;
return 0;


}

