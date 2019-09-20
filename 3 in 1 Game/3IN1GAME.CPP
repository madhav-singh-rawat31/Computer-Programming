#include<iostream.h>
#include<tictacto.h>
#include<kbc.h>
#include<lottery.h>
#include<conio.h>
#include<stdlib.h>

void call()
 {   textcolor(LIGHTGREEN);
     clrscr();
     cout<<"\t\tPlease Enter the Game You Want To Play\n\n";
     cout<<"\t\t                  _|_|_"<<endl;
     cout<<"\t\t1.Tic Tac Toe ->  _|_|_"<<endl;
     cout<<"\t\t                   | | \n\n";
     cout<<"\n\t\t2.Kon Banega Crorepati ->\n\n";
     cout<<"\n\t\t3.Lottery Game ->\n\n";
     cout<<"\n\t\t4.Credits ->\n\n";
     cout<<"\n\t\t5.Exit ->";

     int n;
     cout<<"\n\n\t\t-> ";
     cin>>n;
     if(n==1)
     {
     cout<<"\n\n\t\tLaunching TIC TAC TOE.....\n\n\t\t" ;
     system("pause");
     tictactoe();
     call();
     }

     else if(n==2)
     {
     cout<<"\n\n\t\tLaunching Kon Banega Crorepati.....\n\n\t\t" ;
     system("pause");
     kbc();
     call();
     }
     else if(n==3)
     {
     cout<<"\n\n\t\tLaunching Lottery.....\n\n\t\t" ;
     system("pause");
     lottery();
     call();
	  }
     else if(n==4)
     {      clrscr();
       textcolor(YELLOW);
	cout<<"\n\n\t\t\tMade By"
	<<"\n\t\tMadhav Singh XII-E"
	<<"\n\t\tShubham Sharma XII-E\n\n\t	"<<endl;
	system("pause");
	call();
	}

   else if(n==5)
     {
      cout<<"\n\n\tExiting......\n\n\t\t";
      system("pause");
      exit(0);

   }

}   void main()
   {
    clrscr();
    call();
    clrscr();
    getch();

    }