#include<fstream.h>
#include<kbc.h>
#include<string.h>
#include<conio.h>

int main()
{
  Ques q[15];
  ofstream fout("KBC.dat",ios::binary);
  strcpy(q[0].ques,"Q. Which of these animals is not a reptile?\n");
  strcpy(q[0].opt[0],"A. Snake");
  strcpy(q[0].opt[1],"B. Crocodile");
  strcpy(q[0].opt[2],"C. Cattle");
  strcpy(q[0].opt[3],"D. Lizard");
  q[0].copt='C';
  strcpy(q[1].ques,"Q. Which swimmer has won the most no. of gold medals in the Olympic games?\n");
  strcpy(q[1].opt[0],"A. Ian Thorpe");
  strcpy(q[1].opt[1],"B. Alexander Popov");
  strcpy(q[1].opt[2],"C. Gary Hall, Jr.");
  strcpy(q[1].opt[3],"D. Michael Phelps");
  q[1].copt='D';
  strcpy(q[2].ques,"Q. Who won the first Nobel Prize in Physics?\n");
  strcpy(q[2].opt[0],"A. Wilhelm Rontgen");
  strcpy(q[2].opt[1],"B. Marie Curie");
  strcpy(q[2].opt[2],"C. Pieter Zeeman");
  strcpy(q[2].opt[3],"D. Hendrick Lorentz");
  q[2].copt='A';
  strcpy(q[3].ques,"Q. When was the first human heart transplant operation conducted?\n");
  strcpy(q[3].opt[0],"A. 1967");
  strcpy(q[3].opt[1],"B. 1969");
  strcpy(q[3].opt[2],"C. 1958");
  strcpy(q[3].opt[3],"D. 1973");
  q[3].copt='A';
  strcpy(q[4].ques,"Q. When did the first development flight of SLV-3 took place?\n");
  strcpy(q[4].opt[0],"A. May 31, 1981");
  strcpy(q[4].opt[1],"B. April 17, 1983");
  strcpy(q[4].opt[2],"C. December 21, 1999");
  strcpy(q[4].opt[3],"D. December 28, 1995");
  q[4].copt='A';
  strcpy(q[5].ques,"Q. Who is the first player for Afghanistan to play in the IPL?\n");
  strcpy(q[5].opt[0],"A. Dawlat Zardan");
  strcpy(q[5].opt[1],"B. Mohammad Shahzad");
  strcpy(q[5].opt[2],"C. Rashid Khan");
  strcpy(q[5].opt[3],"D. Mohammad Nabi");
  q[5].copt='C';
  strcpy(q[6].ques,"Q. Who succeeded Raghuram Rajan as the RBI Governor in Sept. 2016?\n");
  strcpy(q[6].opt[0],"A. A.D. Subhrao");
  strcpy(q[6].opt[1],"B. Y.V. Reddy");
  strcpy(q[6].opt[2],"C. Urjit Patel");
  strcpy(q[6].opt[3],"D. Bimal Jalan");
  q[6].copt='C';
  strcpy(q[7].ques,"Q. Who is the author of the books 'Bandar Sabha' and 'Bakri Vilap'?\n");
  strcpy(q[7].opt[0],"A. Rahul Sankrityayan");
  strcpy(q[7].opt[1],"B. Nalin Vilochan Sharma");
  strcpy(q[7].opt[2],"C. Acharya Shivpujan Sahy");
  strcpy(q[7].opt[3],"D. Bharatendu Harishchandra");
  q[7].copt='D';
  strcpy(q[8].ques,"Q. Who won the 3000m Steeplechase Gold Medal at the 1958 Tokyo Asian Games?\n");
  strcpy(q[8].opt[0],"A. Susumu Takahashi");
  strcpy(q[8].opt[1],"B. Mubarak Shah");
  strcpy(q[8].opt[2],"C. Masayki Nunogami");
  strcpy(q[8].opt[3],"D. Paan Singh Tomar");
  q[8].copt='B';
  strcpy(q[9].ques,"Q. Which of the following is not a pair of parent and child, who have both won Nobel Prize?\n");
  strcpy(q[9].opt[0],"A. Marie Curie and Irene Curie");
  strcpy(q[9].opt[1],"B. Neils Bohr and Aage Bohr");
  strcpy(q[9].opt[2],"C. J.J. Thompson and George Paget Thompson");
  strcpy(q[9].opt[3],"D. Herman Emil Fischer and Hans Fischer");
  q[9].copt='D';
  strcpy(q[10].ques,"Q. Who are the only married couple elected to the 16th Lok Sabha?\n");
  strcpy(q[10].opt[0],"A. Sukhbir Singh-Harshimrat Kaur Badal");
  strcpy(q[10].opt[1],"B. Pappu Yadav-Ranjeet Ranjan");
  strcpy(q[10].opt[2],"C. Prakash-Brinda Karat");
  strcpy(q[10].opt[3],"D. Priya Ranjan-Deepa Dasmunshi");
  q[10].copt='B';
  strcpy(q[11].ques,"Q. Which of these naval excercises is conducted jointly by India and Singapore?\n");
  strcpy(q[11].opt[0],"A. Varuna");
  strcpy(q[11].opt[1],"B. Malabar");
  strcpy(q[11].opt[2],"C. Simbex");
  strcpy(q[11].opt[3],"D. Slinex");
  q[11].copt='C';
  strcpy(q[12].ques,"Q. Which of these is produced in plants of Narora, Kakrapar and Tarapur?\n");
  strcpy(q[12].opt[0],"A. Atomic Power");
  strcpy(q[12].opt[1],"B. EMVs");
  strcpy(q[12].opt[2],"C. Coins");
  strcpy(q[12].opt[3],"D. Rail Coaches");
  q[12].copt='A';
  strcpy(q[13].ques,"Q. The resting place of Mughal Emperor Babur is situated in which city?\n");
  strcpy(q[13].opt[0],"A. Multan");
  strcpy(q[13].opt[1],"B. Kabul");
  strcpy(q[13].opt[2],"C. Delhi");
  strcpy(q[13].opt[3],"D. Lahore");
  q[13].copt='B';
  strcpy(q[14].ques,"Q. Which battle in 1757 marked the beginning of British occupation in India?\n");
  strcpy(q[14].opt[0],"A. Buxar");
  strcpy(q[14].opt[1],"B. Cuddalore");
  strcpy(q[14].opt[2],"C. Plassey");
  strcpy(q[14].opt[3],"D. Assaye");
  q[14].copt='C';
  for(int i=0;i<15;i++)
  {
	  q[i].id=i+1;
	  fout.write((char*)&q[i],sizeof(q[i]));
  }
  fout.close();
  getch();
  return 0;
}