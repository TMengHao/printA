#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printA() {
	printf("请输入你想打印字母A的高度（行高）>：");
	int x;    //定义字母A的高度
	scanf("%d",&x);
	int i = 0;
	//打印字母A所占行数
	for (i = 0; i < x;i++) {
		int a, b, c, d;
		//打印字母A左半部分空格区域
		for (a = 0; a < x - i;a++) {
			printf("%c",0x20);
		}
		//打印字母A左半部分
		for (b = 0; b < 1;b++) {
			printf("%c", 0x2A);
		}
		//打印字母A中间空白区域
		for (c = 0; c < 2 * i - 1; c++) {
			//判断字母A是否为奇数，为中间横杠星数添加数量
			if (x % 2 != 0)
			{
				//打印字母A中间横杠位置，为字母A高度的一半
				if (i == x / 2)
				{
					int y = 0;    //定义字母A中间横杠星数
					while (y < (2 * (x - 1) - 1) / 2)   //打印中间星数数量，为字母A中间空格最后一行的一半
					{
						printf("%c", 0x2A);
						y++;
					}
					break;    //中间行打印结束跳出循环
				}	
			}		
			else {   //判断字母A是否为偶数，为中间横杠星数添加数量
				if (i == x / 2)
				{
					int y = 0;    //定义字母A中间横杠星数
					while (y < (2 * (x - 1)) / 2)   //打印中间星数数量，为字母A中间空格最后一行的一半
					{
						printf("%c", 0x2A);
						y++;
					}
					break;    //中间行打印结束跳出循环
				}
			}
			printf("%c",0x20);
		}
		//打印字母A右半部分区域
		if (i > 0) {         //防止与左半部分区域头部冲突，从第0+1行开始
			for ( d = 0; d < 1; d++)
			{
				printf("%c",0x2A);
			}
		}
		printf("\n");
	}
}

int main() {
	printA();
	return 0;
}