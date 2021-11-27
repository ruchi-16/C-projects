 #include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[20];
	int sub[5];
	float perc,total;
	int clas;
	char sect;	
};

int main()
{
	 int countp=0,countf=0;
	 
 struct student s[5];

 for(int a=0;a<5;a++)
 {



printf("enter the roll no\n");
scanf("%d",&s[a].rollno);
fflush(stdin);
printf("enter name");
gets(s[a].name);
printf("enter the class");
scanf("%d",&s[a].clas);
fflush(stdin);
printf("enter the section");
scanf("%c",&s[a].sect);

for(int i=0;i<5;i++)

{
printf("enter the marks\n");
scanf("%d",&s[a].sub[i]);	
if(100>=s[a].sub[i] && s[a].sub[i]>=75)
		{
			printf("GRADE : A\n");
		}
		else if(74>=s[a].sub[i] && s[a].sub[i]>=50)
		{
			printf("GRADE : B\n");
		}
			if(49>=s[a].sub[i] && s[a].sub[i]>=33)
		{
			printf("GRADE : C\n");
		}
			if(32>=s[a].sub[i] && s[a].sub[i]>=0)
		{
			printf("GRADE : D\n");
		}
}
s[a].total=0;
for(int j=0;j<5;j++)
{
	s[a].total=s[a].total+s[a].sub[j];
}
s[a].perc= (s[a].total/5);
        puts(s[a].name);
		printf("roll no.=%d\n",s[a].rollno);
		printf("mathematics : %d\n",s[a].sub[0]);
		printf("english : %d\n",s[a].sub[1]);
		printf("hindi : %d\n",s[a].sub[2]);
		printf("science : %d\n",s[a].sub[3]);
		printf("social studies : %d\n",s[a].sub[4]);
		printf("total : %f\n",s[a].total);
		printf("percentage : %f\n",s[a].perc);
		int count=0;

for(int k=0;k<5;k++)
{
	if(s[a].sub[k]<33)
	{
		count++;
		
	}
}
if(count>=3)
{
	printf("FAIL\n");
	countf++;
}
else if(count==0)
{
	printf("PASS\n");
	countp++;
}
else 
{
	for(int q=0;q<5;q++)
	{
		if(s[a].sub[q]<33)
		{
			printf("SUPPLEMENTARY : %d\n",s[a].sub[q]);
		
		}
	}
}
        if(100>=s[a].perc && s[a].perc>=75)
		{
			printf("GRADE : A\n");
		}
		else if(74>=s[a].perc && s[a].perc>=50)
		{
			printf("GRADE : B\n");
		}
			else if(49>=s[a].perc && s[a].perc>=33)
		{
			printf("GRADE : C\n");
		}
			else if(32>=s[a].perc && s[a].perc>=0)
		{
			printf("GRADE : D\n");
		}
	}
	printf("PASS STUDENTS: %d\n",countp);
	printf("SUPPLEMENTARY STUDENTS:%d\n",5-(countp+countf));
	printf("FAIL STUDENTS:%d\n",countf);
		return 0;
	}