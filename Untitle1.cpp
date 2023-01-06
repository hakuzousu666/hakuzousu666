/*
	Name:陈洛你妈死了 
	Copyright: ---- 
	Author: 陈洛你妈死了 
	Date: 06/01/23 14:01
	Description: 
*/

#include<windows.h>
#include <stdio.h>
int main() {
	int a; 
	a=MessageBox(0,"陈洛的妈死了嘛？","github：https://github.com/hakuzousu666/hakuzousu666",MB_ICONQUESTION|MB_YESNO);
	if(a==6) {
		MessageBox(0,"是的陈洛的妈死了\n让我们去他妈妈的祖坟电摇他！","明智的选择！",MB_ICONINFORMATION);
}
	else{
		MessageBox(0,"陈洛走狗滚出克","我操你妈的",MB_ICONWARNING|MB_SERVICE_NOTIFICATION);
		
	}
	printf("这个的返回值是：%d",a);
	return 0;
} 

