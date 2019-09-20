#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
#include<dos.h>
//using namespace std;

char turn = 'X' ;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,col;
int draw = 0;
void load();
void user();
void load()                               //Loading Function
{  textcolor(CYAN);
   clrscr();
 gotoxy(30,10); cout<<"Loading...";
 gotoxy(25,11); cout<<"ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
 gotoxy(25,12); cout<<"º °°°°°°°°°°°°°°°°°°°°°°°°°°° º";
 gotoxy(25,13); cout<<"ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
 for(int a=27;a<=53;a++)
 { delay(100);

   gotoxy(a,12);printf("%c",219);

   }
 getch();

 textcolor(10);
 cout<<"\n\n\t\tLoading Completed....";
 textcolor(7);
 getch();

 }

void display_board()
{
clrscr();


	cout<<"\n\n\t\t  Tick Tac Toe Game"<<endl;
cout<<"\n\t\tPlayer1 [X] \n\t\tPlayer2 [O]\n\t\tEnter Q/q to Exit\n\n";
cout<<"\t\t     |     |     \n";
cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
cout<<"\t\t_____|_____|_____\n";
cout<<"\t\t     |     |     \n";
cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
cout<<"\t\t_____|_____|_____\n";
cout<<"\t\t     |     |     \n";
cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
cout<<"\t\t     |     |     \n";
}

void player_turn()
{         textcolor(CYAN);

	int choice;

	if(turn=='X')
	{ textcolor(LIGHTGREEN);
	cout<<"\n\n\tPlayer1 [X] Turn: " ;
	}
	if(turn=='O')
	{ textcolor(LIGHTMAGENTA);
	cout<<"\n\n\tPlayer2 [O] Turn: " ;
	}
     cin>>choice;
     cout<<"\n\n";

switch(choice)
{
	case 1:
	row=0;col=0;
		break;
	case 2:
	row=0;col=1;
		break;
	case 3:
	row=0;col=2;
		break;
	case 4:
	row=1;col=0;
		break;
	case 5:
	row=1;col=1;
		break;
	case 6:
	row=1;col=2;
		break;
	case 7:
	row=2;col=0;
		break;
	case 8:
	row=2;col=1;
		break;
	case 9:
	row=2;col=2;
		break;
	default:
	cout<<"\t\t\t\tExiting"<<endl;
	cout<<"\tThank you for Playing";
	system("\t\t\tpause");
	exit(0);
	break;

  }

	 if(turn == 'X' && board[row][col] != 'X' && board[row][col] != 'O' )
	 {
	 board[row][col]= 'X';
	 turn = 'O' ;
		 }
	 else if(turn == 'O' && board[row][col] != 'X' && board[row][col] != 'O')
	 {
	 board[row][col]= 'O';
	 turn = 'X' ;
		}
	  else
	 {
	   cout<<"\t\tBox Already Filled!! \n\n\t\tPlease Try Again!! \n\n";

	   player_turn();

	  }

	 display_board();
 }

int gameover()
{
 //for winning
 for(int i=0;i<3;i++)
  {
  if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i] )
  return 0;

  else if ( board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board[0][2]==board[2][0])
  return 0;

  }

 //To check filled boxes
  for(i=0;i<3;i++)
  for(int j=0;j<3;j++)
 { if(board[i][j] !='X' && board[i][j] !='O')
  return 1;
 }
  //Draw
	draw = 1;
	return 0;
}




void tictactoe()
{

  textcolor(CYAN);
  load();
  textcolor(RED);
clrscr();
cout<<"\tPlease Enter Your Name"<<endl;
  char name[50];

  fstream file;
  file.open ("user.dat", ios::out | ios::in );

  cin.getline(name, sizeof(name));
   gets(name);
   system("pause");
  // Writing on file
  file << name << endl;

  while(gameover())
  {

   display_board();

   player_turn();

   gameover();

  }


  if( turn == 'O' && draw==0)
    cout<<"\n\n\tPlayer1 [X] Wins!! Congratulations\n\n"
	 <<"\tThank you for Playing "<<name;


  else if( turn == 'X' && draw==0)
  cout<<"\n\n\tPlayer2 [O] Wins!! Congratulations\n\n"
	<<"\tThank you for Playing "<<name;

  else
  cout<< "\n\n\t\t!!GAME DRAW !!\n\n"
	 <<"\tThank you for Playing "<<name;

 getch();

 }


