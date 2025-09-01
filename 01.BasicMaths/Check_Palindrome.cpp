# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please Enter the Number"<<endl;
    cin>>n;
    int dup=n;
    int revNum=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
    revNum=(revNum*10)+lastdigit;
    }
    if(revNum==dup){
        cout<<"Yes this is a palindrome"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}