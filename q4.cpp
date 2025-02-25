#include<iostream>
using namespace std;

int main(){
    int k=1;
    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<(j%2);
        }
       cout<<endl;
            
        }

    }
