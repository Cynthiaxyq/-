#include <stdio.h>
#include<string.h>
#include <stdlib.h> 
#define LEN sizeof(struct student)
#include <windows.h>
#include <conio.h>
#include <time.h>
//ѧ����Ϣ�ṹ�� 
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
//��ʼ������
void set();//����Ա
void set1();//�û� 

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
     
    int studentChoose;//ѡ���½��ʽ 
    int flag = 1;//�ж� 
     
    while (flag == 1)
    {
        printf("\t\t\t\t\t   �q �] �r                     �q ```�r  \n");
        printf("\t\t\t\t\t   (@^o^@) ѧ����Ϣ�������ϵͳ(��:��)\n");
        printf("\t\t\t\t\t   (~):(~)                     (~)v(~) \n");
        printf("%70s","\t\t������������������������������\n");
        printf("%66s","[ 1.����Ա��½  ]\n"); 
        printf("%66s","[ 2.ѧ����½    ]\n");
        printf("%70s","\t\t������������������������������\n");
        printf("��ѡ��");
         
        scanf("%d",&studentChoose); 
 
       
        switch(studentChoose)
        {
        	case 1://����Ա
				AdLogin();
        		if (isAdmin == true)
        		set() ;
       			break;
         
        	case 2://ѧ��
            	set1();
            	break;
            
			      
        	default:
            	printf("�����������������\n");
            	system("pause");
            	system("cls"); 
            break; 
         
        }   
     
    }
     
    printf("\n");
    system("pause");
    return 0;
}

//Ŀ¼ 
void set()
{
    system("color F0");//��ɫ���׵׺���
     
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
 �û���ӭ����
-------------*/
 
void welcome()
{
 
      
    printf("\n\n");
    printf("\n\n\n\t\t\t\t\t\t");
    printf(" ��");
    Sleep(120);
    printf(" ӭ");
    Sleep(120);
    printf(" ��");
    Sleep(120);
    printf(" ��");
    Sleep(120);
    printf(" ��");
    Sleep(120);
    printf(" ��");
    Sleep(120);
    printf(" ��");
    Sleep(120);
    printf(" ƽ");
    Sleep(120);
    printf(" ̨");
    Sleep(120);
    printf(" ��");
    Sleep(1000);
    printf("\n");
    system("cls");
     
    menu(); //�û��˵� 
     
}

void menu3()
{
	
	printf("\t\t\t\t\t   �q �] �r                     �q ```�r  \n");
    printf("\t\t\t\t\t   (@^o^@) ѧ����Ϣ�������ϵͳ(��:��)\n");
    printf("\t\t\t\t\t   (~):(~)                     (~)v(~) \n");
    printf("\n\n");
    printf("\t\t\t\t   �q�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�����T�T�T�r\n");
    printf("\t\t\t\t   ��              ѧ����Ϣ����ϵͳ              ��\n");
    printf("\t\t\t\t   �t�T�T�T�����T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�s\n");
	printf("\t\t\t\t   ��������������������������������������������������������������������������������������-��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 1. ¼��ѧ����Ϣ         2. ɾ��ѧ����Ϣ    ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 3. �޸�ѧ����Ϣ         4. ��ѯѧ����Ϣ    ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 5. ��ʾѧ����Ϣ         6. ����ѧ����Ϣ    ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 7. �鿴������           8. ����ͳ�Ƴɼ�    ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 9. ����                 0. ����������      ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   ������������������������������������������������������������������������������������������\n");
}

void menu()
{
	int choose;         //�û������ѡ�� 
    int ture = 1;       //ѭ���ж���� 
    	
	printf("\t\t\t\t\t   �q �] �r                     �q ```�r  \n");
    printf("\t\t\t\t\t   (@^o^@) ѧ����Ϣ�������ϵͳ(��:��)\n");
    printf("\t\t\t\t\t   (~):(~)                     (~)v(~) \n");
    printf("\n\n");
    printf("\t\t\t\t   �q�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�����T�T�T�r\n");
    printf("\t\t\t\t   ��              ѧ����Ϣ����ϵͳ              ��\n");
    printf("\t\t\t\t   �t�T�T�T�����T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�s\n");
	printf("\t\t\t\t   ��������������������������������������������������������������������������������������-��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 1. ¼��ѧ����Ϣ         2. ɾ��ѧ����Ϣ    ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 3. �޸�ѧ����Ϣ         4. ��ѯѧ����Ϣ    ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 5. ��ʾѧ����Ϣ         6. ����ѧ����Ϣ    ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 7. �鿴������           8. ����ͳ�Ƴɼ�    ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 9. ����                 0. ����������      ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   ������������������������������������������������������������������������������������������\n");
	printf("\n");
	printf("��ѡ����(0-9)��"); 
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
		    printf("��ѡ����(0-9)��"); 
		    scanf("%d",&choose);
	    }
		
		else 
		 {
		 	printf("\n"); 
		 	printf("����������:");
		    scanf("%d",&choose);
		 }
		
	}
}

//¼��ѧ����Ϣ 
void in()
{
	void print();
	FILE *fp;
	int i, m=0;
	char ch[2];
	char sex1[2];
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
	   	printf("�ļ���ʧ��\n");
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
	 	printf("�ļ�û������\n");
	}
	else 
	{
	  	print();
	}				
 	if((fp=fopen("stu.txt","ab+"))==NULL)
  	{
   		printf("�ļ���ʧ��\n");
   		return; 
  	}
	printf("����ѧ����Ϣ(y/n);\n");
 	scanf("%s",ch);
 	while(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
 	{  
    	printf("number:\n");
 		scanf("%d",&stu[m].num);
 		for(i=0;i<m;i++)
 		{
			if(stu[i].num==stu[m].num)
			{
				printf("������Ϣ�Ѵ���\n");
				fclose(fp); 
				getchar();
				return;
			}
		}
		printf("name:\n");
		scanf("%s",stu[m].name);
		
		printf("������༶:\n");
		printf("��ʽ��x��\n");
		scanf("%s",stu[m].clas);
		printf("sex:\n");
		scanf("%s",sex1);
		if(strcmp(sex1,"��")==0||strcmp(sex1,"Ů")==0)
		{
			strcpy(stu[i].sex, sex1);
		
		}
		else
		{
			printf("�������\n");
			getchar();
			continue;
		}
		printf("������ѧ��������ݣ�\n");
		
		scanf("%d.%d.%d",&stu[m].year,&stu[m].month,&stu[m].day);
		if(stu[m].year>=2013 || stu[m].year<1950)
		{
			printf("�����������������\n");
			continue; 
		}
		else if(stu[m].month>13 || stu[m].month<1)
		{
			printf("�����������������\n");
			continue; 
		}
		
		else if(stu[m].month==1,3,5,7,8,10,12 && (stu[m].day>31 || stu[m].day<1))
		{
			printf("�����������������\n");
			continue; 
		}
		else if (stu[m].month==2 && (stu[m].day>28 || stu[m].day<1) ) 
		{
			printf("�����������������\n");
			continue; 
		}
		else if (stu[m].month==4,6,9,11 && (stu[m].day>30 || stu[m].day<1) ) 
		{
			printf("�����������������\n");
			continue; 
		}
	
		printf("age:\n");
		scanf("%d",&stu[i].age);
		int num ;
        num = cmptime(stu[m].year, stu[m].month, stu[m].day) / 31536000; 
        if (stu[i].age != num)
        {
        	printf("�����������");
        	continue; 
		}

		printf("C_score:\n");
		scanf("%f",&stu[m].C_score);
	  	if(fwrite(&stu[m],LEN,1,fp)!=1)
	  	{
	  		printf("���ܱ���\n");
	    	getchar(); 
	  	}	 
	  	else
	  	{
	   		printf("��Ϣ����ɹ�\n");
	   		
	   		m++;
	  	}
		printf("�Ƿ����¼��ѧ����Ϣ(y/n)��");
		scanf("%s",ch); 
	}
	fclose(fp);
} 
 
//ɾ��ѧ����Ϣ 
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
		printf("�ļ���ʧ��\n");
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
		printf("�ļ���û��ѧ����Ϣ\n");
	}
	else
	{
		print();
	    printf("��������Ҫɾ��ѧ����Ϣ��ѧ�ţ�");
	    scanf("%d",&num); 
	}
	for(i=0;i<m;i++)    
	{
		if(stu[i].num==num)
		{
			printf("��ѧ�����ҵ����Ƿ�ɾ��(y/n):");
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
					printf("�ļ���ʧ��\n");
					return;
				}
				for(j=0;j<m;j++)
				{
					if(fwrite(&stu[j],LEN,1,fp)!=1)
					{
						printf("���ܱ���\n");
						getchar();
					}
				}
				fclose(fp);
				printf("ɾ���ɹ���\n");break;
				
			}
			else
			{
			   printf("ѧ����Ϣ���ڣ�����Ҫɾ����");
			   break; 
		    }
		}
	 		
	}
	if(m==i&&flag==0) 
	{
		printf("δ�ҵ���ѧ��");	
	}
	
}
//�޸�ѧ����Ϣ 
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
		printf("�ļ���ʧ��\n");
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
		printf("�ļ���û��ѧ����Ϣ\n");
	} 
	else
	{
	 	print();
	 	printf("��������Ҫ�޸�ѧ����Ϣ��ѧ�ţ�");
	 	scanf("%d",&num); 
	}
	for(i=0;i<m;i++)
	{
	 	if(num==stu[i].num)
	 	{
	      printf("1:ѧ�ţ�2:������3:�༶��4:�Ա�5:C���Գɼ�  ,6:�������ں�����\n");
		  printf("��ѧ���ѱ��ҵ�����ѡ����Ҫ�޸ĵ�����(1-5)��");		  
		  scanf("%d",&a);
		  while(a)
		  { 		 
			  switch (a) 
			  {
			  	
			  	case 1:
			  		printf("��%dѧ����ѧ���޸�Ϊ��",num); 
			  		scanf("%d",&num);
					stu[i].num=num;
					for(j=i+1;j<m;j++)
					{
						if(stu[j].num==num)
						{
							printf("���޸ĵ�ѧ���Ѵ���\n");
							getchar();
							return;
						}
					}   
			  		break;
			  	case 2:
				  	printf("��%dѧ���������޸�Ϊ��",num); 
				  	scanf("%s",name);
				  	strcpy(stu[i].name,name);
				  	break;	
			  	case 3:
			  		printf("��%dѧ���İ༶�޸�Ϊ��",num); 
			  		scanf("%s",clas);
			  		strcpy(stu[i].clas,clas);
			  		break;
			  	case 4:
			  		printf("��%dѧ�����Ա��޸�Ϊ��",num); 
			  		scanf("%s",sex);
			  		if(strcmp(sex,"��")==0||strcmp(sex,"Ů")==0)
						{
							strcpy(stu[i].sex,sex);   
		
						}
					else
						{
							printf("�������\n");
							getchar();
							continue;
						}  
			  		break;
				case 5:
			  		printf("��%dѧ����C���Գɼ��޸�Ϊ��\n",num);
					scanf("%f",&C_score);
					stu[i].C_score=C_score;
			  		break;	 
				case 6:
					printf("��%dѧ���ĳ��������޸�Ϊ��\n",num);
					scanf("%d.%d.%d",&Y,&M,&D);
					if(Y>2013 || Y<1950)
					{
						printf("�����������������\n");
						continue; 
					}
					else if(M>13 || M<1)
					{
						printf("�����������������\n");
						continue; 
					}	
			
					else if(M==1,3,5,7,8,10,12 && (D>31 || D<1))
					{
						printf("�����������������\n");
						continue; 
					}
					else if (M==2 && (D>28 || D<1) ) 
					{
						printf("�����������������\n");
						continue; 
					}
					else if (M==4,6,9,11 && (D>30 || D<1) ) 
					{
						printf("�����������������\n");
						continue; 
					}
	
					printf("��%dѧ���������޸�Ϊ��",num);
					scanf("%d",&ag);
					int num1 ;
       				num1 = cmptime(Y, M, D) / 31536000; 
        			if (ag != num1)
       				 {
        				printf("�����������");
        				continue; 
					}
					else
					{
						stu[i].year=Y;stu[i].month=M; stu[i].day=D;stu[i].age=ag;
						break;
					}	  	  	
			  	default:
			  	    printf("ѡ�����������ѡ����Ҫ�޸ĵ����ݣ�");
					scanf("%d",&a);   
			  		break;
			    }
			  
			  printf("��ѡ����Ҫ�޸ĵ�����(������޸�����밴0)��");
			  scanf("%d",&a);
		    }
			if((fp=fopen("stu.txt","wb"))==NULL)
				{
					printf("�ļ���ʧ��\n");
					return;
				}
				for(j=0;j<m;j++)
				{
					if(fwrite(&stu[j],LEN,1,fp)!=1)
					{
						printf("���ܱ���\n");
						getchar();
					}
				}
				fclose(fp);
				printf("�޸ĳɹ���\n");
				break;	 	
	    }
    }
    if(m==i)
    {
    	printf("δ�ҵ���ѧ��\n"); 
	}
}
//��ѯѧ����Ϣ 
void select()
{
	int num,m=0;
	int i;
	FILE *fp;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("�ļ���ʧ��\n");
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
		printf("�ļ�û������\n");
		return;
	}	 
	printf("������ѧ��ѧ�Ž��в�ѯ��");
	scanf("%d",&num);
	for(i=0;i<m;i++)
	{
		if(num==stu[i].num)
		{
			printf("\n");
			printf("��ѧ����Ϣ�ѱ��鵽��\n");
			printf("ѧ��\t����\t����\t��������\t�༶\t�Ա�\tC���Գɼ�\n");
			printf("%d\t%s\t%d\t%d��%d��%d��\t%s\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].age,stu[i].year,stu[i].month,stu[i].day,stu[i].clas,stu[i].sex,stu[i].C_score); 
			break; 
		}		
	}
	if(m==i)
	{
		printf("��ѧ����Ϣ������\n");
		return;
	}  
}
//ѧ����ѯ
void select1()
{
	int num,m=0;
	int i;
	FILE *fp;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("�ļ���ʧ��\n");
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
		printf("�ļ�û������\n");
		return;
	}	 
	printf("������ѧ��ѧ�Ž��в�ѯ��");
	scanf("%d",&num);
	for(i=0;i<m;i++)
	{
		if(num==stu[i].num)
		{
			printf("\n");
			printf("��ѧ����Ϣ�ѱ��鵽��\n");
			printf("ѧ��\t����\t�༶\t�Ա�\n");
			printf("%d\t%s\t%s\t%s\n",stu[i].num,stu[i].name,stu[i].clas,stu[i].sex); 
			break; 
		}		
	}
	if(m==i)
	{
		printf("��ѧ����Ϣ������\n");
		return;
	}  
} 
//��ʾѧ����Ϣ 
void print()
{ 	
    int i,m=0;
	FILE *fp;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("�ļ���ʧ��\n");
   	    return; 
	}
    while(!feof(fp))
 	{
 		if(fread(&stu[m],LEN,1,fp)==1)m++;
    }
    fclose(fp);
    if(m==0)
    {
  		printf("�ļ���û������\n");
    } 
   printf("ѧ��\t����\t����\t��������\t�༶\t�Ա�\tC���Գɼ�\n"); 
   for(i=0;i<m;i++)
   {
   	printf("%d\t%s\t%d\t%d��%d��%d��\t%s\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].age,stu[i].year,stu[i].month,stu[i].day,stu[i].clas,stu[i].sex,stu[i].C_score);
   }
}

 
//���� 
void sort()
{
	  int i,j,m=0;
	  int ch;
	  FILE *fp;
	  struct student  temp;
	  if((fp=fopen("stu.txt","rb"))==NULL)
	  {
	   printf("�ļ���ʧ��\n");
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
	  	printf("�ļ���û������\n");
	  }
		printf("1:ѧ������2:C��������\n"); 
	   printf("��ѡ����ʾ��ʽ��");
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
   printf("ѧ��\t����\t����\t��������\t�༶\t�Ա�\tC���Գɼ�\n");
   for(i=0;i<m;i++)
   {
   	printf("%d\t%s\t%d\t%d��%d��%d��\t%s\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].age,stu[i].year,stu[i].month,stu[i].day,stu[i].clas,stu[i].sex,stu[i].C_score);
   }
	    
}

//����ͳ��
void cut()
{
	int i,j;
	float n;
	FILE *fp;
	int m=0;
	if((fp=fopen("stu.txt","rb"))==NULL)
		  {
		   printf("�ļ���ʧ��\n");
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
		  	printf("�ļ���û������\n");
		  }
	printf("�����밴�ɼ������ֵ��");
	scanf("%f",&n);
	printf("�ܳɼ�����%.2f��ͬѧ�У�\n",n);
	printf("ѧ��\t����\t����\t��������\t�༶\t�Ա�\tC���Գɼ�\n");
    for(i=0;i<m;i++)
    {
    	if(stu[i].C_score>=n)
	    printf("%d\t%s\t%d\t%d��%d��%d��\t%s\t%s\t%.2f\n",stu[i].num,stu[i].name,stu[i].age,stu[i].year,stu[i].month,stu[i].day,stu[i].clas,stu[i].sex,stu[i].C_score);
	}
	printf("�ɼ�С��%.2f��ͬѧ�У�\n",n);
	printf("ѧ��\t����\t����\t��������\t�༶\t�Ա�\tC���Գɼ�\n");
	
	for(j=0;j<m;j++)
    {
    	if(stu[j].C_score<n)
	    printf("%d\t%s\t%d\t%d��%d��%d��\t%s\t%s\t%.2f\n",stu[j].num,stu[j].name,stu[j].age,stu[j].year,stu[j].month,stu[j].day,stu[j].clas,stu[j].sex,stu[j].C_score);
	}
 } 
void AdLogin()
{
    printf("���������Ա����:\n");
    char password[18];
    getPassword:
    scanf("%s", password);
    if (strcmp(password, "goodluck") == 0)
    {
        printf("������ȷ\n");
        isAdmin = true;

    } 
	else
    {
        printf("������� \n ����������:\n");
    }
}
 //����
 void clea()
 {
 	system("cls");
 } 
 
 
//ѧ������ 
void set1()
{
    system("color F0");//��ɫ���׵׺���
     
    welcome1(); 
} 
 
 
/*------------ 
 ѧ����ӭ����
-------------*/
 
void welcome1()
{
    //��ʾ��ǰWindowsʱ�� 

      
    printf("\n\n");
    printf("\n\n\n\t\t\t\t\t\t");
    printf(" ��");
    Sleep(120);
    printf(" ӭ");
    Sleep(120);
    printf(" ��");
    Sleep(120);
    printf(" ��");
    Sleep(120);
    printf(" ��");
    Sleep(120);
    printf(" ƽ");
    Sleep(120);
    printf(" ̨");
    Sleep(120);
    printf(" ��");
    Sleep(1000);
    printf("\n");
    system("cls");
     
    menu1(); //�û��˵� 
     
}


void menu4()
{
    printf("\n\n\n");
	printf("\t\t\t\t\t   �q �] �r                     �q ```�r  \n");
    printf("\t\t\t\t\t   (@^o^@) ѧ����Ϣ�������ϵͳ  (��:��)\n");
    printf("\t\t\t\t\t   (~):(~)                       (~)v(~) \n");
    printf("\n\n");
    printf("\t\t\t\t   �q�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�����T�T�T�r\n");
    printf("\t\t\t\t   ��              �̲�����ϵͳ              ��\n");
    printf("\t\t\t\t   �t�T�T�T�����T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�s\n");
    printf("\t\t\t\t   ����������������������������������������������������������������������������������-��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 1. ����ʦ����         2. ��ѯѧ����Ϣ      ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 3. ����               0. �������˵�        ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   ��������������������������������������������������������������������������������������\n");
}


void menu1()
{
	int chooses;         //�û������ѡ�� 
    int ture = 1;       //ѭ���ж���� 
    printf("\n\n\n");
	printf("\t\t\t\t\t   �q �] �r                     �q ```�r  \n");
    printf("\t\t\t\t\t   (@^o^@) ѧ����Ϣ�������ϵͳ  (��:��)\n");
    printf("\t\t\t\t\t   (~):(~)                       (~)v(~) \n");
    printf("\n\n");
    printf("\t\t\t\t   �q�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�����T�T�T�r\n");
    printf("\t\t\t\t   ��              �̲�����ϵͳ              ��\n");
    printf("\t\t\t\t   �t�T�T�T�����T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�s\n");
    printf("\t\t\t\t   ����������������������������������������������������������������������������������-��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 1. ����ʦ����         2. ��ѯѧ����Ϣ      ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   �� 3. ����               0. �������˵�        ��\n");
    printf("\t\t\t\t   ��                                            ��\n");
    printf("\t\t\t\t   ��������������������������������������������������������������������������������������\n");

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
		    printf("��ѡ����(1-4)��"); 
		    scanf("%d",&chooses);
	    }
		
		else 
		 {
		 	printf("\n"); 
		 	printf("����������:");
		    scanf("%d",&chooses);
		 }
		
	}
}

void readadvice()
{
    FILE *fp;//�ļ�ָ��
    char ch;
    fp=fopen("advice.txt","r+");//д���ļ���Ϣ
    printf("\n\n====================================  �� �� ��==================================\n\n\n");
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
    FILE *fp;//�ļ�ָ��
    char ch;
    char s;
    fp=fopen("advice.txt","a+");//д���ļ���Ϣ
    printf("\n\n==================================== �� �� ��==================================\n\n\n");
    if(fp!=NULL)
    {
        printf("��д�����Ľ��飺(��\"#\"��β)\n");
        ch=getchar();
        while(ch!='#')
        {
            fputc(ch,fp);
            putchar(ch);
            ch=getchar();
        }
        printf("\n���Գɹ�");
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
 
