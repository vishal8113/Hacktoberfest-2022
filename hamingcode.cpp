#include<bits/stdc++.h>
using namespace std;
int main(){
    int data[10];
    int data_[10],c,c1,c2,c3,i;
    cout<<"enter 4 bits of data"<<endl;
    cin>>data[0]>>data[1]>>data[2]>>data[4];
    data[6]=data[0]^data[2]^data[4];
    data[5]=data[0]^data[1]^data[4];
    data[3]=data[0]^data[1]^data[2];
    cout<<"Encoded data is: "<<endl;
    for(int i=0;i<7;i++){
        cout<<data[i];
    }
    cout<<endl;
    cout<<"Enter recieved data: "<<endl;
    for(int i=0;i<7;i++){
        cin>>data_[i];
    }
    c1=data_[6]^data_[4]^data_[2]^data_[0];
    c2=data_[5]^data_[4]^data_[1]^data_[0];
    c3=data_[3]^data_[2]^data_[1]^data_[0];
    c=c3*4+c2*2+c1;
    if(c==0 &&  data_[6]==data[6] && data_[5]==data[5] && data_[3]==data[3]){
        cout<<"NO ERROR"<<endl;
    }
    else{
        cout<<"Error on position: "<<c<<endl;
    
    cout<<"Data sent"<<endl;
    for(int i=0;i<7;i++){
        cout<<data[i];
    }
     cout<<endl;
        cout<<"data recieved: "<<endl;
        for(int i=0;i<7;i++){
            cout<<data_[i];
        }
        cout<<endl;
        cout<<"Correct message is: "<<endl;
        if(data_[7-c]==0){
            data_[7-c]==1;
        }
        else{
            data_[7-c]=0;
        }
        for(int i=0;i<7;i++){
            cout<<data[i];
        }
}
}