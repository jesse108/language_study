#include <stdio.h> //stdio.h ��׼���������   #include ����  

//now frist is Hello World
int main(int argc, char** argv) { //����ִ�������� argc ��������,argv �����б� 
    printf("Hello world!\n");// printf ��stdio �ṩ���������
    
    //////������C�Ļ�����������
    int number = 123; //int ��
    char isFat = 'y';
    float a1 = 0.11;
    double pi = 3.1415926;

    //��׼�����
    printf("%d \n",12);// %d ����
    printf("%c \n",'a');// %c char �ַ�
    printf("%s \n","abcdes");// %s �ַ���
    printf("%f %f\n",1.23,3.22);//%f 6λС��


//    bool isBoy = true; //��ᱨ��, Ҳ����˵Cû�в�����
    int isTrue = 1 > 2;
    printf("isTrue:%d \n",isTrue);     	

    return 0;
}

