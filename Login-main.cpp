#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
#include<string>
#include<windows.h>

class adm
{
	public:
		string ques;
		char q[10000];
		char t;
		void get()
		{
			int i=0;
			cout<<"          CREATE THE QUESTION AND TYPE # To EXIT\n\n";
			while(1)
			{
				t=getch();
				if(t==13)
				{
					putch('\n');
					q[i++]='\n';
					continue;
				}
				if(t==8) 
				{
					putch('\b');
                    putch(0);
                    putch('\b');
                    --i;
                    continue;
				}
				if(t==35)
					break;
				q[i++]=t; 
				putch(t);
			}
			q[i]='\0';
			ques=q;
			cout<<"\n\n";
		}		
}A[2];

class tcase
{
	public:
		string icase;
		string ocase;
		char T[100];
		char t;
		void iget()
		{
			int i=0;
			while(1)
			{
				t=getch();
				if(t==13)
				{
					putch('\n');
					T[i++]='\n';
					continue;
				}
				if(t==8) 
				{
					putch('\b');
                    putch(0);
                    putch('\b');
                    --i;
                    continue;
				}
				if(t==35)
					break;
				T[i++]=t; 
				putch(t);
			}
			T[i]='\0';
			icase=T;
			cout<<"\n\n";
		}
		void oget()
		{
			for(int j=0;j<100;j++) T[j]='\0';
			int i=0;
			while(1)
			{
				t=getch();
				if(t==13)
				{
					putch('\n');
					T[i++]='\n';
					continue;
				}
				if(t==8) 
				{
					putch('\b');
                    putch(0);
                    putch('\b');
                    --i;
                    continue;
				}
				if(t==35)
					break;
				T[i++]=t; 
				putch(t);
			}
			T[i]='\0';
			ocase=T;
			cout<<"\n\n";
		}	
}c[2][2];

void test()
{
	    ofstream t1("title1.txt",ios::out);
	    ofstream t2("title2.txt",ios::out);
	    
		ofstream q1("ques1.txt",ios::out);
		ofstream q2("ques2.txt",ios::out);
		
		ofstream in11("input11.txt",ios::out); 
		ofstream op11("output11.txt",ios::out);
		ofstream in12("input12.txt",ios::out);
		ofstream op12("output12.txt",ios::out);
		ofstream in21("input21.txt",ios::out);
		ofstream op21("output21.txt",ios::out);
		ofstream in22("input22.txt",ios::out);
		ofstream op22("output22.txt",ios::out);
		
		cout<<"\tQUES-1 TITLE:  ";
		string T1;
		cin>>T1;
		t1<<T1;
		
		cout<<"\n\nCreate first Question-\n\n";
		A[0].get();
		q1<<A[0].ques<<"\n";
		
		cout<<"ENTER 2 TEST CASE(Input and Output) and TYPE # to save the file-\n\n";
		cout<<"\tInput no. 1-\n";
		c[0][0].iget();
		in11<<c[0][0].icase;
		cout<<"\n\tOutput no. 2-\n";
		c[0][0].oget();
		op11<<c[0][0].ocase;
		
		cout<<"\tInput no. 2-\n";
		c[0][1].iget();
		in12<<c[0][1].icase;
		cout<<"\n\tOutput no. 2-\n";
		c[0][1].oget();
		op12<<c[0][1].ocase;
		
		cout<<"\tQUES-2 TITLE:  ";
		string T2;
		cin>>T2;
		t2<<T2;
		
		cout<<"\n\nCreate second Question-\n\n";
		A[1].get();
		q2<<A[1].ques<<"\n";
		cout<<"Enter 2 test cases(Input and Output) and type # to save the file-\n\n";
		
		cout<<"Input no. 1-\n";
		c[1][0].iget();
		in11<<c[1][0].icase;
		cout<<"\n\nOutput no. 2-\n";
		c[1][0].oget();
		op11<<c[1][0].ocase;
		
		cout<<"Input no. 2-\n";
		c[1][1].iget();
		in12<<c[1][1].icase;
		cout<<"\n\nOutput no. 2-\n";
		c[1][1].oget();
		op12<<c[1][1].ocase;
		
		t1.close();
		t2.close();
		q1.close();
		q2.close();
		in11.close();
		in12.close();
		in21.close();
		in22.close();
		op11.close();
		op12.close();
		op21.close();
		op22.close();
	}
void admn()
{
	cout<<"\t\t!!!!!!!HIIII ADMIN!!!!!!\n";
	cout<<"    What do you want to do\n\n";
	cout<<" 1. Create test\n 2. Edit test Cases\n 3. Ranking\n 4. Logout\n\n";
	int op;
	cout<<"      Enter the choice- ";
	cin>>op;
	cout<<"\n";
	if(op==1)
	{
		test();
		cout<<"     Do you want to go back? (y/n)\n";
		char c;
		cin>>c;
		if(c=='y') admn();
		else if(c=='n');
		else
		{
			cout<<"  ?!?! Wrong choice sir !?!?\n";
			Sleep(1500);
			system("cls");
		} 
	}
	else if(op==2)
	{
		ifstream t1("title1.txt",ios::in);
		ifstream t2("title2.txt",ios::in);
		string T;
		t1>>T;
		cout<<"1. "<<T<<endl;
		t2>>T;
		cout<<"2. "<<T<<endl;
		cout<<"Choose the TITLE to RE-ENTER its TEST CASE files.. - ";
		int p;
		cin>>p;
		if(p==1)
		{
			ifstream filin("ques1.txt",ios::in);
			string Q;
			cout<<"\n\nThe Question Is--\n\n";
			if(filin.is_open())
            {
               while(!filin.eof())
               {
                   getline(filin,Q);
                   cout<<Q<<endl;
               }
            }
			filin.close();
			
			ofstream in11("input11.txt",ios::out); 
		    ofstream op11("output11.txt",ios::out);
		    ofstream in12("input12.txt",ios::out);
		    ofstream op12("output12.txt",ios::out);
			cout<<"Enter 2 test cases(Input and Output) and type # to save the file-\n\n";
		    cout<<"Input no. 1-\n";
		    c[0][0].iget();
		    in11<<c[0][0].icase;
		    cout<<"\n\nOutput no. 2-\n";
		    c[0][0].oget();
		    op11<<c[0][0].ocase;
		
		    cout<<"Input no. 2-\n";
		    c[0][1].iget();
		    in12<<c[0][1].icase;
		    cout<<"\n\nOutput no. 2-\n";
		    c[0][1].oget();
		    op12<<c[0][1].ocase;
		    
		    in11.close();
		    in12.close();
		    op11.close();
		    op12.close();
		    
		}
		else if(p==2)
		{
			ifstream filin("ques2.txt",ios::in);
			string Q;
			cout<<"The Question Is--\n\n";
			if(filin.is_open())
            {
               while(!filin.eof())
               {
                   getline(filin,Q);
                   cout<<Q<<endl;
               }
            }
			filin.close();
			
			ofstream in21("input21.txt",ios::out); 
		    ofstream op21("output21.txt",ios::out);
		    ofstream in22("input22.txt",ios::out);
		    ofstream op22("output22.txt",ios::out);
			cout<<"Enter 2 test cases(Input and Output) and type # to save the file-\n\n";
		    cout<<"Input no. 1-\n";
		    c[1][0].iget();
		    in21<<c[1][0].icase;
		    cout<<"\n\nOutput no. 2-\n";
		    c[1][0].oget();
		    op21<<c[1][0].ocase;
		
		    cout<<"Input no. 2-\n";
		    c[1][1].iget();
		    in22<<c[1][1].icase;
		    cout<<"\n\nOutput no. 2-\n";
		    c[1][1].oget();
		    op22<<c[1][1].ocase;
		    
		    in21.close();
		    in22.close();
		    op21.close();
		    op22.close();
		}
		
		cout<<"\n\nDo you want to go back? (y/n)\n";
		    char c;
		    cin>>c;
		    if(c=='y') admn();
		else if(c=='n');
		else
		{
			cout<<"Wrong input\n";
			Sleep(1500);
			system("cls");
		}	
	}
	
	else if(op==3)
	{
		ifstream R("ranking.txt",ios::in);
		string l;
		if(R.is_open())
            {
               while(!R.eof())
               {
                   getline(R,l);
                   cout<<R<<endl;
               }
            }
            
        cout<<"\n\n\t\tDo you want to go back? (y/n)\n";
		    char c;
		    cin>>c;
		    if(c=='y') admn();
		else if(c=='n');
		else
		{
			cout<<"\tWrong input\n";
			Sleep(1500);
			system("cls");
		}
	}
	else if(op==4)
	{
	}
	else 
	{
		cout<<"\n\n\t\tNO nO! WRONG CHOICE ! TRY AGAIN PLZZZ! ";
		system("cls");
		admn();
	}
}


class R{
	public:
		string uname;
		string pass;
}info[50];
void user()
{
	fstream file1("usernames.txt");  
    string line1;
    int i=0;
  while (getline(file1, line1)) {
    info[i].uname=line1;
    i++;
  }
  file1.close();
}
void pass()
{
  int i=0;
  string line2;
  fstream file2("passwords.txt");
  while (getline(file2, line2)) {
    info[i].pass=line2;
    i++;
  }
  file2.close();
}
void reg()
{
	system("cls");
	cout<<"WELCOME TO HACKODE, REGISTER YOURSELF\n\n";
	int i=0;
	string n_in,pass1,pass2;
	char passchar,password1[50],password2[50];
	ofstream file1("usernames.txt",ios::app);
	ofstream file2("passwords.txt",ios::app);
	cout<<"Username: ";
	cin>>n_in;
	cout<<"\n";
	cout<<"Password: ";
	
	while(1)
 {
  passchar=getch();
  if(passchar==13)
   break;
  if(passchar==8) 
  {
   putch('\b');
   putch(0);
   putch('\b');
   --i;
   continue;
  }
  password1[i++]=passchar; 
  passchar='*'; 
  putch(passchar);
 }
 password1[i]='\0';
 pass1=password1;
 
 cout<<"\n";
 cout<<"Confirm Password: ";

i=0;	
	while(1)
 {
  passchar=getch();
  if(passchar==13)
   break;
  if(passchar==8) 
  {
   putch('\b');
   putch(0);
   putch('\b');
   --i;
   continue;
  }
  password2[i++]=passchar; 
  passchar='*'; 
  putch(passchar);
 }
 password2[i]='\0';
 pass2=password2;
	
	cout<<"\n\n";
	if(pass1==pass2)
	{
		file1<<n_in<<"\n";
		file2<<pass1<<"\n";
		cout<<"\tYou are REGISTERED SUCCESSFULLY\n";
		Sleep(1000);
		file1.close();
		file2.close();
		cout<<"\n\nGOING to LOGIN WINDOW";
	}
	else
	{
		file1.close();
		file2.close();
		cout<<"Passwords don't match, Re-enter!\n";
		Sleep(3000);
		reg();
	}
	
}
login()
{
	system("cls");
	cout<<"\t\tLOG-IN TO CoDE ArEnA ENTER YOUR LOGIN STATUS BELOW-\n";
	cout<<"\t\t*******************************************************************\n";
	cout<<"\t\t------     -----  ------   -----   -----    ------   -------  -----\n\n";
	user();
	pass();
	int i;
	char passchar;
	char pword[50];
	string name;
	string password;
	string temp;
	cout<<"Username: ";
	cin>>name;
	cout<<"Password: ";
	
	i=0;	
	while(1)
 {
  passchar=getch();
  if(passchar==13)
   break;
  if(passchar==8) 
  {
   putch('\b');
   putch(0);
   putch('\b');
   --i;
   continue;
  }
  pword[i++]=passchar; 
  passchar='*'; 
  putch(passchar);
 }
 pword[i]='\0';
 password=pword;
 
	for(int i=0;i<50;i++)
	{
		if(name==info[i].uname)
		{
			temp=info[i].pass;
		}
	}
	if(password==temp)
	{
		if(name=="Himanshu18")
		{
			system("cls");
			admn();
			cout<<"\n\tDo You wish to log-out? (yes/no)\n";
			char C;
			cin>>C;
			if(C=='Y') login();
			else if(C=='N') cout<<"\n\n\t\tBYE BYE! SEE YOU SOON..";
			else cout<<"\n\n\t\twrong input..\nBYE BYE! SEE YOU SOON...";
		}
	}
	else 
			{
				cout<<"\n";
				cout<<"\n\tUsername and password doesnt match, please create one to proceed\n\n";
				int opt;
				cout<<"\t\t1. Register\n2. Retry\n3. Exit\n\n";
				cin>>opt;
				if(opt==1)
				{
					reg();
					login();
				}
				else if(opt==2) login();
				
				else if(opt==3)
				{
					cout<<"\n\n\t\tBYE BYE! SEE YOU SOON...";
				    getch();
				}
				else
				{
					cout<<"\n\n\t\tWrong Choice! BYE BYE! SEE YOU SOON..\n";
				}
		    }

}

int main()
{
	cout<<"\t\t1. LOGIN (ARE YOU READY)"<<endl;
	cout<<"\t\t2. REGISTER..\n\n"<<endl;
	int ch;
	cout<<"Enter your INPUT- ";
	cin>>ch;
	cout<<"\n\n";
	switch(ch)
	{
		case 1: 
		{
			login();
		}
		break;
		case 2: 
		{
			reg();
			login();
		}
		break;
		default: cout<<"\n\t\tWrong Choice! BYE BYE! SEE YOU SOON..\n";
	}
}
