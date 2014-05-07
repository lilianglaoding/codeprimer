#include<iostream>                                 //包含头文件
#include<cstdlib>
using namespace std;
double fuc(double x, double y)                        //定义函数
{
    if(y==0)
    {
        throw y;                                    //除数为0，抛出异常
    }
    return x/y;                                    //否则返回两个数的商
 }
 void main()
 {
     double res;
     try 
     {
         res=fuc(2,3);
         cout<<"The result of x/y is : "<<res<<endl;
         res=fuc(4,0);                                //出现异常
     } 
     catch (double) 
     {
         cerr<<"error of dividing zero.\n";
         exit(1);                                    //异常退出程序
     }
 }
