//NEERAJ LAHKAR
//CSE-21/20

#include<iomanip>
#include<iostream>
#include<stdio.h>
using namespace std;

class Ve{
	public:
	float x,y,z;
	void create(){
	cout<<"Enter magnitude in X-Direction:"<<"\n";
	cin>>x;
	cout<<"Enter magnitude in Y-Direction:"<<"\n";
	cin>>y;
	cout<<"Enter magnitude in Z-Direction:"<<"\n";
	cin>>z;
	cout<<"Created Vector is(Scientific Notation):"<<"\n";
	cout<<x<<"i+"<<y<<"j+"<<z<<"k"<<"\n";

}
Ve operator+(Ve n2){
	Ve n3;
	n3.x=x+n2.x;
	n3.y=y+n2.y;
	n3.z=z+n2.z;
	return n3;
}
void modify(){
	int cho;
	while(1){
		cout<<"1.Modify X-Direction"<<"\n";
		cout<<"2.Modify Y-Direction"<<"\n";
		cout<<"3.Modify Z-Direction"<<"\n";
		cout<<"4.Exit"<<"\n";
		cout<<"Enter your choice:"<<"\n";
		cin>>cho;
		switch(cho){
			case 1:
				cout<<"Enter the new value:"<<"\n";
				cin>>x;
				break;
			case 2:
				cout<<"Enter the new value:"<<"\n";
				cin>>y;
				break;
			case 3:
				cout<<"Enter the new value:"<<"\n";
				cin>>z;
				break;
			case 4:
				exit(0);
			default:
				cout<<"Enter a valid option"<<"\n";
		}
		cout<<"Modified Value:"<<"\n";
		disp();
	}
}
void mult(){
	int n;
	cout<<"Enter the scalar value:"<<"\n";
	cin>>n;
	x*=n;
	y*=n;
	z*=n;
}
void disp(){
	cout<<"The Vector:"<<"\n";
	cout<<setprecision(4)<<"\n";
	cout<<"("<<x<<","<<y<<","<<z<<")"<<"\n";
}
};

int main(){
	int opt;
	Ve sad;
	Ve n1;
	Ve n2;
	Ve n3;
	while(1){
		cout<<"1.Create"<<"\n";
		cout<<"2.Modify"<<"\n";
		cout<<"3.Multiply"<<"\n";
		cout<<"4.Display"<<"\n";
		cout<<"5. Add"<<"\n";
		cout<<"6.Exit"<<"\n";
		cout<<"Enter a  option"<<"\n";
		cin>>opt;
		switch(opt){
			case 1:
			cout<<"Enter Details Of Vector 1:"<<"\n";
			n1.create();
			cout<<"Enter Details Of Vector 2:"<<"\n";
			n2.create();
			break;
			case 2:
			int x;
			cout<<"Modify Vector 1:(press 1)\n";
			cout<<"Modify Vector 2:(press 2)\n";
			cout<<"Enter:"<<"\n";
			cin>>x;
			if(x==1){
			n1.modify();
		}
		else{
			n2.modify();
	}
			break;
			case 3:
			n1.mult();
			n2.mult();
			break;
			case 4:
			cout<<"Vector 1:"<<"\n";
			n1.disp();
			cout<<"Vector 2:"<<"\n";
			n2.disp();
			break;
			case 5:
				n3=n1.operator+(n2);
				n3.disp();
			break;
			case 6:
			exit(0)	;
		}
	}
}

