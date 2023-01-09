/*
	Name: 白狐大战陈洛
	Copyright:
	Author:白狐
	Date: 07/01/23 16:59
	Description: 0.1版本
*/

#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int cdi,cdsec;
void xuyan();//序言
float wbf,dbf;
void bat();//战斗
void exp();//预先保留，未来做经验值
void hpmax();
void removehandle();
int ak=35,whp=1039,dhp=1024,dak=36,whpmax,
    dhpmax;//我方攻击，我方hp，敌方HP,敌方攻击，最大生命值
int self,enemy;//定义我方和敌方行为
int y,m,d;//背景
int wfys,dfys;//我方已损，敌方易损
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
	printf("故事发生在平行宇宙的");
	cout << y << "年" << m << "月" << d << "日" << endl ;
	printf("陈洛被灭婉驱逐以后意图复仇,于是便破坏停战条约向灭婉领土\n大举进攻。");
	cout << "但白狐不会坐视不管，于是带上了武器去阻击陈洛\n\n" << endl;
}
void hpmax()
{
	whpmax=whp,dhpmax=dhp;
}

int main()
{
	MessageBox(0,
	           "git源码查阅\nhttps://github.com/hakuzousu666/hakuzousu666\n点击确定开始殴打陈洛",
	           "made by white_fox",MB_OK|MB_ICONINFORMATION);
	removehandle();
	
	xuyan();
	hpmax();
	for(; whp|dhp>0;) {
		cout << "\n输入指令1攻击陈洛,2暴击陈洛,你目前的攻击伤害为：" << ak << "。\n" <<
		     endl ;
		cin >> self;
		if(self==1) {
			self=0;
			dhp=dhp-ak;
			ak++;
			whp=whp-dak;
			wbf=(whp/whpmax)*100;
			cout << "\n你被陈洛打了一巴掌，对你造成了" << dak << "伤害\n" << endl;
			cout << "你的剩余生命 " << whp << "(" << wbf << "%)" << endl;   
			dak--;
			cout << "\n陈洛的剩余hp:" << dhp << endl;

		}

		if(self==2) {
			self=0;
			//已损失生命值=（最大血量-当前血量）*百分比
			dfys=(dhpmax-dhp)*0.12;
			dhp=dhp-dfys;
			cout << "暴击辣！你对陈洛造成了 " << dfys << "伤害！" << endl;
			cout << "\n陈洛（本次不还击）的剩余hp:" << dhp << "  ,你的剩余生命 " << whp <<
			     "\n" << endl;
		}
		if(self>2|self<0) {
			MessageBox(0,"无效指令\n请输入指定命令。","ERROR!",MB_OK|MB_ICONERROR);
		}
		if(whp<=0) {
			cout << "你已死亡" << endl;
			break;
		}
		if(dhp<=0) {
			cout << "陈洛已经死亡，好死，开香槟！"  << endl;
			break;
		}
	}
	return 0;
}

