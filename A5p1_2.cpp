#include<iostream>
#include<stdio.h>
#define MAX 30
using namespace std;

class Bank{
	public:
	char bankName[MAX];
	char branch[MAX];
	//int n;
	//cout<<"Enter the number of account:"<<"\n";
	//cin>>n;
	//Account Ac[n];
	
	
};

class Account{
	public:
	char accType[MAX];
	char holder[MAX];
	int bal;
	
//friend void input(Bank , Account);
//friend void display(Bank, Account);

};
void input(Bank x,Account y){
	cout<<"Enter Bank Name:"<<"\n";
	cin>>x.bankName;
	cout<<"Enter Branch Name:"<<"\n";
	cin>>x.branch;
	cout<<"Enter Account Type:"<<"\n";
	cin>>y.accType;
	cout<<"Enter Holder Name:"<<"\n";
	cin>>y.holder;
	cout<<"Enter Bank Balance:"<<"\n";
	cin>>y.bal;
}
void display(Bank x,Account y){
	cout<<"Bank Name:"<<"\n";
	cout<<x.bankName;
	cout<<"Branch Name:"<<"\n";
	cout<<x.branch;
	cout<<"Account Type:"<<"\n";
	cout<<y.accType;
	cout<<"Holder Name:"<<"\n";
	cout<<y.holder;
	cout<<"Bank Balance:"<<"\n";
	cout<<y.bal;
}


int main(){
	int n,opt;
	int i=0;
	cout<<"Enter account number:"<<"\n";
	cin>>n;
	//Account Ac[n];
	Bank x;
	Account y;
	
	while(1){
		cout<<"_-_MENU_-_"<<"\n";
		cout<<"1. Enter The Details:"<<"\n";
		cout<<"2. Display The Details:"<<"\n";
		cout<<"3. Exit"<<"\n";
		cout<<"Enter a option:"<<"\n";
		cin>>opt;
		switch(opt){
			case 1:
			for(i=0;i<n;i++){
				cout<<"Enter Bank Details:"<<"\n";
				input(x,y);
			}
			break;
			case 2:
				for(i=0;i<n;i++){
					cout<<"Bank Details:"<<"\n";
					display(x,y);
				}
			break;
			case 3:
			exit(0);	
		}
	}
	
}
