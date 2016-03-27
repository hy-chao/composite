#include "composite.h"
void main()
{
	ConcreteCompany * root = new ConcreteCompany("�����ܹ�˾");
	root->Add(new HRDepartment("�ܹ�˾������Դ��"));
	root->Add(new FinanceDepartment("�ܹ�˾����"));

	ConcreteCompany * comp = new ConcreteCompany("�Ϻ������ֹ�˾");
	comp->Add(new HRDepartment("�����ֹ�˾������Դ��"));
	comp->Add(new FinanceDepartment("�����ֹ�˾����"));
	root->Add(comp);

	ConcreteCompany * comp1 = new ConcreteCompany("�Ͼ����´�");
	comp1->Add(new HRDepartment("�Ͼ����´�������Դ��"));
	comp1->Add(new FinanceDepartment("�Ͼ����´�����"));
	comp->Add(comp1);

	ConcreteCompany * comp2 = new ConcreteCompany("���ݰ��´�");
	comp2->Add(new HRDepartment("���ݰ��´�������Դ��"));
	comp2->Add(new FinanceDepartment("���ݰ��´�����"));
	comp->Add(comp2);

	cout << "\n�ṹͼ" << endl;
	root->Display(1);

	cout << "\nְ��" << endl;
	root->LineOfDuty();
}