// // 
// #include<iostream>
// using namespace std;
// int main(){
//     // int n;
//     // cin >> n;
//     for (int i = 1; i<=7; i++)
//     {
//         for(int j =1;j<=7;j++){
//             if(j==1||j==7||i==j){
//                 cout<<"+";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i<=n; i++)  
    {
        for(int j =0;j<=n-i-1;j++){
            cout<<"0";
            }
            cout<<n-i<<endl;
    }        
    return 0;
    }