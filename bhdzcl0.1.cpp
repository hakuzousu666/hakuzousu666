/*
	Name: �׺���ս����
	Copyright:
	Author:�׺�
	Date: 07/01/23 16:59
	Description: 0.1�汾
*/

#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;
int cdi,cdsec;
void xuyan();//����
float wbf,dbf;
void bat();//ս��
void exp();//Ԥ�ȱ�����δ��������ֵ
void hpmax();
void removehandle();
int ak=35,whp=1039,dhp=1024,dak=36,whpmax,
    dhpmax;//�ҷ��������ҷ�hp���з�HP,�з��������������ֵ
int self,enemy;//�����ҷ��͵з���Ϊ
int y,m,d;//����
int wfys,dfys;//�ҷ����𣬵з�����
void removehandle()
{
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);
}
void xuyan()
{
	y=2023,m=3,d=12;
	printf("���·�����ƽ�������");
	cout << y << "��" << m << "��" << d << "��" << endl ;
	printf("���屻���������Ժ���ͼ����,���Ǳ��ƻ�ͣս��Լ����������\n��ٽ�����");
	cout << "���׺��������Ӳ��ܣ����Ǵ���������ȥ�������\n\n" << endl;
}
void hpmax()
{
	whpmax=whp,dhpmax=dhp;
}

int main()
{
	MessageBox(0,
	           "gitԴ�����\nhttps://github.com/hakuzousu666/hakuzousu666\n���ȷ����ʼŹ�����",
	           "made by white_fox",MB_OK|MB_ICONINFORMATION);
	removehandle();
	
	xuyan();
	hpmax();
	for(; whp|dhp>0;) {
		cout << "\n����ָ��1��������,2��������,��Ŀǰ�Ĺ����˺�Ϊ��" << ak << "��\n" <<
		     endl ;
		cin >> self;
		if(self==1) {
			self=0;
			dhp=dhp-ak;
			ak++;
			whp=whp-dak;
			wbf=(whp/whpmax)*100;

			cout << "\n�㱻�������һ���ƣ����������" << dak << "�˺�\n" << endl;
			cout << "���ʣ������ " << whp << "(" << wbf << "%)" << endl;   
			dak--;
			cout << "\n�����ʣ��hp:" << dhp << endl;

		}

		if(self==2) {
			self=0;
			//����ʧ����ֵ=�����Ѫ��-��ǰѪ����*�ٷֱ�
			dfys=(dhpmax-dhp)*0.12;
			dhp=dhp-dfys;
			cout << "����������Գ�������� " << dfys << "�˺���" << endl;
			cout << "\n���壨���β���������ʣ��hp:" << dhp << "  ,���ʣ������ " << whp <<
			     "\n" << endl;
		}
		if(self>2|self<0) {
			MessageBox(0,"��Чָ��\n������ָ�����","ERROR!",MB_OK|MB_ICONERROR);
		}
		if(whp<=0) {
			cout << "��������" << endl;
			break;
		}
		if(dhp<=0) {
			cout << "�����Ѿ������������������ģ�"  << endl;
			break;
		}
	}
	return 0;
}

