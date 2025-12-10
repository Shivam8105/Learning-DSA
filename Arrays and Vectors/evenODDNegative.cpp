#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int evenCount = 0;
    int oddCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;
    for(int i=0;i<N;i++){
        if(arr[i]>0) positiveCount++;
        if(arr[i]<0) negativeCount++;
        if(arr[i]%2==0) evenCount++;
        if(arr[i]%2!=0) oddCount++;
    }

    cout<<"Even: "<<evenCount<<endl;
    cout<<"Odd: "<<oddCount<<endl;
    cout<<"Positive: "<<positiveCount<<endl;
    cout<<"Negative: "<<negativeCount<<endl;
}