#include <stdio.h>
#include<string.h>
#include <stdlib.h> 
#define LEN sizeof(struct student)
#include <windows.h>
#include <conio.h>
#include <time.h>
//学生信息结构体 
struct student
{int num;
 char name[20];
 char clas[20];
 char sex[5];
 char birth[7] ;
 int age;
 float C_score;
 int year;
 int month;
 int day;
};
struct student stu[50];

bool isAdmin = false;
//初始化界面
void set();//管理员
void set1();//用户 

void welcome();
void welcome1();
void menu();
void menu1();
void menu4();
void menu3();
void AdLogin();
void in();
void delet();
void updet();
void select();
void select1(); 
void print();
void sort();
void cut();
void clea();
void advice();
int cmptime();
void readadvice();

int main()
{
     
    int studentChoose;//选择登陆方式 
    int flag = 1;//判断 
     
    while (flag == 1)
    {
        printf("\t\t\t\t\t   ╭ ⺌ ╮                     ╭ ```╮  \n");
        printf("\t\t\t\t\t   (@^o^@) 学生信息管理管理系统(⌒:⌒)\n");
        printf("\t\t\t\t\t   (~):(~)                     (~)v(~) \n");
        printf("%70s","\t\t┏┅┅┅┅┅┅┅┅┅┅┅┅┅☆\n");
        printf("%66s","[ 1.管理员登陆  ]\n"); 
        printf("%66s","[ 2.学生登陆    ]\n");
        printf("%70s","\t\t┗┅┅┅┅┅┅┅┅┅┅┅┅┅┛\n");
        printf("请选择：");
         
        scanf("%d",&studentChoose); 
 
       
        switch(studentChoose)
        {
        	case 1://管理员
				AdLogin();
        		if (isAdmin == true)
        		set() ;
       			break;
         
        	case 2://学生
            	set1();
            	break;
            
			      
        	default:
            	printf("输入错误，请重新输入\n");
            	system("pause");
            	system("cls"); 
            break; 
         
        }   
     
    }
     
    printf("\n");
    system("pause");
    return 0;
}

//目录 
void set()
{
    system("color F0");//变色、白底红字
     
    welcome(); 
} 

int cmptime(int year, int month, int day)
{
 time_t now_time = 0, set_time = 0;
 struct tm t;
 t.tm_year = year - 1900;
 t.tm_mon = month - 1;
 t.tm_mday = day;
 t.tm_hour = 0;
 t.tm_min = 0;
 t.tm_sec = 0;
 t.tm_isdst = 0;
 set_time = mktime(&t);
 time(&now_time);
 return now_time - set_time;
}

 
/*------------ 
 用户欢迎界面
-------------*/
 
void welcome()
{
 
      
    printf("\n\n");
    printf("\n\n\n\t\t\t\t\t\t");
    printf(" 欢");
    Sleep(120);
    printf(" 迎");
    Sleep(120);
    printf(" 来");
    Sleep(120);
    printf(" 到");
    Sleep(120);
    printf(" 本");
    Sleep(120);
    printf(" 管");
    Sleep(120);
    printf(" 理");
    Sleep(120);
    printf(" 平");
    Sleep(120);
    printf(" 台");
    Sleep(120);
    printf(" ！");
    Sleep(1000);
    printf("\n");
    system("cls");
     
    menu(); //用户菜单 
     
}

void menu3()
{
	
	printf("\t\t\t\t\t   ╭ ⺌ ╮                     ╭ ```╮  \n");
    printf("\t\t\t\t\t   (@^o^@) 学生信息管理管理系统(⌒:⌒)\n");
    printf("\t\t\t\t\t   (~):(~)                     (~)v(~) \n");
    printf("\n\n");
    printf("\t\t\t\t   ╭═════════════════════════════════○●○●═══╮\n");
    printf("\t\t\t\t   │              学生信息管理系统              │\n");
    printf("\t\t\t\t   ╰═══○●○●═════════════════════════════════╯\n");
	printf("\t\t\t\t   ┌──────────────────────────────────────────-┐\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 1. 录入学生信息         2. 删除学生信息    │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 3. 修改学生信息         4. 查询学生信息    │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 5. 显示学生信息         6. 排序学生信息    │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 7. 查看建议箱           8. 分组统计成绩    │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 9. 清屏                 0. 返回主界面      │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   └───────────────────────────────────────────┘\n");
}

void menu()
{
	int choose;         //用户输入的选择 
    int ture = 1;       //循环判断真假 
    	
	printf("\t\t\t\t\t   ╭ ⺌ ╮                     ╭ ```╮  \n");
    printf("\t\t\t\t\t   (@^o^@) 学生信息管理管理系统(⌒:⌒)\n");
    printf("\t\t\t\t\t   (~):(~)                     (~)v(~) \n");
    printf("\n\n");
    printf("\t\t\t\t   ╭═════════════════════════════════○●○●═══╮\n");
    printf("\t\t\t\t   │              学生信息管理系统              │\n");
    printf("\t\t\t\t   ╰═══○●○●═════════════════════════════════╯\n");
	printf("\t\t\t\t   ┌──────────────────────────────────────────-┐\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 1. 录入学生信息         2. 删除学生信息    │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 3. 修改学生信息         4. 查询学生信息    │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 5. 显示学生信息         6. 排序学生信息    │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 7. 查看建议箱           8. 分组统计成绩    │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 9. 清屏                 0. 返回主界面      │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   └───────────────────────────────────────────┘\n");
	printf("\n");
	printf("请选择功能(0-9)："); 
	scanf("%d",&choose);
    while(choose)
	{ 
		if(choose>=1&&choose<=9)
		{      
        	switch(choose)
        	{
      			case 1:in();break;
				case 2:delet();break; 
				case 3:updet();break; 
				case 4:select();break; 
				case 5:print();break;
				case 6:sort();break;
				case 7:readadvice();break;
				case 8:cut();break;
				case 9:clea();break;  
				case 0:main();break;
       		}
       	if(choose==9)
			{
				menu3();
			} 
		    printf("\n");
		    printf("请选择功能(0-9)："); 
		    scanf("%d",&choose);
	    }
		
		else 
		 {
		 	printf("\n"); 
		 	printf("请重新输入:");
		    scanf("%d",&choose);
		 }
		
	}
}

//录入学生信息 
void in()
{
	void print();
	FILE *fp;
	int i, m=0;
	char ch[2];
	char sex1[2];
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
	   	printf("文件打开失败\n");
	  	return;
    }
	while(!feof(fp))
	{
	  	if(fread(&stu[m],LEN,1,fp)==1)
	 	{
		 	m++;
		}
	}
	fclose(fp);
	if(m==0)
	{
	 	printf("文件没有内容\n");
	}
	else 
	{
	  	print();
	}				
 	if((fp=fopen("stu.txt","ab+"))==NULL)
  	{
   		printf("文件打开失败\n");
   		return; 
  	}
	printf("输入学生信息(y/n);\n");
 	scanf("%s",ch);
 	while(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
 	{  
    	printf("number:\n");
 		scanf("%d",&stu[m].num);
 		for(i=0;i<m;i++)
 		{
			if(stu[i].num==stu[m].num)
			{
				printf("您的信息已存在\n");
				fclose(fp); 
				getchar();
				return;
			}
		}
		printf("name:\n");
		scanf("%s",stu[m].name);
		
		printf("请输入班级:\n");
		printf("格式：x班\n");
		scanf("%s",stu[m].clas);
		printf("sex:\n");
		scanf("%s",sex1);
		if(strcmp(sex1,"男")==0||strcmp(sex1,"女")==0)
		{
			strcpy(stu[i].sex, sex1);
		
		}
		else
		{
			printf("输入错误\n");
			getchar();
			continue;
		}
		printf("请输入学生出生年份：\n");
		
		scanf("%d.%d.%d",&stu[m].year,&stu[m].month,&stu[m].day);
		if(stu[m].year>=2013 || stu[m].year<1950)
		{
			printf("输入错误，请重新输入\n");
			continue; 
		}
		else if(stu[m].month>13 || stu[m].month<1)
		{
			printf("输入错误，请重新输入\n");
			continue; 
		}
		
		else if(stu[m].month==1,3,5,7,8,10,12 && (stu[m].day>31 || stu[m].day<1))
		{
			printf("输入错误，请重新输入\n");
			continue; 
		}
		else if (stu[m].month==2 && (stu[m].day>28 || stu[m].day<1) ) 
		{
			printf("输入错误，请重新输入\n");
			continue; 
		}
		else if (stu[m].month==4,6,9,11 && (stu[m].day>30 || stu[m].day<1) ) 
		{
			printf("输入错误，请重新输入\n");
			continue; 
		}
	
		printf("age:\n");
		scanf("%d",&stu[i].age);
		int num ;
        num = cmptime(stu[m].year, stu[m].month, stu[m].day) / 31536000; 
        if (stu[i].age != num)
        {
        	printf("输入年龄错误");
        	continue; 
		}

		printf("C_score:\n");
		scanf("%f",&stu[m].C_score);
	  	if(fwrite(&stu[m],LEN,1,fp)!=1)
	  	{
	  		printf("不能保存\n");
	    	getchar(); 
	  	}	 
	  	else
	  	{
	   		printf("信息保存成功\n");
	   		
	   		m++;
	  	}
		printf("是否继续录入学生信息(y/n)：");
		scanf("%s",ch); 
	}
	fclose(fp);
} 
 
//删除学生信息 
void delet()
{   
    void print();
	FILE *fp;
	int num,m=0;
	int i,j;
	int flag=0; 
	char ch[2];
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp)==1)
		{
			m++;
		}
	} 
	fclose(fp);
	if(m==0)
	{
		printf("文件中没有学生信息\n");
	}
	else
	{
		print();
	    printf("请输入需要删除学生信息的学号：");
	    scanf("%d",&num); 
	}
	for(i=0;i<m;i++)    
	{
		if(stu[i].num==num)
		{
			printf("该学生已找到，是否删除(y/n):");
			scanf("%s",ch);
			if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
			{
				for(j=i;j<m;j++)
				{
					stu[j]=stu[j+1];
				}
				 m--;
				 flag=1;
				if((fp=fopen("stu.txt","wb"))==NULL)
				{
					printf("文件打开失败\n");
					return;
				}
				for(j=0;j<m;j++)
				{
					if(fwrite(&stu[j],LEN,1,fp)!=1)
					{
						printf("不能保存\n");
						getchar();
					}
				}
				fclose(fp);
				printf("删除成功！\n");break;
				
			}
			else
			{
			   printf("学生信息存在，不需要删除。");
			   break; 
		    }
		}
	 		
	}
	if(m==i&&flag==0) 
	{
		printf("未找到该学生");	
	}
	
}
//修改学生信息 
void updet()
{
	void print();
	int num,Y,M,D,ag;
	char name[10]; 
    char clas[20];
    char sex[5];
    float C_score;	
	FILE *fp;
	int m=0,a;
	int i,j;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp)==1)
		{
			m++;
		}
	}
	fclose(fp);
	if(m==0)
	{
		printf("文件中没有学生信息\n");
	} 
	else
	{
	 	print();
	 	printf("请输入需要修改学生信息的学号：");
	 	scanf("%d",&num); 
	}
	for(i=0;i<m;i++)
	{
	 	if(num==stu[i].num)
	 	{
	      printf("1:学号，2:姓名，3:班级，4:性别，5:C语言成绩  ,6:出生日期和年龄\n");
		  printf("该学生已被找到，请选择需要修改的内容(1-5)：");		  
		  scanf("%d",&a);
		  while(a)
		  { 		 
			  switch (a) 
			  {
			  	
			  	case 1:
			  		printf("将%d学生的学号修改为：",num); 
			  		scanf("%d",&num);
					stu[i].num=num;
					for(j=i+1;j<m;j++)
					{
						if(stu[j].num==num)
						{
							printf("您修改的学号已存在\n");
							getchar();
							return;
						}
					}   
			  		break;
			  	case 2:
				  	printf("将%d学生的姓名修改为：",num); 
				  	scanf("%s",name);
				  	strcpy(stu[i].name,name);
				  	break;	
			  	case 3:
			  		printf("将%d学生的班级修改为：",num); 
			  		scanf("%s",clas);
			  		strcpy(stu[i].clas,clas);
			  		break;
			  	case 4:
			  		printf("将%d学生的性别修改为：",num); 
			  		scanf("%s",sex);
			  		if(strcmp(sex,"男")==0||strcmp(sex,"女")==0)
						{
							strcpy(stu[i].sex,sex);   
		
						}
					else
						{
							printf("输入错误\n");
							getchar();
							continue;
						}  
			  		break;
				case 5:
			  		printf("将%d学生的C语言成绩修改为：\n",num);
					scanf("%f",&C_score);
					stu[i].C_score=C_score;
			  		break;	 
				case 6:
					printf("将%d学生的出生日期修改为：\n",num);
					scanf("%d.%d.%d",&Y,&M,&D);
					if(Y>2013 || Y<1950)
					{
						printf("输入错误，请重新输入\n");
						continue; 
					}
					else if(M>13 || M<1)
					{
						printf("输入错误，请重新输入\n");
						continue; 
					}	
			
					else if(M==1,3,5,7,8,10,12 && (D>31 || D<1))
					{
						printf("输入错误，请重新输入\n");
						continue; 
					}
					else if (M==2 && (D>28 || D<1) ) 
					{
						printf("输入错误，请重新输入\n");
						continue; 
					}
					else if (M==4,6,9,11 && (D>30 || D<1) ) 
					{
						printf("输入错误，请重新输入\n");
						continue; 
					}
	
					printf("将%d学生的年龄修改为：",num);
					scanf("%d",&ag);
					int num1 ;
       				num1 = cmptime(Y, M, D) / 31536000; 
        			if (ag != num1)
       				 {
        				printf("输入年龄错误");
        				continue; 
					}
					else
					{
						stu[i].year=Y;stu[i].month=M; stu[i].day=D;stu[i].age=ag;
						break;
					}	  	  	
			  	default:
			  	    printf("选择错误，请重新选择需要修改的内容：");
					scanf("%d",&a);   
			  		break;
			    }
			  
			  printf("请选择需要修改的内容(如果已修改完成请按0)：");
			  scanf("%d",&a);
		    }
			if((fp=fopen("stu.txt","wb"))==NULL)
				{
					printf("文件打开失败\n");
					return;
				}
				for(j=0;j<m;j++)
				{
					if(fwrite(&stu[j],LEN,1,fp)!=1)
					{
						printf("不能保存\n");
						getchar();
					}
				}
				fclose(fp);
				printf("修改成功！\n");
				break;	 	
	    }
    }
    if(m==i)
    {
    	printf("未找到该学生\n"); 
	}
}
//查询学生信息 
void select()
{
	int num,m=0;
	int i;
	FILE *fp;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp)==1)
		{
		  m++;
	    }
	 } 
	fclose(fp);
	if(m==0)
	{
		printf("文件没有内容\n");
		return;
	}	 
	printf("请输入学生学号进行查询：");
	scanf("%d",&num);
	for(i=0;i<m;i++)
	{
		if(num==stu[i].num)
		{
			printf("\n");
			printf("该学生信息已被查到；\n");
			printf("学号\t姓名\t年龄\t出生日期\t班级\t性别\tC语言成绩\n");
			printf("%d\t%s\t%d\t%d年%d月%d日\t%s\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].age,stu[i].year,stu[i].month,stu[i].day,stu[i].clas,stu[i].sex,stu[i].C_score); 
			break; 
		}		
	}
	if(m==i)
	{
		printf("该学生信息不存在\n");
		return;
	}  
}
//学生查询
void select1()
{
	int num,m=0;
	int i;
	FILE *fp;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("文件打开失败\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp)==1)
		{
		  m++;
	    }
	 } 
	fclose(fp);
	if(m==0)
	{
		printf("文件没有内容\n");
		return;
	}	 
	printf("请输入学生学号进行查询：");
	scanf("%d",&num);
	for(i=0;i<m;i++)
	{
		if(num==stu[i].num)
		{
			printf("\n");
			printf("该学生信息已被查到；\n");
			printf("学号\t姓名\t班级\t性别\n");
			printf("%d\t%s\t%s\t%s\n",stu[i].num,stu[i].name,stu[i].clas,stu[i].sex); 
			break; 
		}		
	}
	if(m==i)
	{
		printf("该学生信息不存在\n");
		return;
	}  
} 
//显示学生信息 
void print()
{ 	
    int i,m=0;
	FILE *fp;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("文件打开失败\n");
   	    return; 
	}
    while(!feof(fp))
 	{
 		if(fread(&stu[m],LEN,1,fp)==1)m++;
    }
    fclose(fp);
    if(m==0)
    {
  		printf("文件中没有内容\n");
    } 
   printf("学号\t姓名\t年龄\t出生日期\t班级\t性别\tC语言成绩\n"); 
   for(i=0;i<m;i++)
   {
   	printf("%d\t%s\t%d\t%d年%d月%d日\t%s\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].age,stu[i].year,stu[i].month,stu[i].day,stu[i].clas,stu[i].sex,stu[i].C_score);
   }
}

 
//排序 
void sort()
{
	  int i,j,m=0;
	  int ch;
	  FILE *fp;
	  struct student  temp;
	  if((fp=fopen("stu.txt","rb"))==NULL)
	  {
	   printf("文件打开失败\n");
	   return; 
	  }
	 while(!feof(fp))
	 {
	   if(fread(&stu[m],LEN,1,fp)==1)
	 	 {
		 	m++;
		 }
	  }
	  fclose(fp);
	  if(m==0)
	  {
	  	printf("文件中没有内容\n");
	  }
		printf("1:学号升序，2:C语言升序\n"); 
	   printf("请选择显示形式：");
	   scanf("%d",&ch);
	   switch (ch) 
	   {
	   	case 1:
	   		for(i=0;i<m;i++)
	   		{
			   for(j=i+1;j<m;j++)
			   {
			   	if(stu[i].num>stu[j].num)
				   { 
				     temp=stu[i];
				     stu[i]=stu[j];
					 stu[j]=temp;			   	  
				    } 
			   }   	
			}
	   		break;
	   	
	   	case 2:
			for(i=0;i<m;i++)
			{
			   	for(j=i+1;j<m;j++)
			   	{
			   		if(stu[i].C_score>stu[j].C_score)
			   		{ 
			   		    temp=stu[i];
			   			stu[i]=stu[j];
			   			stu[j]=temp;			   	  
			   		} 
			   	}   	
			}
			   	
			break;
	   }
   printf("学号\t姓名\t年龄\t出生日期\t班级\t性别\tC语言成绩\n");
   for(i=0;i<m;i++)
   {
   	printf("%d\t%s\t%d\t%d年%d月%d日\t%s\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].age,stu[i].year,stu[i].month,stu[i].day,stu[i].clas,stu[i].sex,stu[i].C_score);
   }
	    
}

//分组统计
void cut()
{
	int i,j;
	float n;
	FILE *fp;
	int m=0;
	if((fp=fopen("stu.txt","rb"))==NULL)
		  {
		   printf("文件打开失败\n");
		   return; 
		  }
		 while(!feof(fp))
		 {
		   if(fread(&stu[m],LEN,1,fp)==1)
		 	 {
			 	m++;
			 }
		  }
		  fclose(fp);
		  if(m==0)
		  {
		  	printf("文件中没有内容\n");
		  }
	printf("请输入按成绩分组的值：");
	scanf("%f",&n);
	printf("总成绩大于%.2f的同学有：\n",n);
	printf("学号\t姓名\t年龄\t出生日期\t班级\t性别\tC语言成绩\n");
    for(i=0;i<m;i++)
    {
    	if(stu[i].C_score>=n)
	    printf("%d\t%s\t%d\t%d年%d月%d日\t%s\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].age,stu[i].year,stu[i].month,stu[i].day,stu[i].clas,stu[i].sex,stu[i].C_score);
	}
	printf("成绩小于%.2f的同学有：\n",n);
	printf("学号\t姓名\t年龄\t出生日期\t班级\t性别\tC语言成绩\n");
	
	for(j=0;j<m;j++)
    {
    	if(stu[j].C_score<n)
	    printf("%d\t%s\t%d\t%d年%d月%d日\t%s\t%s\t%.2f\n",stu[j].num,stu[j].name,stu[j].age,stu[j].year,stu[j].month,stu[j].day,stu[j].clas,stu[j].sex,stu[j].C_score);
	}
 } 
void AdLogin()
{
    printf("请输入管理员密码:\n");
    char password[18];
    getPassword:
    scanf("%s", password);
    if (strcmp(password, "goodluck") == 0)
    {
        printf("密码正确\n");
        isAdmin = true;

    } 
	else
    {
        printf("密码错误 \n 请重新输入:\n");
    }
}
 //清屏
 void clea()
 {
 	system("cls");
 } 
 
 
//学生功能 
void set1()
{
    system("color F0");//变色、白底黑字
     
    welcome1(); 
} 
 
 
/*------------ 
 学生欢迎界面
-------------*/
 
void welcome1()
{
    //显示当前Windows时间 

      
    printf("\n\n");
    printf("\n\n\n\t\t\t\t\t\t");
    printf(" 欢");
    Sleep(120);
    printf(" 迎");
    Sleep(120);
    printf(" 本");
    Sleep(120);
    printf(" 管");
    Sleep(120);
    printf(" 理");
    Sleep(120);
    printf(" 平");
    Sleep(120);
    printf(" 台");
    Sleep(120);
    printf(" ！");
    Sleep(1000);
    printf("\n");
    system("cls");
     
    menu1(); //用户菜单 
     
}


void menu4()
{
    printf("\n\n\n");
	printf("\t\t\t\t\t   ╭ ⺌ ╮                     ╭ ```╮  \n");
    printf("\t\t\t\t\t   (@^o^@) 学生信息管理管理系统  (⌒:⌒)\n");
    printf("\t\t\t\t\t   (~):(~)                       (~)v(~) \n");
    printf("\n\n");
    printf("\t\t\t\t   ╭═════════════════════════════════○●○●═══╮\n");
    printf("\t\t\t\t   │              奶茶店管理系统              │\n");
    printf("\t\t\t\t   ╰═══○●○●═════════════════════════════════╯\n");
    printf("\t\t\t\t   ┌────────────────────────────────────────-┐\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 1. 向老师留言         2. 查询学生信息      │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 3. 清屏               0. 返回主菜单        │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   └─────────────────────────────────────────┘\n");
}


void menu1()
{
	int chooses;         //用户输入的选择 
    int ture = 1;       //循环判断真假 
    printf("\n\n\n");
	printf("\t\t\t\t\t   ╭ ⺌ ╮                     ╭ ```╮  \n");
    printf("\t\t\t\t\t   (@^o^@) 学生信息管理管理系统  (⌒:⌒)\n");
    printf("\t\t\t\t\t   (~):(~)                       (~)v(~) \n");
    printf("\n\n");
    printf("\t\t\t\t   ╭═════════════════════════════════○●○●═══╮\n");
    printf("\t\t\t\t   │              奶茶店管理系统              │\n");
    printf("\t\t\t\t   ╰═══○●○●═════════════════════════════════╯\n");
    printf("\t\t\t\t   ┌────────────────────────────────────────-┐\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 1. 向老师留言         2. 查询学生信息      │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   │ 3. 清屏               0. 返回主菜单        │\n");
    printf("\t\t\t\t   │                                            │\n");
    printf("\t\t\t\t   └─────────────────────────────────────────┘\n");

	scanf("%d",&chooses);
    while(chooses)
	{ 
		if(chooses>=0&&chooses<=3)
		{      
        	switch(chooses)
        	{ 
				case 1:advice();break; 
				case 2:select1();break; 
				case 3:clea();break;  
				case 0:main();break;
				 
       		}
       	if(chooses==3)
			{
				menu4();
			} 
		    printf("\n");
		    printf("请选择功能(1-4)："); 
		    scanf("%d",&chooses);
	    }
		
		else 
		 {
		 	printf("\n"); 
		 	printf("请重新输入:");
		    scanf("%d",&chooses);
		 }
		
	}
}

void readadvice()
{
    FILE *fp;//文件指针
    char ch;
    fp=fopen("advice.txt","r+");//写入文件信息
    printf("\n\n====================================  建 议 箱==================================\n\n\n");
    if(fp!=NULL)
    {
        ch=fgetc(fp);
        while(ch!=EOF)
            {
                printf("%c",ch);
                ch=fgetc(fp);
            }
    }
    else{
        printf("fail to open!\n");
    }
    fclose(fp);
    printf("\n");
    system("pause");
    system("cls");
    menu();
}
void advice()
{
    FILE *fp;//文件指针
    char ch;
    char s;
    fp=fopen("advice.txt","a+");//写入文件信息
    printf("\n\n==================================== 建 议 箱==================================\n\n\n");
    if(fp!=NULL)
    {
        printf("请写下您的建议：(以\"#\"结尾)\n");
        ch=getchar();
        while(ch!='#')
        {
            fputc(ch,fp);
            putchar(ch);
            ch=getchar();
        }
        printf("\n留言成功");
    }
    else{
        printf("fail to open!\n");
    }
    fclose(fp);
    printf("\n");
    system("pause");
    system("cls");
    menu4();
}
 
