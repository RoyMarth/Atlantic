#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	cout<< "                .'|     .8\n               .  |    .8:\n              .   |   .8;:        .8\n             .    |  .8;;:    |  .8;\n            .     n .8;;;:    | .8;;;\n           .      M.8;;;;;:   |,8;;;;;\n          .    .,'n8;;;;;;:   |8;;;;;;\n         .   .',  n;;;;;;;:   M;;;;;;;;\n        .  ,' ,   n;;;;;;;;:  n;;;;;;;;;\n       . ,'  ,    N;;;;;;;;:  n;;;;;;;;;\n      . '   ,     N;;;;;;;;;: N;;;;;;;;;;\n     .,'   .      N;;;;;;;;;: N;;;;;;;;;;\n    ..    ,       N6666666666 N6666666666\n    I    ,        M           M\n   ---nnnnn_______M___________M______mmnnn\n         '-.     The Galandor         /\n  __________'-_______________________/_________\n";
	cout<< "               Welcome to The Atlantic\n";
	cout<< "       To Begin Please Type start and press enter\n";	
	string start;
	cin>> start;
	system ("cls");	
	cout<< "Please enter your first name.";
	string name;
	cin>> name;
	cout<< "Hello, "<<name<<", How old are you?\n";
	int age;
	cin>> age;
	if (age>75)
{
	cout<< "Don't you think your a little bit to old to sail across the atlantic?(type c then press enter to continue)\n";
	char conti;
	cin>> conti;
	return 0;
}
	else if (age<12)
{
	cout<< "Your to young to go on such a dangerous journey.(type c then press enter to continue)\n";
	char conti;
	cin>> conti;
	return 0;
}
	else
{	
	cout<< "So you are "<<name<<", who is "<<age<<"years old and is employed as...\n";
	cout<< "1)A Sailor\n2)A Soldier\n3)An Engineer\n4)I am unemployed\n";
	int class_stats [];
	cin>> class_stats[0];
	switch (class_stats[0])
{
	case 1:

	case 2:
	
	case 3:

	case 4:
	cout<< "You are a poor beggar wandering the streets when you come across a large, magjestic ship.(type c then press enter to continue)\n";
	char conti;
	cin>> conti;
	cout<< "You havent eaten in weeks and reason that there may be food aboard the ship.\nYou also notice that there are no guards outside of the ship\n";
	cout<< "What do you do?\n1)Sneak onto the ship.\n2)Die of starvation in the streets\n";
	int a001;
	cin>> a001;
		switch (a001)
		{
		case 1:
		cout<< "You manage to sneak onto the ship without being caught and begin your desperate search for food.(type c then press enter to continue)\n";
		char conti;
		cin>> conti;
		cout<< "You quickly locate the galley and begin to devore everything in sight.(type c then press enter to continue)\n";
		char conti;
		cin>> conti;
		cout<< "If you weren't so busy shoveling food into your mouth you may have heard the sound of footsteps in the hallway.(type c then press enter to continue)\n";
		char conti;
		cin>> conti;
		cout<< "A Soldier and the Captain enter the room. The captain orders the Soldier to arrest you. What do you do?\n";
		cout<< "1)Attempt to run away.\n2)Attempt to fight the soldier\n3)Continue eating\n";
		int a002;
		cin>> a002;the
			switch (a002)
			{
			case 1:
			cout<< "You run about 3 feet before being captured. The captain orders the soldier to throw you overboard.\n"
			cout<< "SPLASH\nYou Are Dead.(type c then press enter to continue)\n";
			char conti;
			cin>> conti;
			return 0;
			break;
			
			case 2:
			cout<< "You throw the piece of bread you had been eating at the soldier. He laughs as he throws you overboard\nSPLASH\nYou Are Dead.(type c then press enter to continue)\n";
			char conti;
			cin>> conti;
			return 0;
			break;
			
			case 3:
			cout<< "The soldier refuses to attack a man while he is eating. Sadly you choke to death and your body is thrown overboard.\n(type c then press enter to continue)\n";
			char conti;
			cin>> conti;
			return 0;
			break;
			
			default:
			cout<< "Error code A01-User input error. Please learn to follow instructions";
			return 0;
			}
		break;
		
		case 2:
		cout<< "You get abducted by aliens. After they finished experimenting on you they dumped you into the ocean behind the ship.\n";
		return 0;
		break;
		
		default:
		cout<< "Error code A01-User input error. Please learn to follow instructions";
		return 0;
		}
	default:
	cout<< "Error code A01-User input error. Please learn to follow instructions";
	return 0;
}
	
	
char z;
cin>> z;
return 0;
}
