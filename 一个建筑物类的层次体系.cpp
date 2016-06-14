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
		cout<<"名称："<<name<<endl;
		cout<<"层数："<<floors<<endl;
		cout<<"面积："<<area<<"平米"<<endl;
		cout<<"房间数："<<room<<endl;
		cout<<"阳台数："<<balcony<<endl;
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
		cout<<"名称："<<name<<endl;
		cout<<"层数："<<floors<<endl;
		cout<<"面积："<<area<<"平米"<<endl;
		cout<<"办公室数："<<offices<<endl;
		cout<<"会议室数："<<meetingrooms<<endl;
	}
};
int main()
{
	house a("男生寝室",5,2000,10,10);
	a.print();
	cout<<endl;
	office b("信工院办公楼",10,5000,100,10);
	b.print();
	
	return 0;
}
