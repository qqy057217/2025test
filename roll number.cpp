#include<iostream>
#include<vector>
using namespace std;
bool rollnumber(int n){
    if (n < 0) {
        return false;
    }
long long reverse_number=0;
int last_number=0;
int origin=n;
while(n>0)
{
    last_number=n%10;
reverse_number=10*reverse_number+last_number;
n=n/10;

}
return (reverse_number==origin);
}
int main(){
    int T=0;
    cin>>T;
    vector<int> arr(T);    
    
    for(int i=0;i<T;i++){
    int m=0;
    cin>>m;
    arr[i]=m;
}
    
    for(int i=0;i<T;i++){

     if( rollnumber(arr[i]))
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;
}


   

return 0;


}