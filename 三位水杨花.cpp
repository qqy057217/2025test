#include <iostream>
using namespace std;

bool sxhs(int n){
    int a = n%10;
    int b = (n/10)%10;
    int c = n/100;
    return (n == a*a*a + b*b*b + c*c*c);
}

int main() {
    int m;
    cin >> m;
    
    
    int allRes[100][100]={0};  
    int resultCounts[100]={0};    
    bool hasResults[100]={false};  
    
   
    // 处理所有输入
    for (int i = 0; i < m; i++) {
        int p, q;
        cin >> p >> q;
        
        int count = 0;
        for(int j = p; j <= q; j++) {
            if (sxhs(j)) {
                allRes[i][count] = j;
                count++;
            
        }
        
        resultCounts[i]=count;
        hasResults[i] = (count > 0);
       
        
}
    
}  
    for(int i=0;i<m;i++){
        if (hasResults[i]) {
            for (int k = 0; k < resultCounts[i]; k++) {
               
                 
                cout << allRes[i][k]<<" ";
            }
        } 
        
        else {
            cout << -1;
        }
        cout << endl;
        
    }
    
    // 最后一起输出
    
    
    return 0;
}