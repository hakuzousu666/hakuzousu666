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
void xuyan();//����
void bat();//ս��
void exp();//Ԥ�ȱ�����δ��������ֵ
int ak=35,whp=130,dhp=999;//�ҷ��������ҷ�hp���з�HP
int self,enemy;//�����ҷ��͵з���Ϊ
int y,m,d;//����
void xuyan() {
	y=2023,m=3,d=12;
	printf("���·�����ƽ�������");
	cout << y << "��" << m << "��" << d << "��" << endl ;
	printf("���屻���������Ժ���ͼ����,���Ǳ��ƻ�ͣս��Լ����������\n��ٽ�����");
	cout << "���׺��������Ӳ��ܣ����Ǵ���������ȥ�������\n\n" << endl;
}

int main() {
	xuyan();
	for(; whp|dhp>0;) {
		cout << "\n����ָ��1��������,��Ŀǰ�Ĺ����˺�Ϊ��" << ak << "��\n" << endl ;
		cin >> self;
		if(self==1) {
			self=0;
			dhp=dhp-ak;
			ak++;
			cout << "\n�����ʣ��hp:" << dhp << endl ;
		} else {
			MessageBox(0,"��Чָ��\n������ָ�����","����",MB_OK|MB_ICONERROR);
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

