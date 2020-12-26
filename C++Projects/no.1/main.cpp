#include <iostream>

int main(){
//	println("学号：2019210624，班级: 02111904, 姓名：沈怡然");
	printf("学号: %d，\n班级: 0%d, \n姓名: %s\n",2019210624, 2111904,"沈怡然");
	return 0;
} 

//.cpp = c plus plus
//.c C的源文件,运行时先看后缀
//.obj目标文件，存机器代码 
//build = 编译+ 连接
//execute = 编译+连接+运行 
// .cpp ->.obj - link ->.exe

/* 
1.[Error] expected ';' before 'return'  前面那行没加分号
2.不知道为什么用不了print和println
3.%d 然后用一串数字，数字前不能有0，可以是0%d 
*/
