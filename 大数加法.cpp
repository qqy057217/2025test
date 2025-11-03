#include<iostream>
#include<string>
using namespace std;
int max(int m,int n){
return m>n?m:n;
}
int main(){
int a[1000]={0};
int b[1000]={0};
int result[1001]={0};
string longnumber_1;
string longnumber_2;

cin>>longnumber_1;
cin>>longnumber_2;

int n1=0;
for(int i=longnumber_1.length()-1;i>=0;i--)
{  
char c=longnumber_1[i];
    if(c>='0'&&c<='9')
    a[n1++]=c-'0';

}
int n2=0;
for(int i=longnumber_2.length()-1;i>=0;i--)
{  
char d=longnumber_2[i];
   
   if(d>='0'&&d<='9')
    b[n2++]=d-'0';
}

int max_ = max(n1,n2);
int carry=0;

for(int i=0;i<max_;i++){
int sum =a[i]+b[i] + carry;
result[i]=sum%10;
carry = sum/10;
}

if(carry>0){
result[max_]=carry;
max_++;

}

for(int i =max_-1;i>=0;i--){
cout<<result[i];


}
return 0;
}




