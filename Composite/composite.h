#pragma once
#include<iostream>
#include<string>
#include<list>
using namespace std;
//公司类 抽象类或接口
class Company
{
protected:
	string name;
public:
	Company(string n)
	{
		name = n;
	}
	virtual void  Add(Company * c) = 0;
	virtual void Remove(Company * c) = 0;
	virtual void Display(int depth) = 0;
	virtual void LineOfDuty() = 0;
};
//具体公司类   实现接口 树枝节点
class ConcreteCompany : public Company
{
private:
	list<Company *> children;
public:
	ConcreteCompany(string n) : Company(n)
	{ }
	void Add(Company * c)
	{
		children.push_back(c);
	}
	void Remove(Company * c)
	{
		children.remove(c);
	}
	void Display(int depth)
	{
		for (int i = 0; i < depth; i++)
		{
			cout << "-";
		}
		cout << name << endl;
		//
		for each (Company * var in children)
		{
			var->Display(depth + 2);
		}
	}
	//履行职责
	void LineOfDuty()
	{
		for each (Company * var in children)
		{
			var->LineOfDuty();
		}
	}
};

//人力资源部
class HRDepartment : public Company
{
public:
	HRDepartment(string n) : Company(n)
	{ }
	void Add(Company * c)
	{	
	}
	void Remove(Company * c)
	{
	}
	void Display(int depth)
	{
		for (int i = 0; i < depth; i++)
		{
			cout << "-";
		}
		cout << name << endl;
	}
	void LineOfDuty()
	{
		cout << name << "员工招聘培训管理" << endl;
	}
};
//财务部
class FinanceDepartment : public Company
{
public:
	FinanceDepartment(string n) : Company(n)
	{ }
	void Add(Company * c)
	{ }
	void Remove(Company * c)
	{ }
	void Display(int depth)
	{
		for (int i = 0; i < depth; i++)
		{
			cout << "-";
		}
		cout << name << endl;
	}
	void LineOfDuty()
	{
		cout << name << "公司财务收支管理" << endl;
	}
};