#include<iostream.h>
#include<conio.h>
#include<time.h> // for time function
#include<stdlib.h> // for rand and srand functions
#include<string.h>

void load3();
void load3()
{

 gotoxy(30,10); cout<<"Loading...";
 gotoxy(25,11); cout<<"ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»";
 gotoxy(25,12); cout<<"º °°°°°°°°°°°°°°°°°°°°°°°°°°° º";
 gotoxy(25,13); cout<<"ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼";
 for(int a=27;a<=53;a++)
 { delay(100);

   gotoxy(a,12);printf("%c",219);

   }


  }

void lottery()
{      textcolor(MAGENTA);
       clrscr();
       load3();
	// Generate a lottery
	clrscr();
       srand(time(0));
	int lottery = rand()%1000 + 1;

  textcolor(BROWN);
clrscr();
cout<<"\tPlease Enter Your Name"<<endl;
  cout<<"\t-> ";
char name[50];

  fstream file;
  file.open ("user.dat", ios::out | ios::in );

  cin.getline(name, sizeof(name));
   
gets(name);

   system("pause");
  // Writing on file
  file << name << endl;

// Promt the user to enter a guess
	clrscr();
	textcolor(BROWN);
	cout  << "\t\tYour lottery Guess (0 - 1000) :  ";
	cout<<"\n\t Enter -> ";
	int guess;
	cin >> guess;


	// get digits from lottery
	int lotteryDigit1 = lottery / 10;
	int lotteryDigit2 = lottery % 10;
        int lotteryDigit3 = lottery % 100;
	// get digits from guess
	int guessDigit1 = guess / 10;
	int guessDigit2 = guess % 10;
        int guessDigit3 = lottery % 100;
	cout << "\n\tThe lottery number is....\n\t\t";
	cout << lottery << endl;

	// check the guess
	if (guess == lottery)
	      {	cout << "\n\n\t\tExact match: ";
		puts(name);
		cout<<"\t\tYou win a 500 Crore !!!" << endl;    }
	else if (guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2)
	    {cout << "\n\n\t\tMatched all digits: ";
		puts(name);
		cout<<"\t\tYou win 100 Crore !!!" << endl;}
	else if (guessDigit1 == lotteryDigit1 || guessDigit2 == lotteryDigit1 || guessDigit1 == lotteryDigit2 || guessDigit2 == lotteryDigit2)
		{

		    cout << "\t\tMatched one digit: ";
			 puts(name);
			 cout<<"\t\tYou win 4 Crore!!!!!!!!!" << endl;
		    cout << "\t\tJust Kidding, you won 2 Rs. Good Day!!!" << endl;

	}
	else
	{
		cout << "\n\t Fortunately The game is Over and so is your Luck  ";
		puts(name);
		cout<<"\t\tYou Lost!! " << endl;
		}

	system("pause");


}
