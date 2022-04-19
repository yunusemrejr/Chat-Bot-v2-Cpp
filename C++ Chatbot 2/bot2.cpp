#include <iostream>
#include<string.h>
#include<string>
#include <windows.h>
#include<stdio.h>
#include <conio.h>
#include <cmath>
#include <ctime>

using namespace std;
	int numberoftask;
	const char* presidents[]={
		
		
		
		"US Presidents are:",
		"1 George Washington",
		"2 John Adams  ",
		"3 Thomas Jefferson  ",
		"4 James Madison  ",
		"5 James Monroe  ",
		"6 John Quincy Adams",
		"7 Andrew Jackson",
		"8 Martin Van Buren",
		"9 William Henry Harrison",
		"10 John Tyler",
		"11 James K. Polk",
		"12 Zachary Taylor",
		"13 Millard Fillmore",
		"14 Franklin Pierce",
		"15 James Buchanan",
		"16 Abraham Lincoln",
		"17 Andrew Johnson",
		"18 Ulysses S. Grant",
		"19 Rutherford B. Hayes",
		"20 James Garfield",
		"21 Chester Arthur",
		"22 Grover Cleveland",
		"23 Benjamin Harrison",
		"24 Grover Cleveland",
		"25 William McKinley",
		"26 Theodore Roosevelt",
		"27 William Howard Taft",
		"28 Woodrow Wilson",
		"29 Warren G. Harding",
		"30 Calvin Coolidge",
		"31 Herbert Hoover",
		"32 Franklin D. Roosevelt",
		"33 Harry S. Truman",
		"34 Dwight Eisenhower",
		"35 John F. Kennedy",
		"36 Lyndon B. Johnson",
		"37 Richard Nixon",
		"38 Gerald Ford ",
		"39 Jimmy Carter",
		"40 Ronald Reagan",
		"41 George Bush",
		"42 Bill Clinton",
		"43 George W. Bush",
		"44 Barack Obama",
		"45 Donald Trump",
		"46 Joe Biden",
		
		
		
		"Turkish Presidents are:",
		"Mustafa Kemal ATATURK",
		"Ismet INONU",
		"Celal BAYAR",
		"Cemal GURSEL",
		"Cevdet SUNAY",
		"Fahri KORUTURK",
		"Kenan EVREN",
		"Turgut OZAL",
		"Suleyman DEMIREL",
		"Ahmet Necdet SEZER",
		"Abdullah GUL",
		"Recep Tayyip ERDOGAN",
		};
		
	const char* penguins[]={
		"Emperor",
		"King",
		"Gentoo",
		"Magellanic",
		"Chinstrap",
		"Adelie",
		"Macaroni",
		"Rockhopper"
		
	};
	
	string quotes[5]={
	"'Be yourself; everyone else is already taken.' - Oscar Wilde",
	"'You only live once, but if you do it right, once is enough.' - Mae West",
	"'If you tell the truth, you don't have to remember anything.' - Mark Twain",
	"'A friend is someone who knows all about you and still loves you.' - Elbert Hubbard",
	"'To live is the rarest thing in the world. Most people exist, that is all.' - Oscar Wilde"
	};
	
	
	
void getTask(){
	int firstint;
	int secondint;
	int resultofsum;
	int resultofsqarerootorcube;
	if(numberoftask==1){
		cout <<"Please provide the first integer for me to add: "<<endl;
		cin>>firstint;
		cout <<"Please provide the second integer for me to add: "<<endl;
		cin>>secondint;
		resultofsum=firstint+secondint;
		cout<<"Sucess! When you add "<<firstint<<" and "<<secondint<<" , you get: "<<resultofsum<<endl;

	}
	else if(numberoftask==2) {
cout <<"Please provide the integer for me to get the square root of: "<<endl;	
			cin>>firstint;
			resultofsqarerootorcube=sqrt(firstint);
   cout << "the square root of "<<firstint<<" is "<<resultofsqarerootorcube<<endl;
   }
	else if(numberoftask==3) {
cout <<"Please provide the integer for me to get the cube root of: "<<endl;	
			cin>>firstint;
			resultofsqarerootorcube=cbrt(firstint);
   cout << "the cube root of "<<firstint<<" is "<<resultofsqarerootorcube<<endl;
   	}
	
	else if(numberoftask==4) {
		for(int i=0;i<5;i++){
			cout<<"CLEAN YOUR ROOM!"<<endl;
		}
	}
	
	else if(numberoftask==5) {
	
		for(int i =0;i<60;i++) {
			cout<<presidents[i]<<endl;
		}
	}
	
	else if(numberoftask==6) {
           for(int penguin =0;penguin<60;penguin++) {
			cout<<penguins[penguin]<<endl;
		}
			}
	
	else if(numberoftask==7) {
		cout <<"Here is your random quote: "<<endl;
		    //random array elements = i
			int randomquoteindex=rand()%5;
			string randqu=quotes[randomquoteindex];
			
       
       
		cout<<randqu<<endl;
	}
	
    
}

void conversation() {
	
	cout<<"   "<<endl;
	cout<<"So what's your name?'"<<endl;
	string urName;
	cin>>urName;
	cout<<"Nice to meet you "<<urName<<"!"<<endl;
	cout<<"********************************"<<endl;
	cout<<"I am Chat Bot v.2"<<endl;
	cout<<"I am different from v.1, which is 'Basic Chat Bot.'"<<endl;
	cout<<"Here is a list of things you can ask me to do: "<<endl;
	cout<<"1. Add integers"<<endl;
    cout<<"2. Calculate sqaure root"<<endl;
    cout<<"3. Calculate cube root"<<endl;
    cout<<"4. Tell you to clean your room 5 times"<<endl;
    cout<<"5. Give you the list of US presidents and Turkish presidents"<<endl;
    cout<<"6. Give you the list of penguin species in Antarctica"<<endl;
    cout<<"7. Pick a random quote for you."<<endl;
    	cout<<"********************************"<<endl;
	cout<<"type the number of the task for me to complete:"<<endl;
	cin>>numberoftask;
	
	if(numberoftask>0&&numberoftask<8){
		cout<<"Splendid! Let's go!"<<endl;
		getTask();
	}
	
	else{
		
	cout<<"not something I know! I am restarting!";
	cout<<" "<<endl;
	cout<<"********************************"<<endl;
	cout<<"********************************"<<endl;
	cout<<"********************************"<<endl;
	cout<<"********************************"<<endl;
	cout<<"********************************"<<endl;

		conversation();
	}

    
}


void firstStep() {

const char* continueOrNot = "If you would like to continue please press 1, to quit anything else.";
int keyInput;

cout<<continueOrNot<<endl;
cout<<"   "<<endl;
cin>>keyInput;

if(keyInput==1) {
	cout<<"   "<<endl;
	cout <<"hi"<<endl;
	conversation();
}

else{
	cout<<"bye"<<endl;
}

    }
    


int main() {	srand( time(NULL) );

HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
system("COLOR f3");
const char * welcomeText;
welcomeText = "Welcome to C++ Chat Bot v.2 By Yunus E. V.";
cout<<"   "<<endl;
cout<<"   "<<endl;

cout <<welcomeText<<endl;
cout<<"   "<<endl;

cout<<"-------------------------"<<endl;
cout<<"   "<<endl;


firstStep();

getch();
return 0;
}
