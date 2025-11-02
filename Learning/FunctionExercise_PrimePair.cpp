#include<iostream>
#include<cmath>
using namespace std;
/*Prime Pair*/
int isprime(int a){
    for(int i=2;i<a;i++)
        if(a%i==0) return 0;

    return 1;
}
int main(){
    int n=0;
    int temp=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(i+2<=n){
            if(isprime(i)&&isprime(i+2)){
                cout<<i<<" "<<i+2<<endl;
                temp++;
            }
        }
    }
    if(temp==0) cout<<"empty";
    return 0;
}