/*
	Name:������������ 
	Copyright: ---- 
	Author: ������������ 
	Date: 06/01/23 14:01
	Description: 
*/

#include<windows.h>
#include <stdio.h>
int main() {
	int a; 
	a=MessageBox(0,"������������","github��https://github.com/hakuzousu666/hakuzousu666",MB_ICONQUESTION|MB_YESNO);
	if(a==6) {
		MessageBox(0,"�ǵĳ����������\n������ȥ���������ص�ҡ����","���ǵ�ѡ��",MB_ICONINFORMATION);
}
	else{
		MessageBox(0,"�����߹�������","�Ҳ������",MB_ICONWARNING|MB_SERVICE_NOTIFICATION);
		
	}
	printf("����ķ���ֵ�ǣ�%d",a);
	return 0;
} 

