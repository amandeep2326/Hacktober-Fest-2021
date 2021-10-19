//21-07-2021
//2k20-a11-03
//Siddharth Garg
//CO MID SEM PROJECT
#include<stdio.h>
#include<string.h>
#include<stdlib.h>//used for cls function
#define CLRSCR system(“cls”); 
#include <windows.h>//used for beep sound function
int input2;
char box1[3]="1",box2[3]="2",box3[3]="3",box4[3]="4",box5[3]="5",box6[3]="6",box7[3]="7",box8[3]="8",box9[3]="9";
char input1;
void nttt_board();
void playerno();
int wincondn();
int player=1,ii=-1;
int main()
{
	char a[3]="X1",b[3]="X2",c[3]="X3",d[3]="X4",e[3]="X5",f[3]="X6",g[3]="X7",h[3]="X8";//define outside so update--in loop
	char i[3]="O1",j[3]="O2",k[3]="O3",l[3]="O4",m[3]="O5",n[3]="O6",o[3]="O7",p[3]="O8";
	while(ii==(-1))
    {	
    
        system("cls");
	    printf("\t\t\t\t\t      NUMERICAL TIC TAC TOE\n");
		printf("\t\t\t\t\t\t__________________\n\n");
		printf("\t\t\t\t\t\t {Siddharth Garg}\n");
		printf("\t\t\t______________________________________________________________________\n\n");
		printf("\tAvailable Options-\n");
		printf("\tPlayer 1: %s %s %s %s %s %s %s %s\n",a,b,c,d,e,f,g,h);//put inside loop
		printf("\tPlayer 2: %s %s %s %s %s %s %s %s\n\n",i,j,k,l,m,n,o,p);
		printf("\tCodes-\n");
		printf("\tX1=a | X2=b | X3=c | X4=d | X5=e | X6=f | X7=g | X8=h\n");
		printf("\tO1=i | O2=j | O3=k | O4=l | O5=m | O6=n | O7=o | O8=p\n\n\n");
		nttt_board();
		playerno();
		fflush(stdin);
		scanf("%c",&input1);
		printf("\t");
		scanf("%d",&input2);
		//choice
		//box1
		if((input2==1)&&(box1[0]=='1')&&(input1=='a'||input1=='i'))
		{
			box1[1]='1';
			if(input1=='a')
			 box1[0]='X',a[0]='-',a[1]='-';
			else
			 box1[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==1)&&(box1[0]=='1'||box1[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box1[1]='2';
			if(input1=='b')
			 box1[0]='X',b[0]='-',b[1]='-';
			else
			 box1[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==1)&(box1[0]=='1'||box1[1]=='1'||box1[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box1[1]='3';
			if(input1=='c')
			 box1[0]='X',c[0]='-',c[1]='-';
			else
			 box1[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==1)&&(box1[0]=='1'||box1[1]=='1'||box1[1]=='2'||box1[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box1[1]='4';
			if(input1=='d')
			 box1[0]='X',d[0]='-',d[1]='-';
			else
			 box1[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==1)&&(box1[0]=='1'||box1[1]=='1'||box1[1]=='2'||box1[1]=='3'||box1[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box1[1]='5';
			if(input1=='e')
			 box1[0]='X',e[0]='-',e[1]='-';
			else
			 box1[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==1)&&(box1[0]=='1'||box1[1]=='1'||box1[1]=='2'||box1[1]=='3'||box1[1]=='4'||box1[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box1[1]='6';
			if(input1=='f')
			 box1[0]='X',f[0]='-',f[1]='-';
			else
			 box1[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==1)&&(box1[0]=='1'||box1[1]=='1'||box1[1]=='2'||box1[1]=='3'||box1[1]=='4'||box1[1]=='5'||box1[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box1[1]='7';
			if(input1=='g')
			 box1[0]='X',g[0]='-',g[1]='-';
			else
			 box1[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==1)&&(box1[0]=='1'||box1[1]=='1'||box1[1]=='2'||box1[1]=='3'||box1[1]=='4'||box1[1]=='5'||box1[1]=='6'||box1[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box1[1]='8';
			if(input1=='h')
			 box1[0]='X',h[0]='-',h[1]='-';
			else
			 box1[0]='O',p[0]='-',p[1]='-';
		}
		//box2
		else if((input2==2)&&(box2[0]=='2')&&(input1=='a'||input1=='i'))
		{
			box2[1]='1';
			if(input1=='a')
			 box2[0]='X',a[0]='-',a[1]='-';
			else
			 box2[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==2)&&(box2[0]=='2'||box2[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box2[1]='2';
			if(input1=='b')
			 box2[0]='X',b[0]='-',b[1]='-';
			else
			 box2[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==2)&&(box2[0]=='2'||box2[1]=='1'||box2[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box2[1]='3';
			if(input1=='c')
			 box2[0]='X',c[0]='-',c[1]='-';
			else
			 box2[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==2)&&(box2[0]=='2'||box2[1]=='1'||box2[1]=='2'||box2[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box2[1]='4';
			if(input1=='d')
			 box2[0]='X',d[0]='-',d[1]='-';
			else
			 box2[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==2)&&(box2[0]=='2'||box2[1]=='1'||box2[1]=='2'||box2[1]=='3'||box2[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box2[1]='5';
			if(input1=='e')
			 box2[0]='X',e[0]='-',e[1]='-';
			else
			 box2[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==2)&&(box2[0]=='2'||box2[1]=='1'||box2[1]=='2'||box2[1]=='3'||box2[1]=='4'||box2[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box2[1]='6';
			if(input1=='f')
			 box2[0]='X',f[0]='-',f[1]='-';
			else
			 box2[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==2)&&(box2[0]=='2'||box2[1]=='1'||box2[1]=='2'||box2[1]=='3'||box2[1]=='4'||box2[1]=='5'||box2[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box2[1]='7';
			if(input1=='g')
			 box2[0]='X',g[0]='-',g[1]='-';
			else
			 box2[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==2)&&(box2[0]=='2'||box2[1]=='1'||box2[1]=='2'||box2[1]=='3'||box2[1]=='4'||box2[1]=='5'||box2[1]=='6'||box2[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box2[1]='8';
			if(input1=='h')
			 box2[0]='X',h[0]='-',h[1]='-';
			else
			 box2[0]='O',p[0]='-',p[1]='-';
		}
		//box3
		else if((input2==3)&&(box3[0]=='3')&&(input1=='a'||input1=='i'))
		{
			box3[1]='1';
			if(input1=='a')
			 box3[0]='X',a[0]='-',a[1]='-';
			else
			 box3[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==3)&&(box3[0]=='3'||box3[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box3[1]='2';
			if(input1=='b')
			 box3[0]='X',b[0]='-',b[1]='-';
			else
			 box3[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==3)&&(box3[0]=='3'||box3[1]=='1'||box3[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box3[1]='3';
			if(input1=='c')
			 box3[0]='X',c[0]='-',c[1]='-';
			else
			 box3[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==3)&&(box3[0]=='3'||box3[1]=='1'||box3[1]=='2'||box3[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box3[1]='4';
			if(input1=='d')
			 box3[0]='X',d[0]='-',d[1]='-';
			else
			 box3[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==3)&&(box3[0]=='3'||box3[1]=='1'||box3[1]=='2'||box3[1]=='3'||box3[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box3[1]='5';
			if(input1=='e')
			 box3[0]='X',e[0]='-',e[1]='-';
			else
			 box3[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==3)&&(box3[0]=='3'||box3[1]=='1'||box3[1]=='2'||box3[1]=='3'||box3[1]=='4'||box3[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box3[1]='6';
			if(input1=='f')
			 box3[0]='X',f[0]='-',f[1]='-';
			else
			 box3[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==3)&&(box3[0]=='3'||box3[1]=='1'||box3[1]=='2'||box3[1]=='3'||box3[1]=='4'||box3[1]=='5'||box3[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box3[1]='7';
			if(input1=='g')
			 box3[0]='X',g[0]='-',g[1]='-';
			else
			 box3[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==3)&&(box3[0]=='3'||box3[1]=='1'||box3[1]=='2'||box3[1]=='3'||box3[1]=='4'||box3[1]=='5'||box3[1]=='6'||box3[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box3[1]='8';
			if(input1=='h')
			 box3[0]='X',h[0]='-',h[1]='-';
			else
			 box3[0]='O',p[0]='-',p[1]='-';
		}
		//box4
		else if((input2==4)&&(box4[0]=='4')&&(input1=='a'||input1=='i'))
		{
			box4[1]='1';
			if(input1=='a')
			 box4[0]='X',a[0]='-',a[1]='-';
			else
			 box4[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==4)&&(box4[0]=='4'||box4[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box4[1]='2';
			if(input1=='b')
			 box4[0]='X',b[0]='-',b[1]='-';
			else
			 box4[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==4)&&(box4[0]=='4'||box4[1]=='1'||box4[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box4[1]='3';
			if(input1=='c')
			 box4[0]='X',c[0]='-',c[1]='-';
			else
			 box4[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==4)&&(box4[0]=='4'||box4[1]=='1'||box4[1]=='2'||box4[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box4[1]='4';
			if(input1=='d')
			 box4[0]='X',d[0]='-',d[1]='-';
			else
			 box4[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==4)&&(box4[0]=='4'||box4[1]=='1'||box4[1]=='2'||box4[1]=='3'||box4[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box4[1]='5';
			if(input1=='e')
			 box4[0]='X',e[0]='-',e[1]='-';
			else
			 box4[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==4)&&(box4[0]=='4'||box4[1]=='1'||box4[1]=='2'||box4[1]=='3'||box4[1]=='4'||box4[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box4[1]='6';
			if(input1=='f')
			 box4[0]='X',f[0]='-',f[1]='-';
			else
			 box4[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==4)&&(box4[0]=='4'||box4[1]=='1'||box4[1]=='2'||box4[1]=='3'||box4[1]=='4'||box4[1]=='5'||box4[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box4[1]='7';
			if(input1=='g')
			 box4[0]='X',g[0]='-',g[1]='-';
			else
			 box4[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==4)&&(box4[0]=='4'||box4[1]=='1'||box4[1]=='2'||box4[1]=='3'||box4[1]=='4'||box4[1]=='5'||box4[1]=='6'||box4[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box4[1]='8';
			if(input1=='h')
			 box4[0]='X',h[0]='-',h[1]='-';
			else
			 box4[0]='O',p[0]='-',p[1]='-';
		}
		//box5
		else if((input2==5)&&(box5[0]=='5')&&(input1=='a'||input1=='i'))
		{
			box5[1]='1';
			if(input1=='a')
			 box5[0]='X',a[0]='-',a[1]='-';
			else
			 box5[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==5)&&(box5[0]=='5'||box5[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box5[1]='2';
			if(input1=='b')
			 box5[0]='X',b[0]='-',b[1]='-';
			else
			 box5[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==5)&&(box5[0]=='5'||box5[1]=='1'||box5[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box5[1]='3';
			if(input1=='c')
			 box5[0]='X',c[0]='-',c[1]='-';
			else
			 box5[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==5)&&(box5[0]=='5'||box5[1]=='1'||box5[1]=='2'||box5[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box5[1]='4';
			if(input1=='d')
			 box5[0]='X',d[0]='-',d[1]='-';
			else
			 box5[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==5)&&(box5[0]=='5'||box5[1]=='1'||box5[1]=='2'||box5[1]=='3'||box5[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box5[1]='5';
			if(input1=='e')
			 box5[0]='X',e[0]='-',e[1]='-';
			else
			 box5[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==5)&&(box5[0]=='5'||box5[1]=='1'||box5[1]=='2'||box5[1]=='3'||box5[1]=='4'||box5[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box5[1]='6';
			if(input1=='f')
			 box5[0]='X',f[0]='-',f[1]='-';
			else
			 box5[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==5)&&(box5[0]=='5'||box5[1]=='1'||box5[1]=='2'||box5[1]=='3'||box5[1]=='4'||box5[1]=='5'||box5[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box5[1]='7';
			if(input1=='g')
			 box5[0]='X',g[0]='-',g[1]='-';
			else
			 box5[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==5)&&(box5[0]=='5'||box5[1]=='1'||box5[1]=='2'||box5[1]=='3'||box5[1]=='4'||box5[1]=='5'||box5[1]=='6'||box5[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box5[1]='8';
			if(input1=='h')
			 box5[0]='X',h[0]='-',h[1]='-';
			else
			 box5[0]='O',p[0]='-',p[1]='-';
		}
		//box6
		else if((input2==6)&&(box6[0]=='6')&&(input1=='a'||input1=='i'))
		{
			box6[1]='1';
			if(input1=='a')
			 box6[0]='X',a[0]='-',a[1]='-';
			else
			 box6[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==6)&&(box6[0]=='6'||box6[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box6[1]='2';
			if(input1=='b')
			 box6[0]='X',b[0]='-',b[1]='-';
			else
			 box6[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==6)&&(box6[0]=='6'||box6[1]=='1'||box6[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box6[1]='3';
			if(input1=='c')
			 box6[0]='X',c[0]='-',c[1]='-';
			else
			 box6[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==6)&&(box6[0]=='6'||box6[1]=='1'||box6[1]=='2'||box6[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box6[1]='4';
			if(input1=='d')
			 box6[0]='X',d[0]='-',d[1]='-';
			else
			 box6[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==6)&&(box6[0]=='6'||box6[1]=='1'||box6[1]=='2'||box6[1]=='3'||box6[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box6[1]='5';
			if(input1=='e')
			 box6[0]='X',e[0]='-',e[1]='-';
			else
			 box6[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==6)&&(box6[0]=='6'||box6[1]=='1'||box6[1]=='2'||box6[1]=='3'||box6[1]=='4'||box6[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box6[1]='6';
			if(input1=='f')
			 box6[0]='X',f[0]='-',f[1]='-';
			else
			 box6[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==6)&&(box6[0]=='6'||box6[1]=='1'||box6[1]=='2'||box6[1]=='3'||box6[1]=='4'||box6[1]=='5'||box6[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box6[1]='7';
			if(input1=='g')
			 box6[0]='X',g[0]='-',g[1]='-';
			else
			 box6[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==6)&&(box6[0]=='6'||box6[1]=='1'||box6[1]=='2'||box6[1]=='3'||box6[1]=='4'||box6[1]=='5'||box6[1]=='6'||box6[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box6[1]='8';
			if(input1=='h')
			 box6[0]='X',h[0]='-',h[1]='-';
			else
			 box6[0]='O',p[0]='-',p[1]='-';	
		}
		//box7
		else if((input2==7)&&(box7[0]=='7')&&(input1=='a'||input1=='i'))
		{
			box7[1]='1';
			if(input1=='a')
			 box7[0]='X',a[0]='-',a[1]='-';
			else
			 box7[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==7)&&(box7[0]=='7'||box7[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box7[1]='2';
			if(input1=='b')
			 box7[0]='X',b[0]='-',b[1]='-';
			else
			 box7[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==7)&&(box7[0]=='7'||box7[1]=='1'||box7[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box7[1]='3';
			if(input1=='c')
			 box7[0]='X',c[0]='-',c[1]='-';
			else
			 box7[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==7)&&(box7[0]=='7'||box7[1]=='1'||box7[1]=='2'||box7[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box7[1]='4';
			if(input1=='d')
			 box7[0]='X',d[0]='-',d[1]='-';
			else
			 box7[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==7)&&(box7[0]=='7'||box7[1]=='1'||box7[1]=='2'||box7[1]=='3'||box7[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box7[1]='5';
			if(input1=='e')
			 box7[0]='X',e[0]='-',e[1]='-';
			else
			 box7[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==7)&&(box7[0]=='7'||box7[1]=='1'||box7[1]=='2'||box7[1]=='3'||box7[1]=='4'||box7[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box7[1]='6';
			if(input1=='f')
			 box7[0]='X',f[0]='-',f[1]='-';
			else
			 box7[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==7)&&(box7[0]=='7'||box7[1]=='1'||box7[1]=='2'||box7[1]=='3'||box7[1]=='4'||box7[1]=='5'||box7[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box7[1]='7';
			if(input1=='g')
			 box7[0]='X',g[0]='-',g[1]='-';
			else
			 box7[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==7)&&(box7[0]=='7'||box7[1]=='1'||box7[1]=='2'||box7[1]=='3'||box7[1]=='4'||box7[1]=='5'||box7[1]=='6'||box7[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box7[1]='8';
			if(input1=='h')
			 box7[0]='X',h[0]='-',h[1]='-';
			else
			 box7[0]='O',p[0]='-',p[1]='-';	
		}
		//box8
		else if((input2==8)&&(box8[0]=='8')&&(input1=='a'||input1=='i'))
		{
			box8[1]='1';
			if(input1=='a')
			 box8[0]='X',a[0]='-',a[1]='-';
			else
			 box8[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==8)&&(box8[0]=='8'||box8[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box8[1]='2';
			if(input1=='b')
			 box8[0]='X',b[0]='-',b[1]='-';
			else
			 box8[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==8)&&(box8[0]=='8'||box8[1]=='1'||box8[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box8[1]='3';
			if(input1=='c')
			 box8[0]='X',c[0]='-',c[1]='-';
			else
			 box8[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==8)&&(box8[0]=='8'||box8[1]=='1'||box8[1]=='2'||box8[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box8[1]='4';
			if(input1=='d')
			 box8[0]='X',d[0]='-',d[1]='-';
			else
			 box8[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==8)&&(box8[0]=='8'||box8[1]=='1'||box8[1]=='2'||box8[1]=='3'||box8[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box8[1]='5';
			if(input1=='e')
			 box8[0]='X',e[0]='-',e[1]='-';
			else
			 box8[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==8)&&(box8[0]=='8'||box8[1]=='1'||box8[1]=='2'||box8[1]=='3'||box8[1]=='4'||box8[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box8[1]='6';
			if(input1=='f')
			 box8[0]='X',f[0]='-',f[1]='-';
			else
			 box8[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==8)&&(box8[0]=='8'||box8[1]=='1'||box8[1]=='2'||box8[1]=='3'||box8[1]=='4'||box8[1]=='5'||box8[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box8[1]='7';
			if(input1=='g')
			 box8[0]='X',g[0]='-',g[1]='-';
			else
			 box8[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==8)&&(box8[0]=='8'||box8[1]=='1'||box8[1]=='2'||box8[1]=='3'||box8[1]=='4'||box8[1]=='5'||box8[1]=='6'||box8[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box8[1]='8';
			if(input1=='h')
			 box8[0]='X',h[0]='-',h[1]='-';
			else
			 box8[0]='O',p[0]='-',p[1]='-';	
		}
		//box9
		else if((input2==9)&&(box9[0]=='9')&&(input1=='a'||input1=='i'))
		{
			box9[1]='1';
			if(input1=='a')
			 box9[0]='X',a[0]='-',a[1]='-';
			else
			 box9[0]='O',i[0]='-',i[1]='-';
		}
		else if((input2==9)&&(box9[0]=='9'||box9[1]=='1')&&(input1=='b'||input1=='j'))
		{
			box9[1]='2';
			if(input1=='b')
			 box9[0]='X',b[0]='-',b[1]='-';
			else
			 box9[0]='O',j[0]='-',j[1]='-';
		}
		else if((input2==9)&&(box9[0]=='9'||box9[1]=='1'||box9[1]=='2')&&(input1=='c'||input1=='k'))
		{
			box9[1]='3';
			if(input1=='c')
			 box9[0]='X',c[0]='-',c[1]='-';
			else
			 box9[0]='O',k[0]='-',k[1]='-';
		}
		else if((input2==9)&&(box9[0]=='9'||box9[1]=='1'||box9[1]=='2'||box9[1]=='3')&&(input1=='d'||input1=='l'))
		{
			box9[1]='4';
			if(input1=='d')
			 box9[0]='X',d[0]='-',d[1]='-';
			else
			 box9[0]='O',l[0]='-',l[1]='-';
		}
		else if((input2==9)&&(box9[0]=='9'||box9[1]=='1'||box9[1]=='2'||box9[1]=='3'||box9[1]=='4')&&(input1=='e'||input1=='m'))
		{
			box9[1]='5';
			if(input1=='e')
			 box9[0]='X',e[0]='-',e[1]='-';
			else
			 box9[0]='O',m[0]='-',m[1]='-';
		}
		else if((input2==9)&&(box9[0]=='9'||box9[1]=='1'||box9[1]=='2'||box9[1]=='3'||box9[1]=='4'||box9[1]=='5')&&(input1=='f'||input1=='n'))
		{
			box9[1]='6';
			if(input1=='f')
			 box9[0]='X',f[0]='-',f[1]='-';
			else
			 box9[0]='O',n[0]='-',n[1]='-';
		}
		else if((input2==9)&&(box9[0]=='9'||box9[1]=='1'||box9[1]=='2'||box9[1]=='3'||box9[1]=='4'||box9[1]=='5'||box9[1]=='6')&&(input1=='g'||input1=='o'))
		{
			box9[1]='7';
			if(input1=='g')
			 box9[0]='X',g[0]='-',g[1]='-';
			else
			 box9[0]='O',o[0]='-',o[1]='-';
		}
		else if((input2==9)&&(box9[0]=='9'||box9[1]=='1'||box9[1]=='2'||box9[1]=='3'||box9[1]=='4'||box9[1]=='5'||box9[1]=='6'||box9[1]=='7')&&(input1=='h'||input1=='p'))
		{
			box9[1]='8';
			if(input1=='h')
			 box9[0]='X',h[0]='-',h[1]='-';
			else
			 box9[0]='O',p[0]='-',p[1]='-';	
		}
		else
		{
			printf("Invalid Move");
			player--;
			//main()
		}
		ii=wincondn();
    }
	//
	nttt_board();
	if(ii==1)
	{
		system("cls");
	    printf("\t\t\t\t\t      NUMERICAL TIC TAC TOE\n");
		printf("\t\t\t\t\t\t__________________\n\n");
		printf("\t\t\t\t\t\t {Siddharth Garg}\n");
		printf("\t\t\t______________________________________________________________________\n\n");
		printf("\tAvailable Options-\n");
		printf("\tPlayer 1: %s %s %s %s %s %s %s %s\n",a,b,c,d,e,f,g,h);
		printf("\tPlayer 2: %s %s %s %s %s %s %s %s\n\n",i,j,k,l,m,n,o,p);
		printf("\tCodes-\n");
		printf("\tX1=a | X2=b | X3=c | X4=d | X5=e | X6=f | X7=g | X8=h\n");
		printf("\tO1=i | O2=j | O3=k | O4=l | O5=m | O6=n | O7=o | O8=p\n\n\n");
		nttt_board();
		printf("Player %d WIN",--player);
		Beep(750,800);
	}
	else if(ii==0)
	{
		system("cls");
	    printf("\t\t\t\t\t      NUMERICAL TIC TAC TOE\n");
		printf("\t\t\t\t\t\t__________________\n\n");
		printf("\t\t\t\t\t\t {Siddharth Garg}\n");
		printf("\t\t\t______________________________________________________________________\n\n");
		printf("\tAvailable Options-\n");
		printf("\tPlayer 1: %s %s %s %s %s %s %s %s\n",a,b,c,d,e,f,g,h);//put inside loop
		printf("\tPlayer 2: %s %s %s %s %s %s %s %s\n\n",i,j,k,l,m,n,o,p);
		printf("\tCodes-\n");
		printf("\tX1=a | X2=b | X3=c | X4=d | X5=e | X6=f | X7=g | X8=h\n");
		printf("\tO1=i | O2=j | O3=k | O4=l | O5=m | O6=n | O7=o | O8=p\n\n\n");
		nttt_board();
		printf("DRAW");
		Beep(750,800);
	}	
	return 0;
}
void nttt_board()
{
	printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %s  |  %s  |  %s \n",box1,box2,box3);
    printf("\t\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %s  |  %s  |  %s \n",box4,box5,box6);
    printf("\t\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %s  |  %s  |  %s \n",box7,box8,box9);
    printf("\t\t\t\t\t\t     |     |     \n\n");
}
void playerno()
{
	printf("\tEnter Player Number %d\n\t",player);
	player++;
	if(player%2==0)
	{
		player=2;
	}
	else
	{
		player=1;
	}
}
int wincondn()
{
	if(box1[0]==box2[0]&&box2[0]==box3[0])
	{
		return 1;
	}
	else if(box4[0]==box5[0]&&box5[0]==box6[0])
	{
		return 1;
	}
	else if(box7[0]==box8[0]&&box8[0]==box9[0])
	{
		return 1;
	}
	else if(box1[0]==box4[0]&&box4[0]==box7[0])
	{
		return 1;
	}
	else if(box2[0]==box5[0]&&box5[0]==box8[0])
	{
		return 1;
	}
	else if(box3[0]==box6[0]&&box6[0]==box9[0])
	{
		return 1;
	}
	else if(box1[0]==box5[0]&&box5[0]==box9[0])
	{
		return 1;
	}
	else if(box3[0]==box5[0]&&box5[0]==box7[0])
	{
		return 1;
	}
	else if(box1[0]!='1'&&box2[0]!='2'&&box3[0]!='3'&&box4[0]!='4'&&box5[0]!='5'&&box6[0]!='6'&&box7[0]!='7'&&box8[0]!='8'&&box9[0]!='9')
	{
		return 0;//draw
	}
	else
	{
		return -1;//continue the match
	}
}
