/*
任务描述
本关任务：编写一个函数（fun.h），能判断某数是否为水仙花数，并编写主程序（step1/step1.c）调用该函数输出所有的水仙花数。

相关知识
为了完成本关任务，你需要掌握如下知识：  

水仙花数
水仙花数（Narcissistic number）也被称为超完全数字不变数（pluperfect digital invariant, PPDI）、自恋数、自幂数、
阿姆斯壮数或阿姆斯特朗数（Armstrong number），水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身（例如：1^3 + 5^3+ 3^3 = 153）

*/

/*
int a[5];

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fun(int num){
	int i=0, tem =0, temp =0;
	tem = num;
	while((num/10) >= 1)
	{
		a[i] = num % 10;
		i += 1;
		num /= 10;
	}
	
	temp = pow(a[0], 3) + pow(a[1], 3) + pow(num, 3);
	
	if(tem == temp)
	{
  		// printf("%d ", tem);
		return 1;
	}
	else
	{
		return 0;
	}
}
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
int main(int argc, char *argv[]) {
	int mx, mi, tem = 0;
	mx = 999; mi = 100;
	int i, j = 0;
	for(i=152; i>=100 && i<=999; i++)
	{
		tem = fun(i);
		if(tem)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
*/
/*
任务描述
本关任务：编写一个函数（fun.h），能判断某数是否为素数，并编写主程序（step2/step2.c）能输出100以内的素数。

相关知识
为了完成本关任务，你需要掌握如下知识：  

素数
质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数（规定1既不是质数也不是合数）。

*/


/*
# include<stdio.h>

int fun(int num)
{
	int i=0;
	for(i=2; i<num; i++)
	{
		if((num%i)== 0)
		{
			return 0;
		}
	}
	if(i=num)
	{
		return 1;
	}
}

int main(void)
{
	int i=0;
	int count = 1;
	int flag = 0;
//	printf("%d", 2); 
	for(i=2; i<100; i++)
	{
		flag = fun(i);
		if(flag)
		{
			if(count==25) {
				printf(" %d",i);
				break;
			}
			if((count % 5)!=1)
			{
				printf(" ");
			}
			if((count % 5) == 0)
			{
				printf("%d\n", i);
			}
			else
			{
				
				printf("%d", i);
			}
			
			count ++;
		} 
	}

	return 0;
}
*/



/*
任务描述
本关任务：编写一个能判断完数的函数（fun.h），并编写主程序（step3/step3.c）调用该函数，使得键盘输入一个数x，则输出1~x之间的所有完数。

相关知识
为了完成本关任务，你需要掌握如下知识：  

完数
完数，完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。它所有的真因子（即除了自身以外的约数）的和（即因子函数），
恰好等于它本身。

测试说明
平台会对你编写的代码进行测试：

测试输入：31
预期输出：6 28
*/



/*
 
 
# include<stdio.h>

int fun(int n)
{
	int a[100];
	int i, j=0;
	int tem = 1;
	for(i=2; i<n; i++) 
	{
		if((n%i) == 0)
		{
			a[j] = n/i;
			j++;
		}
	}
	for(i=0; i<j; i++)
	{
		tem += a[i]; 
	}
	if(n == tem)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}


int main()
{
	int i, n=0;
	int flag = 0;
	scanf("%d", &n);
	for(i=2; i<n; i++)
	{
		flag = fun(i);
		if(flag)
		{
			printf("%d ", i);
		}
	}
	
} 


*/

/*

任务描述
古代数学家张丘建在《算经》一书中曾提出过著名的“百钱买百鸡”问题，该问题叙述如下：
鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；百钱买百鸡，则翁、母、雏各几何？

本关任务：编写一个函数 （fun.h）能计算出百钱买百鸡的所有可能，并编写主程序（step4/step4.c），按一行一种组合输出所有可能。

相关知识
为了完成本关任务，你需要掌握如下知识：  

文言文翻译

*/

/*

#include<stdio.h>
#include<stdlib.h>

int buyChiken()
{
	int i,j, k;
	for(i=0; i<=20; i++)
	{
		for(j=0; j<=33; j++)
		{
			k = 100 -i -j;
			if(5*i + 3*j + 1*k/3.0 == 100)
				printf("%d %d %d\n", i, j, k);
			
		}
	}

}

int main(void)
{
	
	buyChiken();
	return 0;
}

*/

/*


#include<stdio.h>
#include<stdlib.h>

int fun()
{
	int i, j, k;
	for(i=0; i<=20; i++)
		for(j=0; j<=33; j++)
		{
			k = 100 - i - j;
			if(i*5 + j*3 +k/3.0==100)
				printf("%d %d %d\n", i, j, k);
		}
			 
}


int main(void)
{
	
	fun();
	return 0;
}

*/


/*

相关知识
为了完成本关任务，你需要掌握如下知识：  

欧几里得算法
欧几里得算法又称辗转相除法，是指用于计算两个非负整数a，b的最大公约数。计算公式gcd(a,b) = gcd(b,a mod b)。
假如需要求 1997 和 615 两个正整数的最大公约数,用欧几里得算法，是这样进行的：
1997 / 615 = 3 (余 152)
615 / 152 = 4(余7)
152 / 7 = 21(余5)
7 / 5 = 1 (余2)
5 / 2 = 2 (余1)
2 / 1 = 2 (余0)
至此，最大公约数为1
以除数和余数反复做除法运算，当余数为 0 时，取当前算式除数为最大公约数，所以就得出了 1997 和 615 的最大公约数 1。

测试说明
平台会对你编写的代码进行测试：

测试输入：12 90
预期输出：6 180

*/

/*

#include<stdio.h>
#include<stdlib.h>
#include<math.h>




int GCD(int datax, int datay)
{
	int temp1 = 0;
	int temp2 = 0;
	if(datax < datay)
	{
		temp2 = datax;
		datax = datay;
		datay = temp2;
	}
	
	if(datax % datay == 0)
		return datay;
		
	else
	{
		temp2 = datax % datay;
		GCD(datay, temp2);
	}
		
	
}



int main()
{
	int datax, datay, sum;
	scanf("%d %d", &datax, &datay);
	sum = datax * datay;
	datay = GCD(datax, datay);
	printf("%d %d", datay, sum/datay);
	
	return 0;
}

*/

/*

任务描述
本关任务：编写一个函数（fun.h）判断输入字符串的圆括号是否配对，并编写主程序输出判断结果。

如输入： this is (a+b) and c+(
则输出：不匹配

若输入：this is ((a+2)*b) and c+(d+e)*2
则输出：匹配

测试说明
平台会对你编写的代码进行测试：

测试输入：this is (a+b) and c+(
预期输出：不匹配

测试输入：this is ((a+2)*b)
预期输出：匹配

*/

/*

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fun(char *ch)
{
	int i= 0;
	int count1 = 0;
	int count2 = 0;
	for(i=0; ch[i]!='\0'; i++)
	{
		if(ch[i] == '(')
			count1++;
		if(ch[i] == ')')
			count2++;
	}
	if(count1 == count2)
		return 1;
	else
		return 0;
}



int main(void)
{

	char ch[100];  //默认赋值为0 
	gets(ch);
	if(fun(ch)) 
		printf("匹配"); 
	else
		printf("不匹配");
	
	return 0;
}

*/ 


/*

任务描述
本关任务：编写一个递归函数（fun.c），并编写主程序(step7/step7.c），使其能正序输出一个多位整数的各位数字。

测试说明
平台会对你编写的代码进行测试：

测试输入：20210906
预期输出：2 0 2 1 0 9 0 6

*/

/*
示例一（过不了） 过了，过不了的原因是，在头哥没写好传参类型 
#include<stdio.h>
#include<stdlib.h>

int fun(char *ch)
{
	static int i = 0;
	if(ch[i]!='\0')
	{
		if(ch[i+1]=='\0')
			printf("%c", ch[i]);
		else
		{
			
			printf("%c ", ch[i]);
			i++;
			fun(ch);

		}
	}	
	
} 


int main(void)
{
	char ch[100];
	gets(ch);
	fun(ch);
	
	return 0;
}
 
*/

/*
示例二（过了）思考递归地返回，多推导 

#include<stdio.h>
#include<stdlib.h>


int fun(int num)
{
	if(num==0)
		return 0;
	fun(num/10);
	printf("%d,", num%10);
	
}


int main(void)
{
	int a, num = 0;
	scanf("%d", &num);
	a = fun(num);
	
	return 0;
}

*/

/* 
用递归求第i个人的年龄，第1个人10岁，第2个人别第一个多2岁，以此类推，
以下就是递归过程，通过这个例子，更好的了解递归 
*/

# include<stdio.h>
# include<stdlib.h>

/*------第八关-------*/
//使用递归函数求解未知的年龄
int getAge(int n) 
{
	int a = 0;
	if(n==1)
	{
		printf("%d\n", n);
		return 10;
	}
	else
	{
		a = getAge(n-1) + 2;
		printf("%d %d\n", n, a);
		return a;
	}
}

int main(void)
{
	int n, age=0;
	scanf("%d", &n); 
	age = getAge(n);
	printf("%d", age);
	return 0;
}



































