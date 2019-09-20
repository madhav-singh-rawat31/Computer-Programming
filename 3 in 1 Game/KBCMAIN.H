#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>

static int k;
class Ques
{
 public:
  int id;
  char ques[120];
  char opt[4][80];
  char copt;
  int noq()
  {
    int noq=0;
    ifstream fin("KBC.dat",ios::binary);
    if(!fin)
      noq=0;
    else
    {
      fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	noq++;
	fin.read((char*)this,sizeof(*this));
      }
    }
    fin.close();
    return noq;
  }
  void insques()
  {
	ofstream fout("KBC.dat",ios::app|ios::binary);
	id=noq();
	++id;
	cout<<"Enter Question = ";
	gets(ques);
	k=strlen(ques);
	k++;
	ques[k]='\n';
	for(int i=0;i<4;i++)
	{
	  cout<<"Enter Option "<<i+1<<" = ";
	  gets(opt[i]);
	}
	cout<<"Enter Correct Option = ";
	cin>>copt;
	fout.write((char*)this,sizeof(*this));
	cout<<"Question Inserted!!!\n";
	system("pause");
	fout.close();
  }
  void showques(int qno)
  {
	k=strlen(ques);
	k++;
	for(int i=0;i<=k;i++)
	{
	  if(ques[i]=='.'&&ques[i-1]=='Q')
	    cout<<ques[i]<<++qno;
	  else
	    cout<<ques[i];
	}
	cout<<"\n\n";
	for(i=0;i<4;i++)
	    puts(opt[i]);
	cout<<endl;
  }
  void showallques()
  {
	int i=0;
	ifstream fin("KBC.dat",ios::binary);
	fin.read((char*)this,sizeof(*this));
	while(!fin.eof())
	{
	  clrscr();
	  showques(i);
	  getch();
	  fin.read((char*)this,sizeof(*this));
	  i++;
	}
	fin.close();
  }
  void deleteques(int gid)
  {
	ifstream fin("KBC.dat",ios::binary);
	ofstream fout("temp.dat",ios::binary);
	fin.read((char*)this,sizeof(*this));
	while(!fin.eof())
	{
		if(id!=gid)
			fout.write((char*)this,sizeof(*this));
		fin.read((char*)this,sizeof(*this));
    }
    fout.close();
    fin.close();
    remove("KBC.dat");
    rename("temp.dat","KBC.dat");
    cout<<"Press any key to view questions...";
    getch();
    clrscr();
    showallques();
  }
  int chkans(char ch)
  {
	if(ch==copt||ch==(copt+32))
	    return 1;
	else
	    return 0;
  }
};

void dispdate()
{
  struct date d1;
  getdate(&d1);
  int ch=d1.da_day,ch1=d1.da_mon;
  char mon[15];
  switch (ch1)
  {
    case 1: strcpy(mon,"January");
    break;
    case 2: strcpy(mon,"February");
    break;
    case 3: strcpy(mon,"March");
    break;
    case 4: strcpy(mon,"April");
    break;
    case 5: strcpy(mon,"May");
    break;
    case 6: strcpy(mon,"June");
    break;
    case 7: strcpy(mon,"July");
    break;
    case 8: strcpy(mon,"August");
    break;
    case 9: strcpy(mon,"September");
    break;
    case 10: strcpy(mon,"October");
    break;
    case 11: strcpy(mon,"November");
    break;
    case 12: strcpy(mon,"December");
    break;
  };
  cout<<ch<<" "<<mon<<", "<<d1.da_year<<"\n\n";
}