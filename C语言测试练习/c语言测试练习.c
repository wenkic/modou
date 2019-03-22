
#include <stdio.h>
#define Menu_Num 3	//菜单数目 

typedef struct tagSysMenu	//菜单类 
{
	char *text;
	int xPos;
	int YPos;
	void(*onOkFun)();
	void(*onCancelFun)();
}SysMenu, *LPSysMenu;

static int currentFocusMenu = 0;	//当前菜单 

void menu1OnOk()
{
	printf("currentFocusMenu is %d, onOkFun\n", currentFocusMenu);
}

void menu2OnOk()
{
	printf("currentFocusMenu is %d, onOkFun\n", currentFocusMenu);
}

void menu3OnOk()
{
	printf("currentFocusMenu is %d, onOkFun\n", currentFocusMenu);
}

void menu1OnCancel()
{
	printf("currentFocusMenu is %d, onCancelFun\n", currentFocusMenu);
}

void menu2OnCancel()
{
	printf("currentFocusMenu is %d, onCancelFun\n", currentFocusMenu);
}

void menu3OnCancel()
{
	printf("currentFocusMenu is %d, onCancelFun", currentFocusMenu);
}

static SysMenu menu[Menu_Num] = //创建菜单的对象 
{
	{"menu1", 0, 48, menu1OnOk, menu1OnCancel},
	{"menu2", 7, 48, menu2OnOk, menu2OnCancel},
	{"menu3", 14, 48, menu3OnOk, menu3OnCancel},
};

void onOkKey()	//行为，ok 
{
	menu[currentFocusMenu].onOkFun();
}

void OnCancelKey()	//行为，cancel 
{
	menu[currentFocusMenu].onCancelFun();
}

//int main(void)
//{
//	currentFocusMenu = 1;
//	onOkKey();
//	currentFocusMenu = 2;
//	OnCancelKey();
//	getchar();
//	return 0;
//}
typedef struct 
{
	volatile  union
	{
		volatile  unsigned char    u8;                       /*!< Offset:       ITM Stimulus Port 8-bit                   */
		volatile  unsigned int    u16;                      /*!< Offset:       ITM Stimulus Port 16-bit                  */
		volatile  unsigned long   u32;                      /*!< Offset:       ITM Stimulus Port 32-bit                  */
	}  PORT;

}TIM_Type;

#include <stdlib.h>
#include <string.h>
int main(void)
{
	char tem[3] = { 0x00,0x21,0x23 };
	char temp[10] = { 0x00,0x21,0x20 };
	
	printf("bcmp return = %d\r\n",memcmp(tem,temp,3) );
	getchar();
	return 0;
}