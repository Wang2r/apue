#include "apue.h"

int main(void)
{
	int c;

	while((c = getc(stdin)) != EOF)
		if(putc(c, stdout) == EOF)
			puts("output error!");

	if(ferror(stdin))
		puts("input error!");

	exit(0);
}

//此例没有显式的缓冲，标准I/O函数完成了缓冲的工作
//如果深究的话我觉得可以一直钻到Kernel里面
//
//puts自带换行
//Ctrl+D结束

