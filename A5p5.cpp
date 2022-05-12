//NEERAJ LAHKAR
//CSE-21/20
#include<iostream>
#include<string.h>
#define MAX 50
using namespace std;

class books{
	public:
		char *title,*author,*pub;
		float price;
		char *stock;
	books(){
		title= new char[30];
		author= new char[30];
		pub= new char[30];
		price=0;
		stock=new char[30];
	}
	void input(){
		cout<<"Enter The Title:"<<"\n";
		cin>>title;
		cout<<"Enter Author Name:"<<"\n";
		cin>>author;
		cout<<"Enter the name of the Publishers:"<<"\n";
		cin>>pub;
		cout<<"Enter The Stock Numbers:"<<"\n";
		cin>>stock;
		cout<<"Enter the price:"<<"\n";
		cin>>price;
	}
	void disp(){
		cout<<"Author:"<<author<<"\n";
		cout<<"Title:"<<title<<"\n";
		cout<<"Publisher:"<<pub<<"\n";
		cout<<"Stock:"<<stock<<"\n";
		cout<<"Price:"<<price<<"\n";
	}
	void search(books b[], int n){
		char t[MAX],a[MAX];
		cout<<"Enter the Author name:"<<"\n";
		cin>>a;
		cout<<"Enter the Title name:"<<"\n";
		cin>>t;
		for(int i=0; i<n; i++)
		{
			if(strcmp(b[i].title,t)==0 && strcmp(b[i].author,a)==0)
			{
				cout<<"Book Found!!!"<<endl;
				return;
			}

		}	
		cout<<"Book not found!!\n\n";
	} 
	void request(books b[],int n){
		char t[MAX],a[MAX];
		int out;
		cout<<"Enter author"<<"\n";
		cin>>a;
		cout<<"Title"<<"\n";
		cin>>t;
		int num;
		
		for(int i=0;i<n;i++){
			
			if(strcmp(b[i].title,t)==0 && strcmp(b[i].author,a)==0){
			cout<<"Enter the number of stocks:"<<"\n";
			cin>>num;
			if(num<=stock[i]){
				out=num*b[i].price;
				cout<<"Total Cost:"<<out<<"\n";
				return;
			}
			else{
				cout<<"NOt Available"<<"\n";
			}
		}
		}
		cout<<"Required copies not in stock"<<"\n";
	}



};
int main(){
	int opt,n;
	int i=0;
	cout<<"Enter The Number Of Boooks:"<<"\n";
	cin>>n;
	books bo[n], b;

	for(i=0;i<n;i++){
		cout<<"Enter book details:"<<"\n";
		bo[i].input();
	}

	while(1){
		cout<<"1. Display"<<"\n";
		cout<<"2. Enter te details of the book you need:"<<"\n";
		cout<<"3. Request"<<"\n";
		cout<<"4. Exit"<<"\n";
		cout<<"Enter a option:"<<"\n";
		cin>>opt;
		switch(opt){
			case 1:
				for(i=0;i<n;i++){
				bo[i].disp();
				}
				break;
			case 2:
				b.search(bo,n);
				//b.request(bo,n);
				break;
			case 3:
				b.request(bo,n);
				break;
			case 4:
				exit(0);
			default:
				cout<<"Enter a valid option!!!"<<"\n";
			}
		}
}









