/*
��������
�������񣺱�дһ��������fun.h�������ж�ĳ���Ƿ�Ϊˮ�ɻ���������д������step1/step1.c�����øú���������е�ˮ�ɻ�����

���֪ʶ
Ϊ����ɱ�����������Ҫ��������֪ʶ��  

ˮ�ɻ���
ˮ�ɻ�����Narcissistic number��Ҳ����Ϊ����ȫ���ֲ�������pluperfect digital invariant, PPDI��������������������
��ķ˹׳����ķ˹��������Armstrong number����ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153��

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
��������
�������񣺱�дһ��������fun.h�������ж�ĳ���Ƿ�Ϊ����������д������step2/step2.c�������100���ڵ�������

���֪ʶ
Ϊ����ɱ�����������Ҫ��������֪ʶ��  

����
�����ֳ�������һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ�������������������������Ϊ�������涨1�Ȳ�������Ҳ���Ǻ�������

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
��������
�������񣺱�дһ�����ж������ĺ�����fun.h��������д������step3/step3.c�����øú�����ʹ�ü�������һ����x�������1~x֮�������������

���֪ʶ
Ϊ����ɱ�����������Ҫ��������֪ʶ��  

����
��������ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ���������е������ӣ����������������Լ�����ĺͣ������Ӻ�������
ǡ�õ���������

����˵��
ƽ̨������д�Ĵ�����в��ԣ�

�������룺31
Ԥ�������6 28
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

��������
�Ŵ���ѧ�������ڡ��㾭��һ����������������ġ���Ǯ��ټ������⣬�������������£�
����һ��ֵǮ�壻��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ������̡�ĸ���������Σ�

�������񣺱�дһ������ ��fun.h���ܼ������Ǯ��ټ������п��ܣ�����д������step4/step4.c������һ��һ�����������п��ܡ�

���֪ʶ
Ϊ����ɱ�����������Ҫ��������֪ʶ��  

�����ķ���

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

���֪ʶ
Ϊ����ɱ�����������Ҫ��������֪ʶ��  

ŷ������㷨
ŷ������㷨�ֳ�շת���������ָ���ڼ��������Ǹ�����a��b�����Լ�������㹫ʽgcd(a,b) = gcd(b,a mod b)��
������Ҫ�� 1997 �� 615 ���������������Լ��,��ŷ������㷨�����������еģ�
1997 / 615 = 3 (�� 152)
615 / 152 = 4(��7)
152 / 7 = 21(��5)
7 / 5 = 1 (��2)
5 / 2 = 2 (��1)
2 / 1 = 2 (��0)
���ˣ����Լ��Ϊ1
�Գ����������������������㣬������Ϊ 0 ʱ��ȡ��ǰ��ʽ����Ϊ���Լ�������Ծ͵ó��� 1997 �� 615 �����Լ�� 1��

����˵��
ƽ̨������д�Ĵ�����в��ԣ�

�������룺12 90
Ԥ�������6 180

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

��������
�������񣺱�дһ��������fun.h���ж������ַ�����Բ�����Ƿ���ԣ�����д����������жϽ����

�����룺 this is (a+b) and c+(
���������ƥ��

�����룺this is ((a+2)*b) and c+(d+e)*2
�������ƥ��

����˵��
ƽ̨������д�Ĵ�����в��ԣ�

�������룺this is (a+b) and c+(
Ԥ���������ƥ��

�������룺this is ((a+2)*b)
Ԥ�������ƥ��

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

	char ch[100];  //Ĭ�ϸ�ֵΪ0 
	gets(ch);
	if(fun(ch)) 
		printf("ƥ��"); 
	else
		printf("��ƥ��");
	
	return 0;
}

*/ 


/*

��������
�������񣺱�дһ���ݹ麯����fun.c��������д������(step7/step7.c����ʹ�����������һ����λ�����ĸ�λ���֡�

����˵��
ƽ̨������д�Ĵ�����в��ԣ�

�������룺20210906
Ԥ�������2 0 2 1 0 9 0 6

*/

/*
ʾ��һ�������ˣ� ���ˣ������˵�ԭ���ǣ���ͷ��ûд�ô������� 
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
ʾ���������ˣ�˼���ݹ�ط��أ����Ƶ� 

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
�õݹ����i���˵����䣬��1����10�꣬��2���˱��һ����2�꣬�Դ����ƣ�
���¾��ǵݹ���̣�ͨ��������ӣ����õ��˽�ݹ� 
*/

# include<stdio.h>
# include<stdlib.h>

/*------�ڰ˹�-------*/
//ʹ�õݹ麯�����δ֪������
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



































