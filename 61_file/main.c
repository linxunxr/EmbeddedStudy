#include <stdio.h>

int main()
{
    // ʹ��fopen�����򿪻��ߴ����ļ��������ʼ�ָ��
    FILE *fp;
    // ��ֻ����ʽ��ȡ�ļ� ֻ�ܶ������û����᷵��NULL
    fp = fopen("D:/200work/EmbeddedStudy/61_file/file.txt","r");
    // ��ֻд��ʽ��ȡ�ļ� ����ļ���������ᴴ�� ����ļ����������
    // fp = fopen("D:/200work/EmbeddedStudy/61_file/file.txt","w");
    // ��ֻд��׷�ӷ�ʽ��ȡ�ļ� ����ļ��������򴴽� ����ļ�������׷��
    // fp = fopen("D:/200work/EmbeddedStudy/61_file/file.txt","a");
    if (fp == NULL) {
        printf("fail to fopen\n");
        return -1;
    }

    // ʹ��fgetc���ļ������ζ�ȡÿһ���ַ�
    // �ļ���ÿһ�н�����λ�ö���һ����ʶ����һ�����з�����֮Ϊ�н�����
    // fgetc���Զ�ȡ���н�����
    /*
    int c;
    while ((c = fgetc(fp)) != EOF) {
        printf("c = [%c] - %d\n",c,c);
    }
    */

    /*
    // ʹ��fgets��ȡ�ļ�����
    char buf[32] = "";
    // ��ȡ32���ֽڵ����ݣ���������н���������������
    // �����Ҫ��ȡ���ֽ���С��һ�����ݣ���ֻ���ȡ�ڶ�������-1���ֽ�
    fgets(buf,32,fp);
    printf("buf = %s\n",buf);
    */

    // ʹ��fread������ȡ�ļ�����
    int num;
    char buf[128] = "";
    num = fread(buf,5,4,fp);
    printf("buf = %s\n",buf);
    printf("num = %d\n",num);

    // ʹ��fclose�ر��ļ�
    fclose(fp);
    return 0;
}
