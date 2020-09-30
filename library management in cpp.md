#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip.h>
 class lib
 {
    protected:
        char name[25][25];
        char wn[25][25];
        char code[25][15];
        char copy[25][15];

 };

 class fn:public lib
 {
        int z;
    public:
        void add_(void);
        void delete_(void);
        void plus(void);
        void display_(void);
        void initial(){z=0;}
        void srch();
 };

 void fn :: add_(void)
 {
    int m,n,k;

    clrscr();

    fstream f1;
    f1.open("book1.txt",ios::out|ios::app);

    cout<<"\n\nEnter the book name   :";
    cin>>name[z];
    cout<<"Enter writter name    :";
    cin>>wn[z];
    cout<<"Enter the book code   :";
    cin>>code[z];
    cout<<"Enter the no. of copy :";
    cin>>copy[z];

    int i;

    m=strlen(name[z]);
    n=strlen(wn[z]);
    k=strlen(code[z]);

    f1.seekg(0,ios::end);
    f1<<endl;

    f1<<name[z];
    for(i=0;i<26-m;i++)
    f1<<"\ ";
    f1 <<wn[z];
    for(i=0;i<22-n;i++)
    f1<<"\ ";
    f1 <<code[z];
    for(i=0;i<17-k;i++)
    f1<<"\ ";
    f1 <<copy[z];
    f1.close();

    z++;
 }
 void fn :: delete_(void)         //To delete a copy of book from list
 {
    int i;

    clrscr();

    cout<<"\nPlease enter the book code:";
    cin>>i;

    fstream f2;
    f2.open("book1.txt",ios::in|ios::out|ios::nocreate);

    f2.seekg(0);

    char b[20];
    int m,n,o;
    char *l;

    while(f2.eof()==0)
    {
        f2>>b;
        f2>>b;
        f2>>m;
        f2>>l;

        n=atoi(l);
        o=strlen(l);

        if(m==i)
        {
            f2.seekg(-o,ios::cur);

            if (n>0)
            {
                n--;
                f2<<n;
                cout<<"\nOne copy of this book is deleted from list.";
                getch();
                break;
            }
            else
            {
                cout<<"Not available copy.";
                break;
            }
        }
    }
    f2.close();

 }

 void fn :: plus(void)           //To add a copy of book to list
 {
    int j;

    clrscr();

    cout<<"\nPlease enter the book code:";
    cin>>j;

    fstream f6;
    f6.open("book1.txt",ios::in|ios::out|ios::nocreate);

    f6.seekg(0);

    char c[30];
    int e,r,t;
    char *p;

    while(f6.eof()==0)
    {
        f6>>c;
        f6>>c;
        f6>>r;
        f6>>p;

        e=atoi(p);
        t=strlen(p);

        if(r==j)
        {
            f6.seekg(-t,ios::cur);

            if(e>=0)
             {
                e++;
                f6<<e;
                cout<<"\nOne copy of this book is added to list.";
                getch();
                break;
              }
            else
              {
                cout<<"Invalid book code.";
                break;
              }
        }
    }

    f6.close();

 }

 void fn :: display_(void)          //To show the book list
 {
    clrscr();

    fstream f3;
    f3.open("book1.txt",ios::in|ios::app);
    f3.seekg(0);

    char a;

    cout<<"\n\n";
    cout<<"\t*************** BOOK LIST ***************";
    cout<<"\n\n";
    cout<<"Bookname"<<setw(25)<<"Writter"<<setw(18)<<"Code"<<setw(17)<<"Copy"<<endl;
    cout<<"--------"<<setw(25)<<"-------"<<setw(18)<<"----"<<setw(17)<<"----"<<endl;

    while(f3)
    {
        f3.get(a);
        cout<<a;
    }
    f3.close();
    getch();
 }

 void fn :: srch ()          //To search a book with its code from list
 {
    int i,j,k=0;

    clrscr();

    cout<<"\nPlease enter the Book code: ";
    cin>>j;

    fstream f4;
    f4.open("book1.txt",ios::in|ios::app);
    f4.seekg(0);

    char c[20],d[20];
    int n,p;

    while(f4.eof()==0)
    {
        f4>>c;
        f4>>d;
        f4>>n;
        f4>>p;

        if(n==j)
        {
            cout<<"  Book name      : "<<c<<endl;
            cout<<"  Writter name   : "<<d<<endl;
            cout<<"  Book code      : "<<n<<endl;
            cout<<"  Available copy : "<<p<<endl<<endl;
            getch();
            k++;
        }
        if(k==1)
            break;
    }

 }

 int main ()             //Main function
 {
    int i;

    fn f;
    f.initial();

    clrscr();

    while(1)
    {
        clrscr();

        cout<<"\n\n***----- WELL COME TO LIBRARY MANAGEMENT PROGRAM -----***";
        cout<<"\n\nWhat do you want to do?"<<endl;
        cout<<"\n1: Add a new book to the list.";
        cout<<"\n2: Delete a  copy of book from list.";
        cout<<"\n3: Add a copy of book to list.";
        cout<<"\n4: See the book list.";
        cout<<"\n5: Search a Book from list.";
        cout<<"\n6: Exit ."<<endl;
        cout<<"\nInput your choice:";
        cin>>i;

        switch(i)
        {
            case 1:
            {
                f.add_();
                break;
            }

            case 2:
            {
                f.delete_();
                break;
            }

            case 3:
            {
                f.plus();
                break;
            }

            case 4:
            {
                f.display_();
                break;
            }

            case 5:
            {
                f.srch();
                break;
            }

            case 6:
            {
                cout<<"Thank you.";
                break;
            }
        }

        if (i==6)
            break;
    }

    getch();
    return 0;
 }
