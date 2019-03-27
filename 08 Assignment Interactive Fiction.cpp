#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;

// All the function prototypes
void WelcomeUserToGame();
void ScreenFormat();
void SubScreenFormat();
void UserHelp();
void StoryIntroduction();
void HackerInfiltration();
void StoryInteractionGameInstructions();
void StoryInteractionGame();
void CongratulateUserForDecryptingWord();
void GetTextFromUser();
void GetNumbersFromUser();


int main()
{
	// Changes the title of the program to NSA Agent Interactive Story.
	system("title NSA Agent Interactive Story");
	// Changes the background to black and the font color green.
	system("color 0A");

	// Function in charge of Introducing user. //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL
	WelcomeUserToGame();    //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Function in charge of telling introduction.  //FUNCTION CALL
	StoryIntroduction();    //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Function in charge of collecting number data from user and using the number data.    //FUNCTION CALL
	GetNumbersFromUser();   //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Function in charge of intruding the user to the situation of the story.  //FUNCTION CALL
	HackerInfiltration();   //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Function in charge of telling user instructions. //FUNCTION CALL
	StoryInteractionGameInstructions(); //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Function in charge of Giving user advise.    //FUNCTION CALL
	UserHelp(); //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Function in charge of the word decryption mini-game. //FUNCTION CALL
	StoryInteractionGame(); //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Function in charge of congratulating the user for decrypting the word.   //FUNCTION CALL
	CongratulateUserForDecryptingWord(); //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Function in charge of collecting text from the user and using the text data. //FUNCTION CALL
	GetTextFromUser();  //FUNCTION CALL
	ScreenFormat(); //FUNCTION CALL

	// Prevents the program from just running and not showing the user the console box.
	system("pause");
	// A exit number for the program. If zero is returned at the of the program, then the program ran successfully.
	return 0;
}

// Function definition of WelcomeUserToGame.
void WelcomeUserToGame()
{
	// All the strings in scope.
	string protagonist;
	// Gather and collect the information on the protagonist name.
	cout << "Enter your protagonist name: ";
	cin >> protagonist;
	// cout statement for the introduction.
	cout << "*Welcome to the NSA Agent " << protagonist << ". Congratulations on getting hired, now good luck on your first day!\n";
	// NSA ASCII.
	cout << "\t\t\t																		     \n\n";
	cout << "\t\t\tNNNNNNNN        NNNNNNNN   SSSSSSSSSSSSSSS              AAA               \n\n";
	cout << "\t\t\tN:::::::N       N::::::N SS:::::::::::::::S            A:::A              \n\n";
	cout << "\t\t\tN::::::::N      N::::::NS:::::SSSSSS::::::S           A:::::A             \n\n";
	cout << "\t\t\tN:::::::::N     N::::::NS:::::S     SSSSSSS          A:::::::A            \n\n";
	cout << "\t\t\tN::::::::::N    N::::::NS:::::S                     A:::::::::A           \n\n";
	cout << "\t\t\tN:::::::::::N   N::::::NS:::::S                    A:::::A:::::A          \n\n";
	cout << "\t\t\tN:::::::N::::N  N::::::N S::::SSSS                A:::::A A:::::A         \n\n";
	cout << "\t\t\tN::::::N N::::N N::::::N  SS::::::SSSSS          A:::::A   A:::::A        \n\n";
	cout << "\t\t\tN::::::N  N::::N:::::::N    SSS::::::::SS       A:::::A     A:::::A       \n\n";
	cout << "\t\t\tN::::::N   N:::::::::::N       SSSSSS::::S     A:::::AAAAAAAAA:::::A      \n\n";
	cout << "\t\t\tN::::::N    N::::::::::N            S:::::S   A:::::::::::::::::::::A     \n\n";
	cout << "\t\t\tN::::::N     N:::::::::N            S:::::S  A:::::AAAAAAAAAAAAA:::::A    \n\n";
	cout << "\t\t\tN::::::N      N::::::::NSSSSSSS     S:::::S A:::::A             A:::::A   \n\n";
	cout << "\t\t\tN::::::N       N:::::::NS::::::SSSSSS:::::SA:::::A               A:::::A  \n\n";
	cout << "\t\t\tN::::::N        N::::::NS:::::::::::::::SSA:::::A                 A:::::A \n\n";
	cout << "\t\t\tNNNNNNNN         NNNNNNN SSSSSSSSSSSSSSS AAAAAAA                   AAAAAAA\n\n";
}

// Function definition of ScreenFormat.
void ScreenFormat()
{
	// cout used in formatting.
	cout << "\n\n";
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
	cout << "\n\n";
}

// Function definition of SubScreenFormat.
void SubScreenFormat()
{
	// cout used for sub-formatting.
	cout << "_____________________________________________________________________________________________________________________\n";
}

// Function definition of UserHelp.
void UserHelp()
{
	// cout statement to tell the user to type hint if they want a hint.
	cout << "Type 'hint' for a hint.\n";
	// cout statement to tell the user to type quit if they want to quit.
	cout << "Type 'quit' to quit the game.\n\n";
}

// Function definition of StoryIntroduction.
void StoryIntroduction()
{
	// Cout statements telling introduction of the story.
	cout << "*You sit down at your office desk and look around.\n";
	cout << "*You think to yourself that you never thought you'd work for the NSA.\n";
	cout << "*You snap out of your thinking state and start doing your job.\n\n";
}

// Function definition of HackerInfiltration.
void HackerInfiltration()
{
	// cout statements telling how user's computer has been hacked.
	cout << "*You start noticing your computer slowing down.\n";
	cout << "*You then start hearing other people complain about how there computers are getting slower.\n";
	cout << "*....................................................................................................................\n";
	cout << "*YOUR COMPUTER HAS BEEN HACKED. IT'S NOW LOCKED UNDER AN ENCRYPTION BY THE HACKER GROUP MANGO SIX.\n";
	// Skull ASCII.
	cout << "\t\t\t													\n\n";
	cout << "\t\t\t                 uu$$$$$$$$$$$uu                 \n\n";
	cout << "\t\t\t              uu$$$$$$$$$$$$$$$$$uu              \n\n";
	cout << "\t\t\t             u$$$$$$$$$$$$$$$$$$$$$u             \n\n";
	cout << "\t\t\t            u$$$$$$$$$$$$$$$$$$$$$$$u            \n\n";
	cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
	cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
	cout << "\t\t\t           u$$$$$$"   "$$$"   "$$$$$$u           \n\n";
	cout << "\t\t\t           $$$$        u$u        $$$$           \n\n";
	cout << "\t\t\t            $$$u       u$u       u$$$            \n\n";
	cout << "\t\t\t            $$$u      u$$$u      u$$$            \n\n";
	cout << "\t\t\t              $$$$uu$$$   $$$uu$$$$              \n\n";
	cout << "\t\t\t               $$$$$$$     $$$$$$$               \n\n";
	cout << "\t\t\t                u$$$$$$$u$$$$$$$u                \n\n";
	cout << "\t\t\t                 u$ $ $ $ $ $ $u                 \n\n";
	cout << "\t\t\t      uuu        $$u$ $ $ $ $u$$       uuu       \n\n";
	cout << "\t\t\t     u$$$$        $$$$$u$u$u$$$       u$$$$      \n\n";
	cout << "\t\t\t      $$$$$uu       $$$$$$$$$      uu$$$$$$      \n\n";
	cout << "\t\t\t    u$$$$$$$$$$$uu           uuuu$$$$$$$$$$      \n\n";
	cout << "\t\t\t    $$$$$$$$$$$$$$$$$uuu   uu$$$$$$$$$$$$$$      \n\n";
	cout << "\t\t\t                $$$$$$$$$$$uu$$$$                \n\n";
	cout << "\t\t\t               uuuu$$$$$$$$$$$$$uuu              \n\n";
	cout << "\t\t\t      u$$$uuu$$$$$$$$$uu   $$$$$$$$$$$uuu$$$     \n\n";
	cout << "\t\t\t      $$$$$$$$$$                 $$$$$$$$$$$     \n\n";
	cout << "\t\t\t        $$$$$                         $$$$       \n\n";
	cout << "\t\t\t         $$$                          $$$$       \n\n";
}

// Function definition of StoryInteractionGameInstructions.
void StoryInteractionGameInstructions()
{
	// cout statement introducing the game.
	cout << "*You realize that you can unlock your computer by decrypting your computer.\n";
	// cout statement to tell the user what to do.
	cout << "*Unscramble the letters to make a word.\n";
	// cout statement to tell user how to respond.
	cout << "*type the words that are under quotes for example------> the word \"yes\" is under quotes so it's a word that you can type.\n";
}

// Function definition of StoryInteractionGame.
void StoryInteractionGame()
{
	// A boolean variable for the while statement so the program can keep running until the user doesn't want to.
	bool playAgain = true;
	// A integer variable for the if else statement to figure out whether the user want's to play again or not.
	int result = 0;
	// An enum to define the user data types and containing them into integral constants.
	enum fields { WORD, HINT, NUM_FIELDS };
	// const int NUM_WORDS is the number of words in the jumble solver.
	const int NUM_WORDS = 10;
	// A while statement that will run the program until the user doesn't want to play again.
	while (playAgain == true)
	{
		// const string WORDS[NUM_WORDS] [NUM_FIELDS] is to display the word and the hint.
		const string WORDS[NUM_WORDS][NUM_FIELDS] =
		{
			// {"Computer", "..." } is the first word and hint
			{"Computer", "An electronic device that stores and processes data in binary form, according to instructions from a program.." },
			//{"Malware", "..."}, is the second word and hint
			{"Malware", "Software designed to disrupt, damage, or gain unauthorized access to a computer system."},
			//{"Hacker", "..."}, is the third word and hint.
			{"Hacker", "A person who uses a computer to gain unauthorized access to data."},
			//{"Operation", "..."}, is the fourth word and hint.
			{"Operation", "An organized activity with a codename."},
			//{"Undercover", "..."}, is the fifth word and hint.
			{"Undercover", "Someone who works secretly mostly for investigation purposes."},
			//{"Monitor", "..."}, is the sixth word and hint.
			{"Monitor", "A tool used to observce, check, and keep a record of a process."},
			//{"Espionage", "..."}, is the seventh word and hint.
			{"Espionage", "The practice of spying of spying on someone to tamper with the target."},
			//{"Spy", "..."}, is the eighth word and hint.
			{"Spy", "A person who collects information on their target, without their notice."},
			//{"Encryption", "..."}, is the ninth word and hint.
			{"Encryption", "The process of encoding a message or information."},
			//{"Classified", "..."} is the tenth word and hint.
			{"Classified", "Information that is private, secured, and only a certain group of people can look at."}
		};

		// An srand to put a seed in the random generator.
		srand(static_cast<unsigned int>(time(0)));
		//  An integer to randomly choose the word from the word list.
		int choice = (rand() % NUM_WORDS);
		// A string variable that will collect the word from the word list.
		string jumbleWord = WORDS[choice][WORD];
		// A string variable for the hint correlating to the word list.
		string jumbleHint = WORDS[choice][HINT];

		// A string to correlate the word chosen from the list and the word that will be jumbled.
		string jumble = jumbleWord;
		// The integer for the size of the jumbled word.
		int length = jumble.size();
		// A for loop that will start at zero, will end when i is less than length, and will increment by one and then output i. (This is essential to jumble the words).
		for (int i = 0; i < length; ++i)
		{
			// An integer to randomize the length for index1.
			int index1 = (rand() % length);
			// An integer to randomize the length for index2.
			int index2 = (rand() % length);
			// A char variable that contains the jumble of index1.
			char temp = jumble[index1];
			// the jumble of index1 is now the jumble of index2.
			jumble[index1] = jumble[index2];
			// jumble[index2] returns back to the temp char variable.
			jumble[index2] = temp;
		}

		// A cout statement to show the player a jumbled word to solve.
		cout << "The jumble is: " << jumble;
		// A string variable to contain the player's guess.
		string guess;
		// A cout statement asking for the player's guess.
		cout << "\n\nYour guess: ";
		// A cin to collect the player's guess.
		cin >> guess;

		// A while statement that will keep running the program unless the user type's the correct word or quit.
		while ((guess != jumbleWord) && (guess != "quit"))
		{
			// A if statement that will output a hint if user asks for a hint.
			if (guess == "hint")
			{
				// A cout statement that will display the hint.
				cout << jumbleHint;
			}
			// An else statement that will execute if user's guess is wrong and didn't type hint or quit.
			else
			{
				// A cout statement that will inform the user that there guess is incorrect.
				cout << "Incorrect, please try again.";
			}

			// A cout statement asking for the player's guess.
			cout << "\n\nYour guess: ";
			// A cin to collect the player's guess.
			cin >> guess;
		}

		// A if statement that will execute if the player guessed correctly.
		if (guess == jumbleWord)
		{
			// A cout statement that tell's the user that there guess is correct.
			cout << "\nThat is correct, congratulations you have unlocked your computer.\n";
		}
		// Cout statement asking if user want's to play again (SPECIFICALLY WITH DECYPTING WORD GAME).
		cout << "Would you like to try to decyrpt another word?" << endl;
		SubScreenFormat();
		// cout stating the words to type.
		cout << "TYPE THE NUMBER\n";
		cout << "\"1\"\n";
		cout << "\"2\"\n";
		SubScreenFormat();
		// A cout statement that tell's the user that if they type 1 then the program will run again.
		cout << "1: Yes" << endl;
		// A cout statement that tell's the user that if they type 2 then the program will not run again.
		cout << "2: No" << endl;
		// A cout statement that just point's at the "1: Yes" and "2: No".
		cout << ">";
		// A cin to gather the results on whether the user typed 1 or 2.
		cin >> result;
		// The if else statement that will either make the program loop back or not.
		if (result == 1)
		{
			// The user has typed 1 which mean's the program will run again.
			playAgain = true;
		}
		else if (result == 2)
		{
			// The user has typed 2 which mean's the the program will not run again
			playAgain = false;
		}
		else
		{
			// The user typed something else besides 1 or 2. So the program will still not run again.
			playAgain = false;
		}
	}

}

// Function definition of CongratulateUserForDecryptingWord.
void CongratulateUserForDecryptingWord()
{
	// cout statement to congratulate the user for decrypting the word.
	cout << "*Congratulations agent you have decrypted your computer.\n";
}

// Function definition of GetTextFromUser.
void GetTextFromUser()
{
	// String variables for the function.
	string UnkownFolder, yes, no, FolderAction, destroy, investigate, FileActionConflicted, job, inform, leak, quit, work;
	cout << "*Once you've gained access of your computer you see a folder called \"CLICK ME!\".\n";
	SubScreenFormat();
	// cout stating the words to type.
	cout << "TYPE THE WORD\n";
	cout << "1:\"yes\"\n";
	cout << "2:\"no\"\n";
	SubScreenFormat();
	cout << "*Do You open the folder?\n";
	cin >> UnkownFolder;
	// The if statement that branches the story if "yes" is typed.
	if (UnkownFolder == "yes")
	{
		ScreenFormat();
		cout << "*You decide to open the folder due to curiosity.\n";
		cout << "*You see a lot of information on the NSA and all of it is classified information.\n";
		SubScreenFormat();
		// cout stating the words to type.
		cout << "TYPE THE WORD\n";
		cout << "1:\"destroy\"\n";
		cout << "2:\"inform\"\n";
		cout << "3:\"investigate\"\n";
		SubScreenFormat();
		cout << "*Do you destroy the file, inform your supervisor, or investigate more?\n";
		cin >> FolderAction;
		// The if statement that branches the story depending if "destroy", "inform", or "investigate" is typed.
		if (FolderAction == "destroy")
		{
			// Story Scenario.
			ScreenFormat();
			cout << "*You destroy the file and assist in recovering computers at the NSA.\n";
			cout << "*You get promoted for your work and continue working at the NSA.\n";
			cout << "*You live the rest of your life like an average NSA worker.\n";
			cout << "***PLAYER HAS COMPLETED STORY WITH A PEACEFUL ENDING!***\n";
			ScreenFormat();
		}
		else if (FolderAction == "inform")
		{
			// Story Scenario.
			ScreenFormat();
			cout << "*You inform your supervisor.\n";
			cout << "*Your supervisor obtains the folder through a quarantine procedure.\n";
			cout << "*Your supervisor says thank you for telling me.\n";
			cout << "*A couple days later you hear on the news and by co-workers that NSA workers and former NSA workers have been arrested in espionage.\n";
			cout << "*You get promoted for your work and continue working at the NSA.\n";
			cout << "*You live the rest of your life like an average NSA worker.\n";
			cout << "*You still wonder why did NSA workers and former NSA workers commit espionage?\n";
			cout << "***PLAYER HAS COMPLETED STORY WITH A PEACEFUL BUT CONFUSING ENDING!***\n";
			ScreenFormat();
		}
		// Else if statement that give's the story scenario if user typed "investigate".
		else if (FolderAction == "investigate")
		{
			ScreenFormat();
			cout << "*You investigate more and realize that all this classified information details how and who the NSA spies on.\n";
			cout << "*You start feeling concerned.\n";
			cout << "*You start questioning on whether you should leak this information for the people to know what's behind the NSA.\n";
			SubScreenFormat();
			// cout stating the words to type.
			cout << "TYPE THE WORD\n";
			cout << "1:\"destroy\"\n";
			cout << "2:\"leak\"\n";
			SubScreenFormat();
			cout << "*Do you leak this classified information or destroy the file?\n";
			cin >> FileActionConflicted;
			// An if statement that give's the story scenario if user types "destroy" at this moment.
			if (FileActionConflicted == "destroy")
			{
				ScreenFormat();
				cout << "*You destroy the file and assist in recovering computers at the NSA.\n";
				cout << "*You get promoted for your work and continue working at the NSA.\n";
				SubScreenFormat();
				// cout stating the words to type.
				cout << "TYPE THE WORD\n";
				cout << "1:\"work\"\n";
				cout << "2:\"quit\"\n";
				SubScreenFormat();
				cout << "*You work at the NSA for a while but feel so conflicted about your job. Do you keep working or quit?\n";
				cin >> job;
				// An if statement that give's the story scenario if user types "work". 
				if (job == "work")
				{
					// Story Scenario.
					ScreenFormat();
					cout << "*You continue to work.\n";
					cout << "*You can't seem to not stop feeling conflicted for the rest of your career at the NSA.\n";
					cout << "***PLAYER HAS COMPLETED STORY WITH CONFLICTED ENDING!***\n";
					ScreenFormat();
				}
				// An else if statement that give's the story scenario if user types "quit".
				else if (job == "quit")
				{
					// Story Scenario.
					ScreenFormat();
					cout << "*after a while at working at the NSA you decide to quit from the NSA and get a job somewhere else.\n";
					cout << "***PLAYER HAS COMPLETED STORY WITH WORRIED ENDING!***\n";
					ScreenFormat();
				}
			}
			// An else if statement that give's the story scenario if user types "leak".
			else if (FileActionConflicted == "leak")
			{
				// Story Scenario.
				ScreenFormat();
				cout << "*You decide to leak out the information.\n";
				cout << "*It took a lot of planning and obstacles to figure out how to obtain the folder.\n";
				cout << "*Your at home looking at your computer realizing what you'll do will turn you into a criminal in the eyes of the government.\n";
				cout << "*You sigh heavily...And leak out the information in the file.\n";
				cout << "*You've been granted asylum in Iceland.\n";
				cout << "*Soon news organizations start to reveal the leaks to the public.\n";
				cout << "*Many protests have occurred around the world against the NSA.\n";
				cout << "*Some people see you as a traitor but many people around the world see you as a hero.\n";
				cout << "*You believe what you did was right and the people had to know what the NSA was doing to them.\n";
				cout << "*But the government of the United States see you as a traitor and will without hesitation arrest you.\n";
				cout << "***PLAYER HAS COMPLETED STORY WITH WHISTLE BLOWER ENDING!***\n";
				ScreenFormat();
			}
		}
	}
	// An else if statement that branches the story when user types "no".
	else if (UnkownFolder == "no")
	{
		ScreenFormat();
		//
		cout << "*You don't open the folder.\n";
		SubScreenFormat();
		// cout stating the words to type.
		cout << "TYPE THE WORD\n";
		cout << "1:\"destroy\"\n";
		cout << "2:\"inform\"\n";
		SubScreenFormat();
		cout << "*Do you destroy the file or inform your supervisor?\n";
		cin >> FolderAction;
		// An if statement that give's the story scenario if user types "destroy".
		if (FolderAction == "destroy")
		{
			// Story Scenario.
			ScreenFormat();
			cout << "*You destroy the file and assist in recovering computers at the NSA.\n";
			cout << "*You get promoted for your work and continue working at the NSA.\n";
			cout << "*You live the rest of your life like an average NSA worker.\n";
			cout << "***PLAYER HAS COMPLETED STORY WITH A PEACEFUL ENDING!***\n";
			ScreenFormat();
		}
		// An else if statement that give's the story scenario if user types "inform"
		else if (FolderAction == "inform")
		{
			// Story Scenario.
			ScreenFormat();
			cout << "*You inform your supervisor.\n";
			cout << "*Your supervisor obtains the folder through a quarantine procedure.\n";
			cout << "*Your supervisor says thank you for telling me.\n";
			cout << "*A couple days later you hear on the news and by co-workers that NSA workers and former NSA workers have been arrested in espionage.\n";
			cout << "*You get promoted for your work and continue working at the NSA.\n";
			cout << "*You live the rest of your life like an average NSA worker.\n";
			cout << "*You still wonder why did NSA workers and former NSA workers commit espionage?\n";
			cout << "***PLAYER HAS COMPLETED STORY WITH A PEACEFUL BUT CONFUSING ENDING!***\n";
			ScreenFormat();
		}
	}
}

// Function Definition for GetNumbersFromUser.
void GetNumbersFromUser()
{
	// All the integers in scope.
	int SugarCubes;
	cout << "*All of a sudden your in a mood for some green herbal tea.\n";
	cout << "*You leave your desk to go get some green herbal tea.\n";
	cout << "*How many cubes of sugar do you decide to put in your tea?\n";
	SubScreenFormat();
	cout << "TYPE ANY NUMBER\n";
	cin >> SugarCubes;
	// An if else statement that branches the direction of the story depending on what number the user typed.
	if (SugarCubes < 2 || SugarCubes == 2)
	{
		// Story
		cout << "*You decided to go safe to prevent a sugar crash on your first day.\n";
		SubScreenFormat();
	}
	else if (SugarCubes > 2 && SugarCubes != 2)
	{
		// Story
		cout << "*You want some extra sugar to keep you more awake and energetic for your first day.\n";
		SubScreenFormat();
	}
	cout << "*You go back to your desk and work after your done with your tea.\n";
}