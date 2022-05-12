//NEERAJ LAHKAR
//CSE-21/20
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Ban{
	public:
        int ac,bal;
	char name[30];
        char acnt[10];
void input(){
         cout<<"Enter the name:"<<"\n";
	 cin>>name;
         cout<<"Enter the account type:"<<"\n";
         cin>>acnt;
         cout<<"Enter the account number:"<<"\n";
         cin>>ac;
         cout<<"Enter the bank balance:"<<"\n";
         cin>>bal;
}
void depo(){
         int x;
         cout<<"Enter the amount you want to deposit:"<<"\n";
         cin>>x;
         bal+=x;
         cout<<"Your current balance is:"<<bal<<"\n";
}
void with(){
         int y;
         cout<<"Enter the amount you want to withdraw:"<<"\n";
         cin>>y;
         bal-=y;
         cout<<"Your current balance is:"<<bal<<"\n";
}
void disp(){
         cout<<"Name:"<<name<<"\n";
         cout<<"Account type:"<<acnt<<"\n";
         cout<<"Account number:"<<ac<<"\n";
         cout<<"Bank balance:"<<bal<<"\n";
}
};

int main(){
         int opt;
	 Ban sbi;
while(1){
        cout<<"_-_MENU_-_"<<"\n";
	cout<<"1.Enter the details:"<<"\n";
	cout<<"2.Deposit"<<"\n";
	cout<<"3.Withdrawal"<<"\n";
	cout<<"4.Display"<<"\n";
	cout<<"5.Exit"<<"\n";
	 cout<<"Enter an option:"<<"\n"; 
         cin>>opt;
switch(opt){
         case 1:
             sbi.input();
             break;
          case 2:
              sbi.depo();
              break;
           case 3:
               sbi.with();
               break;
           case 4: 
               sbi.disp();
               break;
            case 5: 
               exit(0);
               default:
                      cout<<"Enter a valid option!!!"<<"\n";
}
}
}
