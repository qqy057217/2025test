//暴力算法

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;


// int main(){
// int n;
// cin>>n;
// vector<int> height(n);
// for(int i=0;i<n;i++){
// cin>>height[i];
// }

// int max_number=0;
// int current=0;

// for(int q=0;q<n;q++){
// for(int p=q+1;p<n;p++){
//     int min_height=min(height[q],height[p]);
//     current=min_height*(p-q);
//     max_number=max(max_number,current);



// }

// }
// cout<<max_number;
// return 0;


// }


//双指针法
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_area(vector<int>& height) {
    int n= height.size();
    int left =0;
    int right =n-1;
    int max_number=0;
    while(left<right){
int current=min(height[left],height[right]) * (right-left);
max_number=max(max_number,current);


if(height[left]<height[right]){
    left++;

}
else
    right--;

    }
return max_number;
   
}


int main(){
int number=0;
cin>>number;

vector<int> height(number);
for(int i=0;i<number;i++){
cin>>height[i];

}

cout<<max_area(height);

return 0;



}








