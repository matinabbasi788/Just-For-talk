//matin abbasi 788 #
//matinabbasi788@gmail.com

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void start_hello_answer_speak();


int main(){
	//windows version for cls
	//system("cls");
	//Linux version for clear 
	system("clear");
	cout << "WelCome\n\n";
	string status;
	command_line:
	cin >> status;
	if (status == "Hello" || status == "hello" || status == "HELLO" || status == "hi" ||status == "Hi" || status == "HI")
	{
		start_hello_answer_speak();
		cout << endl;
		goto command_line;
	}
	

	else if (status == "help" || status == "Help" || status == "HELP")
	{
		cout << "hello : new conversiton\n";
		goto command_line;
	}

	else
	{
		cout << "Try Agian \"Help\" \n";
		goto command_line;
	}
	
	return 0;
}

void start_hello_answer_speak()
{
	srand (time(NULL));

	cout << "Hello\n\n\nMy name is MatinAbbasi\nWhats Your name: ";
	string answer_name;
	cin >> answer_name;
	cout << "\nNice to meet you " << answer_name << endl << endl;
	string answer_can_speak_english;
	cout << "Can you Speak English ? (Yes) (No) : ";
	try_again_answer:
	cin >> answer_can_speak_english ;
	if(answer_can_speak_english == "No" || answer_can_speak_english == "no" || answer_can_speak_english == "n" || answer_can_speak_english == "N")
	{
		int rand_1;
		rand_1 = rand() %4;
		switch (rand_1)
		{
		case 0:
			cout << "oh :D";
			break;
		case 1:
			cout << "So bad";
			break;
		case 2:
			cout << "...";
			break;
		case 3:
			cout << "don't worry";
			break;
		default:
			break;
		}
		cout << "\nDo you like to learn English ? (Yes) (No) :";
		string like_learning_english;
		cin >> like_learning_english;
		if(like_learning_english == "No" || like_learning_english == "no" || like_learning_english == "n" || like_learning_english == "N")
		{
			cout << "\nOk i'm coming back\n\nI listened. If you want help, just say \"help\"";
		}

		

	}
	else if (answer_can_speak_english == "Yes" || answer_can_speak_english == "yes" || answer_can_speak_english == "y" || answer_can_speak_english == "Y")
	{
		int rand_2;
		rand_2 = rand() %4;
		switch (rand_2)
		{
		case 0:
			cout << "WoW This is great so we can talk :D";
			break;
		case 1:
			cout << "I'm so glad you can speak English";
			break;
		case 2:
			cout << "This is really good";
			break;
		case 3:
			cout << "it's really good";
			break;
		default:
			break;
		}
			
	}
	else
	{
		cout << "\nI did not notice, try again...";
		goto try_again_answer;
	}
	
}