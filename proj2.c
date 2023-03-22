#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define clrscr();
int su1(char us[][50],char username[])
{
    int flag=0, i;
    for(i=0;i<3;i++)
    {
        flag=strcmp(us[i],username);
        if(flag==0)
       {
        return i;
        break;
       }
    }
    if (flag!=0)
    return -1;
}
int su(char us[][50],char username[])
{
        int flag=0,i;
        for(i=0;i<7;i++)
        {
            flag=strcmp(us[i],username);
            if(flag==0)
            {
                return i;
                break;
            }
        }
        if (flag!=0)
        return -1;
        
}

int MO_DIFY()
{
  printf(" ");
}
int VE_RIFY()
{
    char ch;
    system("cls");
	FILE*fp;
	fp=fopen("new.data","r");
	if (fp==NULL)
	{
		perror("fopen(): ");
		exit(-1);
	}
	while(1)
	{
		ch=getc(fp);
		if (ch==EOF)
		break;
		putchar(ch);
	}
	fclose(fp);
}
int STU_COUNT()
{
    int a;
    system("cls");
	printf("\n\n\t\t\t\tSTUDENT COUNT\n\n");
	printf("\n\n1. UG courses\n");
	printf("2. PG courses\n");
	printf("\n\n\n\n\n Enter the number: ");
	scanf("%d",&a);
	if(a==1)
	{
		system("cls");
		printf("\n\n UG COURSES & INTAKE APPROVED BY AICTE - 2021-22\n");
    	printf("_____________________________________________________________________________________________________________________\n");
    	printf("S.No          Course(s)                                 Approved Intake   No.of Students   No.of seats\n");
    	printf("                                                                          enrolled         available\n");
    	printf("_____________________________________________________________________________________________________________________\n");
    	printf(" 1        B.E-CIVIL ENGINEERING                            120                20              100\n");
    	printf(" 2        B.E-COMPUTER SCIENCE AND ENGINEERING             180                19              161\n");
    	printf(" 3        B.E-ELECTRICAL & ELECTRONICS ENGINEERING         120                0               120\n");
    	printf(" 4        B.E-ELECTRONICS & COMMUNICATION ENGINEERING      180                0               180\n");
    	printf(" 5        B.E-MECHANICAL ENGINEERING                       120                4               116\n");
    	printf(" 6        B.E-INFORMATION TECHNOLOGY                       180                35              145\n");
    	printf(" 7        B.TECH-CHEMICAL ENGINEERING                      60                 1               59\n");
    	printf(" 8        B.TECH-BIO TECHNOLOGY                            60                 0               60\n");
    	printf(" 9        B.E-ARTIFICIAL INTELLIGENCE AND DATA SCIENCE     120                16              104\n");
    	printf(" 10       B.E-COMPUTER SCIENCE AND ENGINEERING             60                 40              20\n");
    	printf("          (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)         \n");
    	printf(" 11       B.E-COMPUTER SCIENCE AND ENGINEERING             60                 20              40\n");
    	printf("          (INTERNET OF THINGS AND CUBER SECURITY               \n ");
    	printf("           INCLUDING BLOCK CHAIN TECHNOLOGY)                    \n");
    	printf(" 12       B.E-ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING 60                 12              48\n");
        printf("_____________________________________________________________________________________________________________________\n");
        printf("_____________________________________________________________________________________________________________________\n");
	}
	else if(a==2)
		{
			system("cls");
			printf("\n\n PG COURSES & INTAKE APPROVED BY AICTE - 2021-22\n");
    		printf("_____________________________________________________________________________________________________________________\n");
    		printf("S.No          Course(s)                                 Approved Intake    No.of Students   No.of seats\n");
    		printf("                                                                           approved         available\n");
    		printf("______________________________________________________________________________________________________________________\n");
    		printf(" 1       MBA(MASTER OF BUSINESS ADMINISTRATION)            120\n");
		    printf(" 2       MCA(MASTER OF COMPUTER APPLICATIONS)              60\n");
		    printf(" 3       ME-STRUCTURAL ENGINEERING(CIVIL)                  25\n ");
		    printf(" 4       ME-CAD/CAM(MECH)                                  25\n");
		    printf(" 5       M.TECH-CSE                                        24\n");
		    printf(" 6       ME-COMMUNICATION ENGINEERING(ECE)                 18\n");
		    printf(" 7       ME-POWER SYSTEMS & POWER ELECTRONICS(EEE)         18\n");
		    printf(" 8       ME-EMBEDDED SYSTEMS AND VLSI DESIGN(ECE)          18\n");
		    printf(" 9       ME-THERMAL ENGINEERING(MECH)                      18\n");
		    printf(" 10      M.TECH-ARTIFICIAL INTELLIGENCE AND DATA SCIENCE   18\n");
            printf("_____________________________________________________________________________________________________________________\n");
            printf("_____________________________________________________________________________________________________________________\n");
		}
        else
        printf("...INVALID CHOICE.........");
}
int FAC_INFO()
{
    int b;
    system("cls");
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t\t\t\t  ~~~WELOCOME~~~\n\n------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\n");
    printf("\n\n\t\t1. VERIFY DATA\n\n\t\t2.MODIFY DATA\n\n\t\t3.STUDENT COUNT\n");
    printf("\n\n ENTER YOUR CHOICE");
    scanf("%d",&b);
    switch(b)
    {
        case 1:VE_RIFY();break;
        case 2:MO_DIFY();break;
        case 3:STU_COUNT();break;
        default:printf("...INVALID CHOICE........");
        exit(-1);
    }
}
int STU_INFO(int a)
{ 
    char ch;
    system("cls");
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t\t\t\t  ~~~WELOCOME~~~\n\n------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\n");
	if(a==0)
    {
    FILE*fp;
	fp=fopen("studentinfo1","r");
	if (fp==NULL)
	{
		perror("fopen(): ");
		exit(-1);
	}
	while(1)
	{
		ch=getc(fp);
		if (ch==EOF)
		break;
		putchar(ch);
	}
	fclose(fp);
    }
}
int FAC_LOGIN()
{
    char us[3][50]={"Dr.M.SwamyDas","Dr.G.Vanitha","Dr.B.Bhargavi"};
    char user[50];
    char pwd[3][50]={"swamydas","gvanitha","bbhargavi"};
    char pass[100]; int n,b=0,k;
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t\t\t      ~~~FACULTY LOGIN~~~\n\n------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\n");
    do
    {
        n=0;
        printf("\nUSER ID\n");
        scanf("%s",&user);
        if (su1(us,user)!=0)
        {
            printf("\n\n----- USER ID NOT FOUND-----\n");
            n++;
        }
        else
        {
            do
            {
               k=0;
               printf("\nPASSWORD\n");
               int m=0;
               char pass[100];char ch;
               ch=getch();
               while(ch!=13)
               {
                  if(ch==8)
                  {
                      printf("\b");
                      ch=getch();m--;
                    }
                   else
                   {
                      printf("*");
                      pass[m]=ch;
                      ch=getch();
                      m++;
                    }
                }
                pass[m]='\0';
                b=strcmp(pass,pwd[su(us,user)]);
                if(b==0)
                FAC_INFO();
                else
                {   
                   printf("\n-----INCORRECT PASSWORD-----\nTRY AGAIN.....\n");
                   k++;
                }
            }
            while(k>0);
        }
    }
    while(n>0);
}
int GUEST_LOGIN()
{
    system("cls");
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t\t\t\t  ~~~WELOCOME~~~\n\n------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\n");
    printf("\n\t\tFILL YOUR APPLICATION FORM\n");
    FILE*fp1;
    fp1= fopen("varshith.txt", "w");
    if(fp1== NULL)
   {
       printf("Error!");
       return(-1);
   }
struct info 
{ char Name[15];
  char mobilenumber[11];
  char mothername[15];
  char fathername[15];
  char fathernumber[11];
  char fatherEmail[25];
  char Email[25];
  char Address[50];
  float TenthGPA;
  int interMarks;
};
//  int i=1;
  struct info s;
  printf("Enter your name: ");
  scanf("%s",s.Name);
  fprintf(fp1,"%s\n",s.Name);
  printf("Enter your mobile number: ");
  scanf("%s",s.mobilenumber);
  fprintf(fp1,"%s\n",s.mobilenumber);
  printf("Enter your mother name: ");
  scanf("%s",s.mothername);
  fprintf(fp1,"%s\n",s.mothername);
  printf("Enter your father name: ");
  scanf("%s",s.fathername);
  fprintf(fp1,"%s\n",s.fathername);
  printf("Enter your father number: ");
  scanf("%s",s.fathernumber);
  fprintf(fp1,"%s\n",s.fathernumber);
  printf("Enter your father Email: ");
  scanf("%s",s.fatherEmail);
  fprintf(fp1,"%s\n",s.fatherEmail);
  printf("Enter your Email: ");
  scanf("%s",s.Email);
  fprintf(fp1,"%s\n",s.Email);
	printf("Enter your Address: ");
	scanf("%s",s.Address);
  fprintf(fp1,"%s\n",s.Address);
  printf("Enter your 10th GPA: ");
  scanf("%f",&s.TenthGPA);
  fprintf(fp1,"%f\n",s.TenthGPA);
  printf("Enter your inter marks: ");
  scanf("%d",&s.interMarks);
  fprintf(fp1,"%d\n",s.interMarks);
  fclose(fp1);
  system("cls");
  printf("\t\t\t\t\t~~~ APPLICATION FORM ~~~\n");
  char ch;
	fp1=fopen("varshith.txt","r");
	if (fp1==NULL)
	{
		perror("fopen(): ");
		exit(-1);
	}
	while(1)
	{
		ch=getc(fp1);
		if (ch==EOF)
		break;
		putchar(ch);
	}
	fclose(fp1);
}
int STU_LOGIN()
{
        char us[7][50]={"2105101","2105105","2105112","2105113","2105127","2105137","2105158"};
        char user[50];
        char pwd[7][50]={"2105101","2105105","2105112","2105113","2105127","2105137","2105158"};
        char pass[100]; int n,b=0,k;
        printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t\t\t\t  ~~~LOGIN~~~\n\n------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\n");
        do
        {   
            n=0;
            printf("\nUSER ID : \n");
            //gets(user); 
            scanf("%s",&user);
            if (su(us,user)==-1)
            {
                printf("\n\n----- USER ID NOT FOUND-----\n");
                n++;
            }
            else
            {
                do
                {
                    k=0;
                    printf("\nPASSWORD\n");
                    int m=0;
                    char pass[100];char ch;
                    ch=getch();
                    while(ch!=13)
                    {
                        if(ch==8)
                        {
                            printf("\b");
                            ch=getch();m--;
                        }
                        else
                        {
                           printf("*");
                           pass[m]=ch;
                           ch=getch();
                           m++;
                        }
                    }
                    pass[m]='\0';
                    b=strcmp(pass,pwd[su(us,user)]);
                    if(b==0)
                    STU_INFO(su(us,user));
                    else
                    {   
                        printf("\n-----INCORRECT PASSWORD-----\nTRY AGAIN.....\n");
                        k++;
                    }
                } 
                while(k>0);
            }
        }
        while(n>0);
}
int Login()
{
    int k;
    system("cls");
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\t\t\t\t\t\t  ~~~LOGIN~~~\n\n------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\n");
    printf("\t\t 1.STUDENT LOGIN\n\n\t\t 2.FACULTY LOGIN\n\n\t\t 3.GUEST LOGIN\n\nENTER YOUR LOGIN CHOICE");
    scanf("%d",&k);
    switch(k)
    {
        case 1:STU_LOGIN();break;
        case 2:FAC_LOGIN();break;
        case 3:GUEST_LOGIN();break;
        default:printf("...INVALID CHOICE........");
        exit(-1);
    }
}
int ug()
{
    system("cls");
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t ~ ~ ~ UG COURSES AND INTAKE APPROVED BY AICTE:2021-2022 ~ ~ ~\n------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\t\t____________________________________________________________________________________________________\n\n\t\t  S.NO\t\t\tCOURSES\t\t\t\t\t\t\tINTAKE\n\t\t____________________________________________________________________________________________________\n\n");
    printf("\t\t   1.\t\t\tB.E-CIVIL ENGINEERING\t\t\t\t\t  120\n\t\t_____________________________________________________________________________________________________\n\n\t\t   2.\t\t\tB.E-COMPUTER SCIENCE AND ENGINEERING\t\t\t  180\n\t\t_____________________________________________________________________________________________________\n\n\t\t   3.\t\t\tB.E-ELECTRICAL & ELECTRONICS ENGINEERING\t\t  120\n\t\t_____________________________________________________________________________________________________\n\n\t\t   4.\t\t\tB.E-ELECTRONICS & COMMUNICATION ENGINEERING\t\t  180\n\t\t_____________________________________________________________________________________________________\n\n\t\t   5.\t\t\tB.E-MECHANICAL ENGINEERING\t\t\t\t  120\n\t\t_____________________________________________________________________________________________________\n\n\t\t   6.\t\t\tB.E-INFORMATION TECHNOLOGY\t\t\t\t  180\n\t\t_____________________________________________________________________________________________________\n\n\t\t   7.\t\t\tB.TECH-CHEMICAL ENGINEERING\t\t\t\t   60\n\t\t_____________________________________________________________________________________________________\n\n\t\t   8.\t\t\tB.TECH-BIO TECHNOLOGY\t\t\t\t\t   60\n\t\t_____________________________________________________________________________________________________\n\n\t\t   9.\t\t\tB.E-ARTIFICIAL INTELLIGENCE AND DATA SCIENCE\t\t   120\n\t\t_____________________________________________________________________________________________________\n\n\t\t   10.\t\t\tB.E-COMPUTER SCIENCE AND ENGINEERING\t\t\t   60\n\t\t\t\t\t(ARTIFICIAL INTELLIGENCE AND MACHINE LEARN)\n\t\t_____________________________________________________________________________________________________\n\n\t\t   11.\t\t\tB.-COMPUTER SCIENCE AND ENGINEERING(INTERNET OF THINGS\t   60\n\t\t\t\t\tAND CYBER SECURITY INCLUDING BLOCK CHAIN TECHNOLOGY)\n\t\t_____________________________________________________________________________________________________\n\n\t\t   12.\t\t\tB.E-ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING\t   60\n\t\t_____________________________________________________________________________________________________\n");
    return 0;
}
int pg()
{
    system("cls");
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t ~ ~ ~ PG COURSES AND INTAKE APPROVED BY AICTE:2021-2022 ~ ~ ~\n------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\n\t\t____________________________________________________________________________________________________\n\n\t\t  S.NO\t\t\tCOURSES\t\t\t\t\t\t\tINTAKE\n\t\t____________________________________________________________________________________________________\n\n");
    printf("\t\t   1.\t\t\tM.B.A(MASTER OF BUSINESS ADMINISTRATION)\t\t 120\n\t\t_____________________________________________________________________________________________________\n\n\t\t   2.\t\t\tM.C.A(MASTER OF COMPUTER APPLICATIONS\t\t\t 60\n\t\t_____________________________________________________________________________________________________\n\n\t\t   3.\t\t\tM.E-STRUCTURAL ENGINEERING (CIVIL)\t\t\t 25\n\t\t_____________________________________________________________________________________________________\n\n\t\t   4.\t\t\tM.E-CAD / CAM (MECH)\t\t\t\t\t 25\n\t\t_____________________________________________________________________________________________________\n\n\t\t   5.\t\t\tM.TECH-CSE\t\t\t\t\t\t 24\n\t\t_____________________________________________________________________________________________________\n\n\t\t   6.\t\t\tM.E-COMMUNICATION ENGINEERING (ECE)\t\t\t 18\n\t\t_____________________________________________________________________________________________________\n\n\t\t   7.\t\t\tM.E-POWER SYSTEMS & POWER ELECTRONICS (EEE)\t\t 18\n\t\t_____________________________________________________________________________________________________\n\n\t\t   8.\t\t\tM.E-EMBEDDED SYSTEMS AND VLSI DESIGN (ECE)\t\t 18\n\t\t_____________________________________________________________________________________________________\n\n\t\t   9.\t\t\tM.E-THERMAL ENGINEERING (MECH)\t\t\t\t 18\n\t\t_____________________________________________________________________________________________________\n\n\t\t   10.\t\t\tM.TECH-ARTIFICIAL INTELLIGENCE AND DATA SCIENCE\t\t 18\n\t\t_____________________________________________________________________________________________________\n");  
    return 0;
}
int eligibility()
{
    printf(" ");
}
int fees()
{
    printf(" ");
}
int contact()
{
    printf(" ");
}
int main()
{
    int n;
    system("cls");
    printf("\t\t\t\t\t    ******     *****    *********   *********\n\t\t\t\t\t   *      *   *     *       *           *\n");
    for(int i=0;i<3;i++)
    printf("\t\t\t\t\t   *          *     *       *           *\n");
    printf("\t\t\t\t\t   *          ******        *           *\n");
    for(int i=0;i<3;i++)
    printf("\t\t\t\t\t   *          *     *       *           *\n");
    printf("\t\t\t\t\t   *      *   *     *       *           *\n\t\t\t\t\t    ******     *****    *********       *\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n\t\t\t\t\t     ~~~ WELCOME  TO  ADMISSIONS  FOLIO ~~~\t\t\t     | 0.LOGIN |\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t1.UG Courses\n\t2.PG Courses\n\t3.Eligibility\t\t\tWhy CBIT?\n\t4.Fee Structure\n\t5.Contact Us\t\t\tA course can change the course of your life. And when it comes to CBIT,\n\t\t\t\t\tour top-of-the-line Engineering courses and Management Sciences ensure\n\t\t\t\t\tnothing less than a promising tomorrow. We strive to make our students\n\t\t\t\t\tthe crème de la crème through our innovative industry based teaching\n\t\t\t\t\tmethodologies.The reason we believe in giving our students practical\n\t\t\t\t\tknowledge and real-world exposure, is because that makes them better\n\t\t\t\t\tequipped to pursue their dream careers.\n");
    printf("\n\n\n\n\t  College Contact Info\n\n\t  Gandipet, Hyderabad, Telangana,\n\t  PIN : 500075\n\t  Phone: 040-24193276\n\t  Mobile: 8466997201\n\t  For Admissions Enquiry: 8466997216\n\t  Email: principal@cbit.ac.in\n");
    printf("\n\nEnter the option(please enter number)\n");
    scanf("%d",&n);
    switch(n)
    {
        case 0: Login();break;
        case 1: ug();break;
        case 2: pg();break;
        default:printf("....IN CASE OF INVALID INPUT\n"); 
        exit(-1);
    }
}
