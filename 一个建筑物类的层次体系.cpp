#include<iostream>
#include<string>
using namespace std;

class building{
	protected:
		string name;
		int floors;
		double area;
	public:
		building(string n,int f,double a){name=n;floors=f;area=a;	}
		
};
class house:public building{
	private:
		int room,balcony;
	public:
		house(string n,int f,double a,int r,int b):building(n,f,a)
	    {
	    	room=r;balcony=b;
		}
	void print()
	{
		cout<<"���ƣ�"<<name<<endl;
		cout<<"������"<<floors<<endl;
		cout<<"�����"<<area<<"ƽ��"<<endl;
		cout<<"��������"<<room<<endl;
		cout<<"��̨����"<<balcony<<endl;
	}
};
class office:public building{
	private:
		int offices,meetingrooms;
	public:
		office(string n,int f,double a,int o,int m):building(n,f,a)
	    {
	    	offices=o;meetingrooms=m;
		}
	void print()
	{
		cout<<"���ƣ�"<<name<<endl;
		cout<<"������"<<floors<<endl;
		cout<<"�����"<<area<<"ƽ��"<<endl;
		cout<<"�칫������"<<offices<<endl;
		cout<<"����������"<<meetingrooms<<endl;
	}
};
int main()
{
	house a("��������",5,2000,10,10);
	a.print();
	cout<<endl;
	office b("�Ź�Ժ�칫¥",10,5000,100,10);
	b.print();
	
	return 0;
}
