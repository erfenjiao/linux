//mycpy.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char ** argv)
//如果用到了命令行的传参，就必须要判断参数个数 
{
	FILE * fps, *fpd;
	int ch; //返回值为整型 
	if(argc < 3){
		fprintf(stderr,"Usage:传参出错");
	} 
	fps = fopen(argv[1],"r");
	if(fps == NULL){
		perror("fopen()");
		exit(1);
	}
	fpd = fopen(argv[2],"r");
	if(fpd == NULL){
		perror("fopen()");
		exit(1);
	}
	while(1){
		ch = fgetc(fps);
		if(ch == EOF){
			break;
		}
		fputc(ch,fpd);
	}
	//先关闭依赖别人的对象，再关闭被依赖的对象 
	fclose(fpd);
	fclose(fps);
	exit(0);
}
