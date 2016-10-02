#include "apue.h"

#define BUFFSIZE 4096

int main()
{
	int n;
	char buf[BUFFSIZE];

	while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
		if(write(STDOUT_FILENO, buf, n) != n)
			printf("write error!");

	if(n < 0)
		printf("read error!");

	exit(0);
}

//在此例中，buf缓存标准输入的内容并传递给标准输出
//标准输入和标准输出此时就相当于是入口和出口
//
//可以在/usr/include/unistd.h:212处找到三个默认打开
//的文件描述符
//
//其实这是一个简单的cp程序 使用格式是 ./a.out < a > b
