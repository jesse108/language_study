#include <stdio.h> //stdio.h 标准输如输出库   #include 引入  

//now frist is Hello World
int main(int argc, char** argv) { //程序执行主函数 argc 参数个数,argv 参数列表 
    printf("Hello world!\n");// printf 是stdio 提供的输出方法
    
    //////下面是C的基础数据类型
    int number = 123; //int 型
    char isFat = 'y';
    float a1 = 0.11;
    double pi = 3.1415926;
//    bool isBoy = true; //这会报错, 也就是说C没有布尔型
     	

    return 0;
}

