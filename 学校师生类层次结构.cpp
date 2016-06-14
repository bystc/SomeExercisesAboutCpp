#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		Student(){cout<<"construct Student class"<<endl;}
		~Student(){cout<<"destruct Student class"<<endl; }
void get_value1()
{
	cin>>xuehao>>name>>zhuanye>>banji;
	
}		
void ShowInfo()
{
	cout<<"xuehao:"<<xuehao<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"zhuanye:"<<zhuanye<<endl;
	cout<<"banji:"<<banji<<endl;
	//cout<<"time:"<<time<<endl;
}
private:
	int xuehao;
	string name;
	string zhuanye;
	string banji;
	//int time;
	
};
class Teacher
{
	public:
		string course;
		int time;
	Teacher(){cout<<"construct Teacher class"<<endl;}
	~Teacher(){cout<<"destruct Teacher class"<<endl; }
	void get_value2()
	{
		cin>>num>>name>>title>>course>>time;
		
	}
	void ShowInfo()
	{
		cout<<"number:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"title:"<<title<<endl;
		cout<<"course:"<<course<<endl;
		cout<<"time:"<<time<<endl;
	
	}
	private:
		int num;
		string name;
		string title;
		//string course;
		//int time;
		
		
};
class TeachingAssistant:public Teacher,public Student
{
	public:
	TeachingAssistant(){cout<<"construct TeachingAssistant class"<<endl;}
	~TeachingAssistant(){cout<<"destruct TeachingAssistant class"<<endl;}
	void get_value3()
	{
		get_value1();
		get_value2();
		
	}
	void ShowInfo()
	{
		cout<<"course:"<<course<<endl;
		cout<<"time:"<<time<<"¿ÎÊ±"<<endl;
		
	}
};
int main()
{
	TeachingAssistant t;
	cout<<"please input:"<<endl;
	t.get_value3();
	cout<<"please input:"<<endl;
	t.Teacher::ShowInfo();
	t.ShowInfo();
	t.Student::ShowInfo();
	return 0;
}

