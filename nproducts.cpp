#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number of products purchased:";
    cin>>n;
    float product[n],rate[n],total=0,discount,finalTotal;
    for(i=0;i<n;i++){
        cout<<"Enter the quantity of Product"<<(i+1)<<" purchased:";
        cin>>product[i];
        cout<<endl;
        cout<<"Enter the rate of Product"<<(i+1)<<"( in Rs. per item):";
        cin>>rate[i];
        cout<<endl;
        total=total+product[i]*rate[i];
    }
    if(total>=10000){
        discount=0.1;
    }
    else if(total>=5000 && total<10000){
        discount=0.05;
    }
    else{
        discount=0;
    }
    finalTotal=total-total*discount;
    cout<<"The gross amount of the purchase is Rs."<<finalTotal<<endl;
    cout<<"You saved Rs."<<(total*discount)<<" in this purchase.";
    return 0; 
}