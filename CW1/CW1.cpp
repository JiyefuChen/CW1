

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <windows.h>
//used to maximize screen
#pragma comment(lib,"kernel32.lib")
#pragma comment(lib,"user32.lib")
using namespace std;
int main()
{
	

	system("cls");
	int character, opponent, atk, asuccess, msuccess, game = 1, counter1 = 1, level = 1, atr, a, b, c = 0, d, decision;
	//opponent
	int attackop, defenseop, speedop, healthop = 100, opac, expo = 0;
	//user
	int magicus, attackus, defenseus, speedus, healthus = 100, exp = 0, levelup = 200;
	//names
	string nameus, nameop;
	char exit;
	//classes
	int healus = 0;
	do {
		cout << "(1)\n***************\nGandalf:\n attack - 30\n defense - 40\n magic - 60\n speed - 60\n***************" << endl << endl;
		cout << "(2)\n***************\nHoly Knight:\n attack - 55\n defense - 75\n magic - 40\n speed - 30\n***************" << endl << endl;
		cout << "(3)\n***************\nThe Berzerker:\n attack - 60\n defense - 50\n magic - 30\n speed - 50\n***************" << endl << endl;
		cout << "(4)\n***************\nThe Dwarf:\n attack - 40\n defense - 50\n magic - 50\n speed - 65\n***************" << endl << endl;
		cout << "(5)\n***************\nThe King:\n attack - 65\n defense - 65\n magic - 30\n speed - 40\n***************" << endl << endl;
		cout << "(6)\n***************\nThe Archer:\n attack - 75\n defense - 40\n magic - 35\n speed - 25\n***************" << endl << endl;
		cout << "Which Class would you like to be?: ";
		cin >> character;
		if ((character > 6) && (character != 666))
		{
			system("cls");
			cout << "You must enter an integer between 1 and 6!!!!\n\n";
			system("pause");
			system("cls");
		}
		if (character == 666)
		{
			system("cls");
			cout << "Muahahahaha!! You have unleashed Satan!!!";
			cout << "\n***************\nSatan:\n attack - 100\n defense - 100\n magic - 100\n speed - 100\n***************" << endl << endl;
			Beep(300, 200);
			Sleep(100);
			Beep(200, 200);
			Sleep(100);
			Beep(100, 200);
			Sleep(100);
			system("pause");
			system("cls");
		}
	} while ((character > 6) && (character != 666));
	//information for user
	switch (character)
	{
	case 1:
		attackus = 30, defenseus = 40, magicus = 60, speedus = 60, nameus = "Gandalf";
		break;
	case 2:
		attackus = 55, defenseus = 60, magicus = 40, speedus = 40, nameus = "Holy Knight";
		break;
	case 3:
		attackus = 60, defenseus = 50, magicus = 30, speedus = 50, nameus = "Berzerker";
		break;
	case 4:
		attackus = 40, defenseus = 50, magicus = 50, speedus = 65, nameus = "Dwarf";
		break;
	case 5:
		attackus = 65, defenseus = 65, magicus = 30, speedus = 40, nameus = "King";
		break;
	case 6:
		attackus = 75, defenseus = 40, magicus = 35, speedus = 25, nameus = "Archer";
		break;
	case 666:
		attackus = 100, defenseus = 100, magicus = 100, speedus = 100, nameus = "Satan";
		break;
	default:
		cout << "No One";
	}
	do {
		do {
			system("cls");
			cout << "Hello, " << nameus << ", what would you like to do?\n\n";
			cout << "(1)\n**********\nGo to the Hell\n**********\n\n";
			cin >> decision;
			decision =1;
			switch (decision)
			{
			case 1:
				int random3, random4, random5;
				srand((unsigned)time(0));
				random3 = (rand() % 3) + 1;
				random4 = (rand() % 3) + 1;
				random5 = (rand() % 3) + 1;
				if (healthop == 0)
					healthop = 100;
				system("cls");
				do {
					cout << "Welcome to the Hell, " << nameus << ", which opponent would you like to face?" << endl;
					d = (level * -1);
					switch (random3)
					{
					case 1:
						if (level <= 1)
						{
							cout << "(" << d + 2 << ")\n***************\nThe Tree(lvl 1):\n attack - 0\n defense - 20\n speed - 0\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if (level <= 1)
						{
							cout << "(" << d + 2 << ")\n***************\nThe Rock(lvl 1):\n attack - 0\n defense - 30\n speed - 0\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if (level <= 1)
						{
							cout << "(" << d + 2 << ")\n***************\nThe Computer(lvl 1):\n attack - 0\n defense - 10\n speed - 0\n***************\n";
							cout << endl;
						}
						break;
					default:
						cout << "Can't Happen";
					}
					switch (random4)
					{
					case 1:
						if (level <= 2)
						{
							cout << "(" << d + 3 << ")\n***************\nDark Shadow(lvl 2):\n attack - 30\n defense - 20\n speed - 30\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if (level <= 2)
						{
							cout << "(" << d + 3 << ")\n***************\nThe Annihilator(lvl 2):\n attack - 40\n defense - 20\n speed - 30\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if (level <= 2)
						{
							cout << "(" << d + 3 << ")\n***************\nThe Fallen King(lvl 2):\n attack - 45\n defense - 25\n speed - 30\n***************\n";
							cout << endl;
						}
						break;
					default:
						cout << "Can't Happen";
					}
					switch (random5)
					{
					case 1:
						if (level <= 3)
						{
							cout << "(" << d + 4 << ")\n***************\nDeath Reaper(lvl 3):\n attack - 65\n defense - 35\n speed - 45\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if (level <= 3)
						{
							cout << "(" << d + 4 << ")\n***************\nVoid Overlord(lvl 3):\n attack - 60\n defense - 50\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if (level <= 3)
						{
							cout << "(" << d + 4 << ")\n***************\nAbyssal Warlord(lvl 3):\n attack - 65\n defense - 55\n speed - 45\n***************\n";
							cout << endl;
						}
						break;
					default:
						cout << "Can't Happen";
					}
					switch (random3)
					{
					case 1:
						if ((level <= 4) && (level >= 2))
						{
							cout << "(" << d + 5 << ")\n***************\nRampant Cataclysm(lvl 4):\n attack - 75\n defense - 35\n speed - 55\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if ((level <= 4) && (level >= 2))
						{
							cout << "(" << d + 5 << ")\n***************\nAbyss Marauder(lvl 4):\n attack - 65\n defense - 30\n speed - 60\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if ((level <= 4) && (level >= 2))
						{
							cout << "(" << d + 5 << ")\n***************\nSon of Perdition(lvl 4):\n attack - 75\n defense - 35\n speed - 55\n***************\n";
							cout << endl;
						}
						break;
					default:
						cout << "Can't Happen";
					}
					switch (random4)
					{
					case 1:
						if ((level <= 5) && (level >= 3))
						{
							cout << "(" << d + 6 << ")\n***************\nDoomsday Prophet(lvl 5):\n attack - 80\n defense - 45\n speed - 45\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if ((level <= 5) && (level >= 3))
						{
							cout << "(" << d + 6 << ")\n***************\nVenomous Enchantress(lvl 5):\n attack - 65\n defense - 55\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if ((level <= 5) && (level >= 3))
						{
							cout << "(" << d + 6 << ")\n***************\nNightfall Executioner(lvl 5):\n attack - 75\n defense - 45\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					default:
						cout << "Can't Happen";
					}
					switch (random4)
					{
					case 1:
						if ((level <= 6) && (level >= 4))
						{
							cout << "(" << d + 7 << ")\n***************\nApocalypse Adjudicator(lvl 6):\n attack - 85\n defense - 55\n speed - 60\n***************\n";
							cout << endl;
						}
						break;
					case 2:
						if ((level <= 6) && (level >= 4))
						{
							cout << "(" << d + 7 << ")\n***************\nNocturnal Stalker(lvl 6):\n attack - 90\n defense - 65\n speed - 55\n***************\n";
							cout << endl;
						}
						break;
					case 3:
						if ((level <= 6) && (level >= 4))
						{
							cout << "(" << d + 7 << ")\n***************\nLord of Plagues(lvl 6):\n attack - 75\n defense - 70\n speed - 50\n***************\n";
							cout << endl;
						}
						break;
					default:
						cout << "Can't Happen";
					}
					if ((level <= 99) && (level >= 5))
					{
						cout << "(" << d + 8 << ")\n***************\nGod(lvl ?):\n attack - ??\n defense - ??\n speed - ??\n***************\n";
						cout << endl;
					}
					cout << ":";
					cin >> opponent;
					if ((opponent > 3) || (opponent < 1))
					{
						system("cls");
						cout << "You must enter an integer between 1 and 3!!!!\n\n";
						system("pause");
						system("cls");
					}
				} while ((opponent > 3) || (opponent < 1));
				system("cls");
				opponent = opponent + c;
				switch (opponent)
				{
				case 1:
					switch (random3)
					{
					case 1:
						attackop = 0, defenseop = 20, speedop = 0, nameop = "Tree", expo = 40;
						break;
					case 2:
						attackop = 0, defenseop = 30, speedop = 0, nameop = "Rock", expo = 60;
					case 3:
						attackop = 0, defenseop = 10, speedop = 0, nameop = "Computer", expo = 20;
						break;
					}
					break;
				case 2:
					switch (random4)
					{
					case 1:
						attackop = 30, defenseop = 20, speedop = 30, nameop = "Dark Shadow", expo = 160;
						break;
					case 2:
						attackop = 40, defenseop = 20, speedop = 30, nameop = "The Annihilator", expo = 180;
						break;
					case 3:
						attackop = 45, defenseop = 25, speedop = 30, nameop = "The Fallen King", expo = 200;
						break;
					}
					break;
				case 3:
					switch (random5)
					{
					case 1:
						attackop = 65, defenseop = 35, speedop = 45, nameop = "Death Reaper", expo = 290;
						break;
					case 2:
						attackop = 60, defenseop = 50, speedop = 50, nameop = "Void Overlord", expo = 320;
						break;
					case 3:
						attackop = 65, defenseop = 55, speedop = 45, nameop = "Abyssal Warlord", expo = 330;
						break;
					}
					break;
				case 4:
					switch (random3)
					{
					case 1:
						attackop = 85, defenseop = 35, speedop = 65, nameop = "Rampant Cataclysm", expo = 330;
						break;
					case 2:
						attackop = 75, defenseop = 30, speedop = 70, nameop = "Abyss Marauder", expo = 310;
						break;
					case 3:
						attackop = 85, defenseop = 35, speedop = 85, nameop = "Son of Perdition", expo = 330;
						break;
					}
					break;
				case 5:
					switch (random4)
					{
					case 1:
						attackop = 90, defenseop = 45, speedop = 55, nameop = "Doomsday Prophet", expo = 340;
						break;
					case 2:
						attackop = 80, defenseop = 55, speedop = 60, nameop = "Venomous Enchantress", expo = 350;
						break;
					case 3:
						attackop = 85, defenseop = 45, speedop = 70, nameop = "Nightfall Executioner", expo = 340;
						break;
					}
					break;
				case 6:
					switch (random5)
					{
					case 1:
						attackop = 105, defenseop = 55, speedop = 70, nameop = "Apocalypse Adjudicator", expo = 400;
						break;
					case 2:
						attackop = 110, defenseop = 65, speedop = 65, nameop = "Nocturnal Stalker", expo = 420;
						break;
					case 3:
						attackop = 95, defenseop = 70, speedop = 60, nameop = "Lord of Plagues", expo = 390;
						break;
					}
					break;
				case 7:
					attackop = 110, defenseop = 90, speedop = 80, nameop = "God";
					break;
				default:
					cout << "No One";
				}
				//success rate
				asuccess = speedus - defenseop + 50;
				msuccess = speedus - defenseop + 50;
				cout << "First Round is: " << nameus << " vs. " << nameop << "!!!";
				if (opponent != 7)
					Sleep(1000);
				if (opponent == 7)
				{
					Beep(350, 200);
					Beep(300, 300);
					Beep(400, 200);
					Beep(350, 250);
					Beep(400, 400);
					Beep(450, 600);
				}
				//amount of damage dealt
				a = attackus - defenseop;
				b = magicus - defenseop;
				opac = 100 - defenseus;
				attackop = attackop - defenseus;
				if (attackop < 0)
					attackop = 0;
				else
					attackop = attackop;
				do {
					//Random Number Generator
					int random, random2;
					random = rand() % 100;
					random2 = rand() % 100;
					system("CLS");
					//limitation
					if (asuccess > 100)
						asuccess = 100;
					else
						asuccess = asuccess;
					if (msuccess > 100)
						msuccess = 100;
					else
						msuccess = msuccess;
					//options
					do {
						healus = attackop - 5;
						if (healus <= 0)
							healus = 10;
						cout << "What would you like to use?\n\n"
							<< "(1)\n***************\nattack: " << asuccess << "% chance of success\n***************\n\n"
							<< "(2)\n***************\nmagic: " << msuccess << "% chance of success\n***************\n\n"
							<< "(3)\n***************\nheal + " << healus << "hp\n***************\n\n";
						cout << ": ";
						cin >> atk;
						if (atk > 3)
						{
							system("cls");
							cout << "You MUST enter a number between 1 and 3!!!\n\n";
							system("pause");
							system("cls");
						}
					} while (atk > 3);
					system("CLS");
					cout << "Calculating results";
					for (int counter = 0; counter <= 6; counter++)
					{
						Sleep(00);
						cout << ".";
					}
					system("CLS");
					switch (atk)
					{
					case 1:
						if (random <= asuccess)
						{
							if (random <= 10)
							{
								cout << "CRITICAL!!!!\n\n\a";
								a = a * 2;
							}
							if (a < 0)
								a = 5;
							cout << "You took away " << a << " health points from the " << nameop << "!\n\n";
							healthop = healthop - a;
							if (healthop < 0)
								healthop = 0;
							cout << "The " << nameop << "'s health is: " << healthop << endl << "Your health is: " << healthus << endl << endl;
							if (random <= 10)
								a = a / 2;
						}
						else
						{
							cout << "You missed!\n\n";
							cout << "The " << nameop << "'s health is: " << healthop << endl << "Your health is: " << healthus << endl << endl;
						}
						break;
					case 2:
						if (random <= msuccess)
						{
							if (random <= 10)
							{
								cout << "CRITICAL!!!!\n\n\a";
								b = b * 2;
							}
							if (b < 0)
								b = 5;
							cout << "You took away " << b << " health points from the " << nameop << "!\n\n";
							healthop = healthop - b;
							if (healthop < 0)
								healthop = 0;
							cout << "The " << nameop << "'s health is: " << healthop << endl << "Your health is: " << healthus << endl << endl;
							if (random <= 10)
								b = b / 2;
						}
						else
						{
							cout << "You missed!\n\n";
							cout << "The " << nameop << "'s health is: " << healthop << endl << "Your health is: " << healthus << endl << endl;
						}
						break;
					case 3:
						if (healthus < 100)
						{
							healthus = healthus + healus;
							cout << "Your health rose from " << healthus - healus << ", to " << healthus << "!!!" << endl << endl;
						}
						else
							cout << "Your health is already 100%!!!" << endl << endl;
						break;
					default:
						cout << "Attack Not available";
					}
					system("pause");
					system("cls");
					if (healthop > 0)
					{
						cout << "Opponent is now attacking";
						for (int counter = 6; counter >= 0; counter--)
						{
							Sleep(00);
							cout << ".";
						}
						system("cls");
						if (opac <= random2)
						{
							if (random2 <= 5)
							{
								cout << "CRITICAL!!!!\n\n\a";
								attackop = attackop + 15;
							}
							if (attackop <= 0)
								attackop = 5;
							if (opponent == 1)
								attackop = 0;
							cout << "The opponent took away " << attackop << " health points from you!\n\n";
							healthus = healthus - attackop;
							if (healthus < 0)
								healthus = 0;
							cout << "Opponent's health is: " << healthop << endl << "Your health is: " << healthus << endl << endl;
							if (random2 <= 5)
								attackop = attackop - 15;
						}
						else
						{
							cout << "The opponent missed!\n\n";
							cout << "Opponent's health is: " << healthop << endl << "Your health is: " << healthus << endl << endl;
						}
						system("pause");
					}
				} while ((healthop >= 1) && (healthus >= 1));
				system("cls");
				if (healthop >= 1)
				{
					cout << "You were beat by the " << nameop << "!!! Whhaaaahaahaaaaa\n\n";
					Beep(180, 500);
					Beep(160, 500);
					Beep(140, 500);
					Beep(120, 500);
					Beep(100, 800);
				}
				else if (opponent != 7)
				{
					if (healthus > 0)
					{
						healthus = 100;
						cout << "You have gained " << expo << " experience \n\n";
						exp = exp + expo;
					    cout << "You have " << exp << " experience points!\n";
						if (levelup > exp)
							cout << "You need " << levelup - exp << " more exp points to level up.\n";
						system("pause");
						system("cls");
					}
					if (exp >= levelup)
					{
						c++;
						level++;
						cout << "Congratulations on your victory! You have graduated to level " << level << "!!!.\n\n";
						cout << "Which attribute would you like to increase by 5 points?\n";
						cout << endl << "(1)\n*****\nattack\n*****\n\n(2)\n*****\nmagic\n*****\n\n(3)\n*****\nspeed\n*****\n\n(4)\n*****\ndefense\n*****\n:";
						cin >> atr;
						switch (atr)
						{
						case 1:
							attackus = attackus + 5;
							break;
						case 2:
							magicus = magicus + 5;
							break;
						case 3:
							speedus = speedus + 5;
							break;
						case 4:
							defenseus = defenseus + 5;
							break;
						default:
							defenseus = defenseus;
							break;
						}
						system("cls");
						cout << "Your current Stats are:\nattack - " << attackus << endl << "magic - " << magicus << endl << "speed - " << speedus << endl << "defense - " << defenseus << endl << endl;
						system("pause");
						system("cls");
						levelup = levelup * 2;
					}
				}
				system("pause");
				break;
			
			default:

				cout << "Please select 1 or 2!!!";
				system("pause");
			}
		}while ((healthus >= 1) && (opponent != 7));
	}while ((healthus >= 1) && (opponent != 7));
	if (healthus >= 1)
	{
		cout << "OMG!! YOU WON!!! You are better than god...congrats!\n";
	}
}

