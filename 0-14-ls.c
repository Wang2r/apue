#include "apue.h"
#include <dirent.h>

int main(int argc, char *argv[])
{
	DIR		*dp;
	struct dirent *dirp;

	if(argc != 2)
	//	err_quit("Usage: ls directory_name");
	{
		printf("Usage: ls derectory_name.\n");
		exit(1);
	}

	if(NULL == (dp = opendir(argv[1])))
	//	err_sys("can`t open %s", argv[1]);
	{
		printf("can`t open %s.\n", argv[1]);
		exit(2);
	}
	while(NULL != (dirp = readdir(dp)))
		printf("%s\n", dirp->d_name);

	closedir(dp);
	exit(0);
}
