#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct tim
 {int h;
  int m;
 } t;

typedef struct dat
 {int d;
  int m;
  int y;
 } d;

typedef struct food
{
    char name[30];
    int qn;
    int price;
}F;

typedef struct Order
{
    char r_name[30];
    F fd[3];
    int total;
}O;

typedef struct Book
{
    int d;
    char h_name[20];
    char Rno[6] ;
    int total;
}B;

typedef struct ticket
{
  char name[20];
  char s_name[30];
  char venue[20];
  int price;
  t T;
  d D;
}T;

typedef struct show
{
  char name[30];
  d D[7];
  t A[7][6];
  int price;
}S;

typedef struct Place
{
  char name[30];
  char add[60];
  char con[11];

}P;

typedef struct account
{
  char ID[20];
  char email[40];
  char Pass[20];
  int od;
  t st;
  d sd;

}A;

typedef struct hall
{
   P p;
   S s[10] ;

}H;

typedef struct res
{
   P p;
   F f[10];

}R;

typedef struct hotel
{
   P p;
   int price;
}ht;

//Declaration of some useful function

int login(A *a);
void HOTEL(B *t);
void RES(O *t);
void Movie(T *t);
void Edit(void);

int main()
{
    printf("\t\tWelcome to the app \"Fun Time\" ");     //Intro
    printf("\n\nThis App is created by : \n\t\tMrinal \t\t Parth Choudhary \n\t\t2K20/B-13/2K20\t 2K20/B-13/24");
    printf("\n\nThis pp provides you the choice to select for a number of Hotels, Restaurants,Movie Shows \n");

    FILE *a;
    a=fopen("admin.dat","wb");

    if(a==NULL)
    {
    printf("\n Cannot open file.");
    exit(1);
    }


    A admin, b;

    gets(admin.ID);
    gets(admin.email);
    gets(admin.Pass);

    fwrite(&admin,sizeof(admin),1,a);

    fclose(a);

    FILE *ba;
    ba=fopen("admin.dat","rb");

    if(ba==NULL)
    {
    printf("\n Cannot open file.");
    exit(1);
    }

    fread(&b,sizeof(b),1,ba);


    puts(b.ID);
    puts(b.email);
    puts(b.Pass);

    fclose(ba);





    int i,h,N,lgs=0,n=0,c=0;      //start
    char ch,ch1,CH;

    O Re;
    B A2;
    T A3;

    A user;
    system("cls");
    printf("\t\tLOGIN PAGE");
    printf("\nWant to login or skip for now?(y/n)");

    do{
    scanf(" %c",&ch);
    if(ch=='y'||ch=='Y')
    {
        c=1;
        do{
        n=check(user);
        if(n==3)
        printf("\nCredentials are wrong PLEASE fill again");
        }while(n==3);
        if(n==1)
        {
            printf("\nEntering Administrator MODE, Now u can Fill the Data For APP:");
            Edit();
        }
        else if(n==4)
            printf("\nSuccessfully registered and logged in");

    }

    else if(ch=='n'||'N')
        break;

    else
        printf("\nWrong Choice entered! Error!, Please Renter choice:");
    }while(!c);


    system("cls");

    printf("\t\tHOME");
    printf("\n\n1.) Hotels\n\n2.)Restaurants\n\n3.)Movie-Halls");
    c=0;
    do{
    scanf("%d",&h);
    switch(h)
    {
        case 1: c=1;
                HOTEL(&A2);
                printf("\nYour Booking details are:");
                printf("Name: ");
                puts(user.ID);
                printf("Hotel name:");
                puts(A2.h_name);
                printf("No of Days:%d",A2.d);
                printf("\nRoom no:%d",A2.Rno);
                printf("\nTotal Price you have to pay at hotel:",A2.total);
                break;

        case 2: c=1;
                RES(&Re);
                printf("\nYour Order details are:");
                printf("Name: ");
                puts(user.ID);
                printf("Restraunt name:");
                puts(Re.r_name);
                printf("Your Ordered cuisines:");
                for(int k=0;k<3;k++)
                {
                    printf("%d.)",k+1);
                    puts(Re.fd.name);
                    printf("Quantity: %d",Re.fd.qn);
                    printf("\nTotal:%d\n",Re.fd.price);
                }
                printf("\nTotal Price you have to pay at Restaurant:",D1.total);
                break;

        case 3: c=1;
                Movie(&A3);
                printf("\nYour Movie Ticket details are:");
                printf("Name: ");
                puts(A3.name);
                printf("Movie Hall name:");
                puts(A3.venue);
                printf("Show Name:");
                puts(A3.s_name);
                printf("Date:%d/%d/%d",A3.D.d,A3.D.m,A3.D.y);
                printf("\tTime:%d:%d",A3.T.h,A3.T.m);
                printf("\nTotal Price you have to pay at Movie Hall:",A3.price);
                break;
        default: printf("Unknown choice please renter the choice:");
    }
    printf("Do you want to continue ? (y/n)");
    scanf(" %c",&CH);

    }while(!c||CH=='y'||CH=='Y');




    return 0;
}

void Movie(T *t )
{
                system ("cls");
                int i=1,ch,s,sum,a,d,T;
                printf("\t\tMovie Halls");
                H temp;
                FILE *H;
                H=fopen("MovieHalls.dat","rb");
                if(H==NULL)
                    {
                        printf("\n Cannot open file. Please Restart the program");
                        exit(1);
                    }
                while(ftell(H)!=EOF)
                {
                    fread(&temp,ch*sizeof(temp),1,H);
                    printf("\n%d.)",i);
                    puts(temp.p.name);
                    i++;
                }
                printf("\nEnter choice, which one do you want to open: ");
                scanf("%d",&ch);
                fseek(H,ch*sizeof(temp),SEEK_SET);
                fread(&temp,sizeof(temp),1,H);
                system("cls");
                puts(temp.p.name);
                printf("Address: ");
                puts(temp.p.add);
                printf("Contact no: ");
                puts(temp.p.con);
                printf("List of Movie shows:");
                for(int j=0;j<3;j++)
                {
                    printf("%d.)",j+1);
                    puts(temp.s[j].name);
                    printf("Show timings :");
                    for(int k=0;k<7;k++)
                    {
                        printf("\n%d.)Date: %d/%d/%d",k+1,temp.s[j].D[k].d,temp.s[j].D[k].m,temp.s[j].D[k].y);
                        for(int m=0;m<6;m++)
                            printf("%d.)%d:%d\t",temp.s[j].A[k][m].h,temp.s[j].A[k][m].m);
                    }
                    printf("\nPrice:",temp.s[j].price);
                }
                printf("Select the movie by the indicated no.");
                scanf("%d",&s);
                printf("Movie name: ");
                puts(temp.s[s-1].name);
                printf("Enter the Date Number of which the ticket you want to book:");
                scanf("%d",&d);
                printf("Enter the Time Number of which the ticket you want to book:");
                scanf("%d",&T);
                (*t).T.h=temp.s[s-1].A[d][T].h;
                (*t).T.m=temp.s[s-1].A[d][T].m;
                (*t).D.d=temp.s[s-1].D[d].d;
                (*t).D.m=temp.s[s-1].D[d].m;
                (*t).D.y=temp.s[s-1].D[d].y;
                (*t).price=temp.s[s-1].price;
                strcpy(t->s_name,temp.s[s-1].name);
                strcpy(t->venue,temp.p.name);
                fclose(H);

}


void RES(O *t)
{

                system ("cls");
                int i=1,ch,f,sum=0,a;
                printf("\t\tRestaurants");
                R temp;
                FILE *H;
                H=fopen("Restaurants.dat","rb");
                if(H==NULL)
                    {
                        printf("\n Cannot open file. Please Restart the program");
                        exit(1);
                    }
                while(ftell(H)!=EOF)
                {
                    fread(&temp,ch*sizeof(temp),1,H);
                    printf("\n%d.)",i);
                    puts(temp.p.name);
                    i++;
                }
                printf("\nEnter choice, which one do you want to open: ");
                scanf("%d",&ch);
                fseek(H,ch*sizeof(temp),SEEK_SET);
                fread(&temp,sizeof(temp),1,H);
                system("cls");
                puts(temp.p.name);
                printf("Address: ");
                puts(temp.p.add);
                printf("Contact no: ");
                puts(temp.p.con);
                printf("List of Food items:");
                for(int j=0;j<3;j++)
                {
                    printf("%d.)",j+1);
                    puts(temp.f[j].name);
                    printf("Price:",temp.f[j].price);
                }
                printf("Enter the food items you want:");
                for(int j=0;j<3;j++)
                {
                    printf("%d.)",j+1);
                    puts(temp.f[j].name);
                    printf("Quantity:");
                    scanf("%d",&t->D->qn);
                    strcpy(&t->D->name,temp.f[j].name);
                    (*t).D.price=(*t).D.qn*temp.f[j].price;
                    sum+=t->D->price;
                }
                strcpy((*t).r_name,temp.p.name);
                (*t).total=sum;
                fclose(H);

}

void HOTEL(B *t )
{

                system ("cls");
                int i=1,ch;
                printf("\t\tHotels");
                ht temp;
                FILE *H;
                H=fopen("Hotels.dat","rb");
                if(H==NULL)
                    {
                        printf("\n Cannot open file. Please Restart the program");
                        exit(1);
                    }
                while(ftell(H)!=EOF)
                {
                    fread(&temp,sizeof(temp),1,H);
                    printf("\n%d.)",i);
                    puts(temp.p.name);
                    i++;
                }
                printf("\nEnter choice, which one do you want to open: ");
                scanf("%d",&ch);
                fseek(H,ch*sizeof(temp),SEEK_SET);
                fread(&temp,ch*sizeof(temp),1,H);
                system("cls");
                puts(temp.p.name);
                printf("Address: ");
                puts(temp.p.add);
                printf("Contact no: ");
                puts(temp.p.con);
                printf("Cost of per day stay: %d",temp.price);
                printf("\n\nEnter the no of days you want to stay");
                scanf("%d",&(*t).d);
                strcpy(t->Rno,"100A");
                (*t).total=(t->d) * (temp.price);
                fclose(H);

}

int login(A *a)
{
    A ad,temp;
    int flag=0;
    char ch;
    printf("Do you have a ID, Or want to First Register(L for Login & S for Sign-Up)");
    scanf(" %c",&ch);
    if(ch=='L'||ch=='l')
    {
    printf("Enter the Id");
    gets((*a).ID);
    printf("Enter the Password:");
    gets((*a).Pass);

    FILE *d;
    d=fopen("Acc.dat","rb");
    if(d==NULL)
    {
    printf("\n Cannot open file. Please Restart the program");
    exit(1);
    }

    while(ftell(d)!=EOF)
        {
            fread(&temp,sizeof(temp),1,d);
            if(strcmp((*a).ID,temp.ID)==0&&strcmp((*a).Pass,temp.Pass)==0)
            {
                flag=1;
                strcpy((*a).email,temp.email);
                break;
            }
        }

    fclose(d);

    FILE *c;
    c=fopen("admin.dat","rb");
    if(c==NULL)
    {
    printf("\n Cannot open file. Please Restart the program");
    exit(1);
    }

    fread(&ad,sizeof(ad),1,c);
    fclose(c);
    if(strcmp((*a).ID,ad.ID)==0&&strcmp((*a).Pass,ad.Pass)==0)
        return 1;
    else if(flag==1)
        return 2;
    else
        return 3;
    }

    else if(ch=='S'||ch=='s')
    {

        FILE *s;
        s=fopen("Acc.dat","ab");
        if(s==NULL)
        {
            printf("\n Cannot open file. Please Restart the program");
            exit(1);
        }
        printf("Enter name ID");
        gets((*a).ID);
        printf("Enter Email");
        gets((*a).email);
        printf("Enter password");
        gets((*a).Pass);

        fwrite(&(*a),sizeof((*a)),1,s);
        fclose(s);
        return 4;
    }
}

void Edit()

{
    int i,ch,c=0;
    char CH;
    printf("\t\tEDIT");
    do{
    printf("\n\n1.) Hotels\n\n2.)Restaurants\n\n3.)Movie-Halls");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: {c=1;
                FILE *O1;
                ht T;
                printf("Enter 1 To overwrite 2 to append");
                do{
                scanf("%d",&ch);
                if(ch==1)
                O1=fopen(".dat","wb");
                else if(ch==2)
                O1=fopen("Hotels.dat","ab");
                else
                    printf("\nWrong choice please enter again");
                }while(ch!=1&&ch!=2);
                CH='y';
                while(CH=='Y'||CH=='y')
                {
                    printf("Enter Name of the Hotel:");
                    gets(T.p.name);
                    printf("Enter Address of the Hotel:");
                    gets(T.p.add);
                    printf("Enter Contact no of the Hotel:");
                    gets(T.p.con);
                    printf("Enter Price of 1D/1N stay in the Hotel:");
                    scanf("%d",&T.price);
                    fwrite(&T,sizeof(T),1,O1);
                    printf("Do you want to add more Hotels?(y/n)");
                    scanf(" %d",&CH);
                }

                fclose(O1);
                break;
                }

        case 2: {c=1;
                FILE *O2;
                R T;
                printf("Enter 1 To overwrite 2 to append");
                do{
                scanf("%d",&ch);
                if(ch==1)
                O2=fopen("Restaurants.dat","wb");
                else if(ch==2)
                O2=fopen("Restaurants.dat","ab");
                else
                    printf("\nWrong choice please enter again");
                }while(ch!=1&&ch!=2);
                CH='y';
                while(CH=='Y'||CH=='y')
                {
                    printf("Enter Name of the Restaurant:");
                    gets(T.p.name);
                    printf("Enter Address of the Restaurant:");
                    gets(T.p.add);
                    printf("Enter Contact no of the Restaurant:");
                    gets(T.p.con);
                    printf("Enter the MENU Items of Restaurant:");
                    for(int A=0;A<3;A++)
                    {
                        printf("Food item %d:\n",A+1);
                        printf("Name:");
                        gets(T.f[A].name);
                        printf("Price:");
                        scanf("%d",&T.f[A].price);
                    }
                    fwrite(&T,sizeof(T),1,O2);
                    printf("Do you want to add more Restaurants?(y/n)");
                    scanf(" %d",&CH);
                }

                fclose(O2);
                break;
                }

        case 3: {c=1;
                FILE *O3;
                H T;
                printf("Enter 1 To overwrite 2 to append");
                do{
                scanf("%d",&ch);
                if(ch==1)
                O3=fopen("MovieHalls.dat","wb");
                else if(ch==2)
                O3=fopen("MovieHalls.dat","ab");
                else
                    printf("\nWrong choice please enter again");
                }while(ch!=1&&ch!=2);
                CH='y';
                while(CH=='Y'||CH=='y')
                {
                    printf("Enter Name of the Movie Hall:");
                    gets(T.p.name);
                    printf("Enter Address of the Movie Hall:");
                    gets(T.p.add);
                    printf("Enter Contact no of the Movie Hall:");
                    gets(T.p.con);
                    printf("Enter the Show details of Movie Hall:");
                    for(int A=0;A<3;A++)
                    {
                        printf("Show no %d:\n",A+1);
                        printf("Show Name:");
                        gets(T.s[A].name);
                        printf("Timings:\n");
                        for(int j=0;j<7;j++)
                        {
                            printf("Enter the Date ");
                            scanf("Day:%d Month:%d Year:%d",&T.s.D.d,&T.s.D.m,&T.s.D.y);
                            printf("Enter Show timings(24 hr format): \n");
                            for(int k=0;k<0;k++)
                            {
                                printf("\nEnter the Time ");
                                scanf("Hour%d Min:%d",&T.s.A.h,&T.s.D.m);
                            }
                        }
                        printf("Price:");
                        scanf("%d",&T.s[A].price);
                    }
                    fwrite(&T,sizeof(T),1,O3);
                    printf("Do you want to add more Movie Halls?(y/n)");
                    scanf(" %d",&CH);
                }

                fclose(O3);

                break;
                }
        default: printf("Unknown choice please renter the choice:");
    }
    printf("Do you want to continue add more DATA? (y/n)");
    scanf(" %c",&CH);

    }while(!c||CH=='Y'||CH=='y');


}