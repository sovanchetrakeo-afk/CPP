#include<iostream>
using namespace std;
int main(){
    int resultMultiple;
    for(int i=1;i<=10;i++){
        resultMultiple=i*5;
     cout<<i<<"*5="<<resultMultiple<<"\n";
    }
    cout<<"The first 10 multiple of 5 are:\n";
    for(int i=1;i<=10;i++){
          resultMultiple=i*5;
    cout<<" "<<resultMultiple;
    }
  return 0;
}