#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<fstream.h>
#include<stdio.h>
int i,n;
ifstream fin;
ofstream fout;
fstream fio;
void disp();
void login()
{
signin:
    system("cls");
    int c=0;
    char pass[6];
    char r[6] = "admin";
    int p;
    gotoxy(30,15);
    cout<<"Password: ";
    for (int i=0; i<6; i++)
    {
	pass[i] = getch();
	cout<<"*";
    }
    for (int j=0; j<5; j++)
    {
	if (pass[j] == r[j])
	    c = c+1;
    }
    system("cls");
    if (c == 5)
    {
	gotoxy(30,15);
	cout<<"Correct Password";
	getch();
	return ;
    }
    else
    {
	gotoxy(30,15);
	cout<<"Invalid Password";
	getch();
	goto signin;
    }
}
class stock
{
    char name[20],pass[15];
    float pr;
    int quant;

public:
    void get();
    void get2();
    void show();
    int stchk(char nm[30]);
    void withd(int qty);
    void refil(int qty);
} st;
void stock::withd(int qty)
{
    if(quant>=qty)
    {
	quant-=qty;
	cout<<"\n\nStock updated.\n";
	cout<<"\n\nTotal price to be paid:"<<pr*qty;
    }
    else
	cout<<"\n\nInsufficient stock";
    getch();


}

void stock::refil(int qty)
{

    quant+=qty;
    cout<<"\n\nStock updated.";
    getch();


}
int stock::stchk(char nm[30])
{
    if(strcmp(nm,name)==0)
	return 0;
    else
	return 1;
}
void stock::get()
{
    cout<<"Enter Name     :";
    cout<<"\nEnter Quantity :";
    cout<<"\nEnter Price    :";
    gotoxy(20,15);
    gets(name);
    gotoxy(20,16);
    cin>>pr;
    gotoxy(20,17);
    cin>>quant;
}
void stock::get2()
{
    cin>>name>>quant;
}

void stock::show()
{
    cout<<"\t   "<<name<<"\t\t\t"<<quant<<"\t\t  "<<pr<<endl;
}
void addnew()
{

    system("cls");
    disp();
    getch();
    system("cls");
    gotoxy(15,10);
    cout<<"Enter the No. of Products that you wish to add: ";
    cin>>n;


    if (n!=0)
    {

	int j,l;
	fout.open("mds.dat",ios::binary|ios::app);
	for(i=0; i<n; i++)

	{
	    cout<<"\n\nInput the name, price and the quantity of item respectively\n\n";
	    st.get();
	    fout.write((char*)&st,sizeof(st));
	    cout<<"\n\nitem updated";
	    cin.get();


	}
	cout<<"\n\nStock Updated!!";


	fout.close();
	cin.get();
	system("cls");
	disp();
    }

    else
    {

	fout.close();
	cin.get();
	system("cls");
	cout<<"\n\nNo items to be added";

    }
}
void withdraw()
{
    system("cls");
    char temp[100];
    int qty;
    int i=0;
    long pos=0;
    disp();
    cout<<"\n\nEnter the product's name \n"<<endl;
    cin>>temp;
    cout<<"\n\nEnter quantity: \n"<<endl;
    cin>>qty;
    fio.open("mds.dat",ios::binary|ios::out|ios::in);
    while(fio)
    {
	pos=fio.tellp();
	fio.read((char*)&st,sizeof(st));
	if(st.stchk(temp)==0)
	{

	    st.withd(qty);
	    fio.seekp(pos);
	    fio.write((char*)&st,sizeof(st));
	    i++;
	    break;
	}
    }
    if(i!=1)
	cout<<"\n\n!!Record not found!!";
    fio.close();
    cin.get();
    system("cls");
    disp();
    getch();
}
void disp()
{
    int i=1;
    gotoxy(1,10);
    cout<<"\t|=============================================================|\n";
    cout<<"\t|              Medical STORE MANAGEMENT SYSTEM                |\n";
    cout<<"\t|=============================================================|\n";
    cout<<"\t|                    THE STOCK ITEMS ARE                      |\n";
    cout<<"\t|=============================================================|\n";
    cout<<"\t|  PARTICULARS            STOCK AVAILABLE      PRICE          |\n";
    cout<<"\t|=============================================================|\n";
    fin.open("mds.dat",ios::binary);
    while(!fin.eof())
    {
	fin.read((char*)&st,sizeof(st));
	if(!fin.eof())
	{
	    if(fin.tellg()<0)
	    {
		i=0;
		break;
	    }
	    st.show();
	}
    }
    if(i==0)
    {
	cout<<"\n\n\t\t\t!!Empty record room!!";
	getch();
    }
    fin.close();

}
void refill()
{
    system("cls");
    char temp[100];
    int qty;
    int i=0;
    long pos=0;
    disp();
    cout<<"\n\nEnter the products name \n"<<endl;
    cin>>temp;
    cout<<"\n\nEnter quantity: \n"<<endl;
    cin>>qty;
    fio.open("mds.dat",ios::binary|ios::out|ios::in);
    while(fio)
    {
	pos=fio.tellp();
	fio.read((char*)&st,sizeof(st));
	if(st.stchk(temp)==0)
	{

	    st.refil(qty);
	    fio.seekp(pos);
	    fio.write((char*)&st,sizeof(st));
	    i++;
	    break;
	}
    }
    if(i!=1)
	cout<<"\n\n!!Record not found!!";
    fio.close();
    system("cls");
    cin.get();
    disp();
    cin.get();


}
void remove()
{
    system("cls");
    int flag=0;
    char temp[30],check='n';
    gotoxy(30,15);
    cout<<"Delete Record";
    cout<<"\n\n\tEnter the name of the product:";
    cin>>temp;
    fout.open("temp.dat",ios::binary);
    fin.open("mds.dat",ios::binary);
    while(!fin.eof())
    {
	fin.read((char*)&st,sizeof(st));
	if(!fin.eof())
	    if(st.stchk(temp)==0)
	    {
		flag=1;
		cout<<"\t|=============================================================|\n";
		cout<<"\t|  PARTICULARS            STOCK AVAILABLE      PRICE          |\n";
		cout<<"\t|=============================================================|\n";
		st.show();
		cout<<"\n\tAre You Sure Want to delete?";
		cin>>check;
		if(check=='n')
		    fout.write((char*)&st,sizeof(st));
	    }
	    else
		fout.write((char*)&st,sizeof(st));
    }
    if(flag==0)
	cout<<"\n\n!!Record not found!!";
    else
	cout<<"\n\n\t!!Record Deleted!!";
    fin.close();
    fout.close();
    remove("mds.dat");
    rename("temp.dat","mds.dat");
    return;
}
void main()
{
    char pass[10],pass2[10];
    int i,j;
    system("cls");
    gotoxy(20,15);
    cout<<"\t| WELCOME TO Medical STORE MANAGEMENT    |\n";
    getch();
    login();
mainmenu:
    system("cls");
    gotoxy(1,10);
    cout<<"\t|=============================================================|\n";
    cout<<"\t|              Medical STORE MANAGEMENT SYSTEM                |\n";
    cout<<"\t|=============================================================|\n";
    cout<<"\t|                       DEALER MENU                           |\n";
    cout<<"\t|=============================================================|\n";
    cout<<"\t|                 1. Add new product                          |\n";
    cout<<"\t|                 2. Sell Medicines                           |\n";
    cout<<"\t|                 3. Display stock                            |\n";
    cout<<"\t|                 4. Refill                                   |\n";
    cout<<"\t|                 5. Remove an item                           |\n";
    cout<<"\t|                 6. Exit:                                    |\n";
    cout<<"\t==============================================================|\n";
    cout<<"\n\n Enter your Choice :\t";
    cin>>i;
    if(i==1)
    {
        addnew();
        getch();
        goto mainmenu;
    }
    if (i==2)
    {
        withdraw();
        getch();
        goto mainmenu;
    }
    else if(i==3)
    {
        system("cls");
        disp();
        getch();
        goto mainmenu;
    }
    else if(i==4)
    {
        refill();
        goto mainmenu;
    }
    else if(i==5)
    {
        remove();
        getch();
        goto mainmenu;
    }
    else
    {
        char choice;
        cout<<"Are you sure want to Exit(y/n)?";
        cin>>choice;
        if(choice=='y')
            exit(0);
        else if(choice=='n')
            goto mainmenu;
    }
}
