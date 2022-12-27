#include <stdio.h>

int main()
{
    // 使用fopen函数打开或者创建文件，返回问价指针
    FILE *fp;
    // 以只读方式读取文件 只能读，如果没有则会返回NULL
    fp = fopen("D:/200work/EmbeddedStudy/61_file/file.txt","r");
    // 以只写方式读取文件 如果文件不存在则会创建 如果文件存在则清空
    // fp = fopen("D:/200work/EmbeddedStudy/61_file/file.txt","w");
    // 以只写、追加方式读取文件 如果文件不存在则创建 如果文件存在则追加
    // fp = fopen("D:/200work/EmbeddedStudy/61_file/file.txt","a");
    if (fp == NULL) {
        printf("fail to fopen\n");
        return -1;
    }

    // 使用fgetc从文件中依次读取每一个字符
    // 文件的每一行结束的位置都有一个标识，是一个换行符，称之为行结束符
    // fgetc可以读取到行结束符
    /*
    int c;
    while ((c = fgetc(fp)) != EOF) {
        printf("c = [%c] - %d\n",c,c);
    }
    */

    /*
    // 使用fgets读取文件内容
    char buf[32] = "";
    // 读取32个字节的数据，如果碰到行结束符会立即返回
    // 如果想要读取的字节数小于一行内容，则只会读取第二个参数-1个字节
    fgets(buf,32,fp);
    printf("buf = %s\n",buf);
    */

    // 使用fread函数读取文件内容
    int num;
    char buf[128] = "";
    num = fread(buf,5,4,fp);
    printf("buf = %s\n",buf);
    printf("num = %d\n",num);

    // 使用fclose关闭文件
    fclose(fp);
    return 0;
}
