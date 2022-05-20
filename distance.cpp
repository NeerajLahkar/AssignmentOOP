#include<iostream>

using namespace std;

class DM
{
	int m;
	int cm;

	public:
	DM()
	{
		m=0;
		cm=0;
	}
	
	DM(int a,int b)
	{
		m=a;
		cm=b;
	}

	friend class DB;
	
	void disp()
	{
		cout<<"In SI: "<<m<<"."<<cm<<endl;	
	}
};


class DB
{
	int ft;
	int in;
	
	public:
	DB()
	{
		ft=0;
		in=0;
	}
	
	
	
	DB(int a, int b)
	{
		ft=a;
		in=b;
	}

	friend class DM;
	
	void addB(DM arg)
        {
            DB temp1;
            temp1.in=arg.cm*0.39;
            if(temp1.in+in<12)
                temp1.in=temp1.in+ this->in;

            else
            {
                temp1.in=temp1.in+in-12;
        	    temp1.ft++;
            }
            temp1.ft=this->ft + arg.m*3.28;

			DM temp2;
        	temp2.cm=in*2.54;
        	if(temp2.cm+arg.cm<100)
            temp2.cm=temp2.cm + arg.cm;

        	else
        	{
    	    	temp2.cm=temp2.cm+arg.cm-100;
            	temp2.m++;
        	}
        	temp2.m=arg.m + this->ft*0.3048;
			temp1.disp();
			temp2.disp();
        }

	void disp()
	{
		cout<<"in american units: "<<ft<<"."<<in<<endl;
	}
	
};


int main()
{
	int p1,p2,q1,q2;
	cout<<"Enter values of meter & cm:"<<"\n";
	cin>>p1>>p2;
	cout<<"Enter values of feet & in:"<<"\n";
	cin>>q1>>q2;
	DM a(p1,p2);
	DB b(q1,q2);
	b.addB(a);
	return 0;
}


