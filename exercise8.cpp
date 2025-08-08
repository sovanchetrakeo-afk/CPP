#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"1. Greet\n";
    cout<<"2. Calculate factorial\n";
    cout<<"0. Exit\n";
    do{
      cout<<"Enter your choice\n";
      cin>>choice;
      string name;
      int n;
      int result; 
      switch(choice){
        case 1:
        cout<<"Enter either your fisrtname or lastname:\n";
        cin>>name; 
        cout<<"Hello,"<<name<<"\n"; 
        cout<<"Nice to meet you!"<<"\n";
        break;
        case 2:
        cout<<"Enter the number to factorial:\n"; 
        cin>>n;
        for(int i=1;i<=n;i++){
        result *= i;  
        } 
        cout<<"The factorial is "<<result<<"\n";
        break;
        default:
        cout<<"Invalid choice!\n";        
      }
    }while(choice!=0);
    return 0;
}