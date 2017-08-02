#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		A()
		{
			a=100;
			cout<<"class A"<<"---"<<a<<endl;
		}
};
class D{
	public:
		int d;
		D()
		{
			d=100;
			cout<<"Class D---"<<d<<endl;
		}
};
class B:public A
{
	public:
		int b;
		B()
		{
			b=12;
			cout<<"class B----"<<a<<","<<b<<endl;
		}
		
};
class C:public B
{
	public:
		int c;
		C()
		{
			c=12;
			cout<<"Class c"<<"---"<<a<<","<<b<<","<<c<<endl;
		}
};
class E:public A,public D{
	public:
		int e;
		E()
		{
			e=10;
			cout<<"class E---"<<a<<","<<d<<","<<e<<endl;
		}
};
class F:public D{
	public:
		int f;
		F()
		{
			f=11;
			cout<<"class F---"<<d<<","<<f<<endl;
		}
};
class G:public D{
		public:
		int g;
		G()
		{
			g=10;
			cout<<"class G---"<<d<<","<<g<<endl;
		}
};
class H:public E{
	public:
		int h;
		H()
		{
			h=8;
			cout<<"Class H---"<<a<<","<<d<<","<<e<<","<<h<<endl;
		}
};
class I:public H{
	public:
		I()
		{
			cout<<"Class I"<<endl;
		}
};
class J:public H{
	public:
		J()
		{
			cout<<"Class J"<<endl;
		}
};
int main()
{
		cout<<"\n\tSingle inheritance"<<endl;
	B s;
	cout<<"\tanswer(/):"<<s.a/s.b<<endl;
	cout<<"\n\tMultilevel inheritance"<<endl;
	C f;
	cout<<"\tanswer(*):"<<f.a*f.b*f.c<<endl;
	cout<<"\n\tMultiple inheritance"<<endl;
	E t;
	cout<<"\tanswer(+):"<<t.a+t.d+t.e<<endl;
	cout<<endl<<"\tHierarchical inheritance"<<endl;
	F x;
//	x.get();
	cout<<"\tAnswer(-):"<<x.d-x.f<<endl;
	G y;
//	y.get();
	cout<<"\tAnswer(-):"<<y.d-y.g<<endl;
	cout<<"\n\tHybrid inheritance"<<endl;
	I d;
	J k;
	
}
