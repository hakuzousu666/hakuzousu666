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
using namespace std;
void xuyan();//序言
void bat();//战斗
void exp();//预先保留，未来做经验值
int ak=35,whp=130,dhp=999;//我方攻击，我方hp，敌方HP
int self,enemy;//定义我方和敌方行为
int y,m,d;//背景
void xuyan() {
	y=2023,m=3,d=12;
	printf("故事发生在平行宇宙的");
	cout << y << "年" << m << "月" << d << "日" << endl ;
	printf("陈洛被灭婉驱逐以后意图复仇,于是便破坏停战条约向灭婉领土\n大举进攻。");
	cout << "但白狐不会坐视不管，于是带上了武器去阻击陈洛\n\n" << endl;
}

int main() {
	xuyan();
	for(; whp|dhp>0;) {
		cout << "\n输入指令1攻击陈洛,你目前的攻击伤害为：" << ak << "。\n" << endl ;
		cin >> self;
		if(self==1) {
			self=0;
			dhp=dhp-ak;
			ak++;
			cout << "\n陈洛的剩余hp:" << dhp << endl ;
		} else {
			MessageBox(0,"无效指令\n请输入指定命令。","警告",MB_OK|MB_ICONERROR);
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

