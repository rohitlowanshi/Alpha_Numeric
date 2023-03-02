#include<bits/stdc++.h>
using namespace std;
void Tstr(string &str,int N){
    int sum=0;
    for(int i=0;i<N;i++){
      
      if(str[i]>=48&&str[i]<=57){
        sum=sum+str[i]-48;
      }
          
    }
    cout<<sum;
}
int main(){
    string str;
    cout<<"enter str ";
    getline(cin,str);
    int N=str.length();
    Tstr(str,N);
    return 0;
}