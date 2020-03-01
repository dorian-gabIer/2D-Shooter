// Coded by Dorian Gabler
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>
#include <string>
#include <cstring>
#define _WIN32_WINNT 0x0502
class game
{
private:
	std::vector <int> fake;
	char map[1800];
	int x;//COORDINATES
	int c;
	int speed;
	int points;
	int CurrentLevel;
	bool check;
public:
	game()
	{
		x = 1940;
		speed = 215;
		check = 0;
		points = 0;
	}
	void PrepareGraphics();
	void graphics();
	void LevelMenu();
	void Levels();
	void LOGIC();
	void gameover();
	void gamewin();
	friend void cls();
	friend void sp();
	friend void s();
};
void cls()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}
void game::Levels()
{
	HANDLE mod;
	mod = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mod, BACKGROUND_GREEN | FOREGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY);
	speed -= 20;
	for (int a = 0; a < 1800; a++)
	{
		map[a] = ' ';
	}
	switch (CurrentLevel)
	{
	case 1:
		for (int b = 0; b < 26; b++)
		{
			map[b + 7] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 47] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 87] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 127] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 167] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 207] = char(253);
		}
		break;
	case 2:
		for (int b = 0; b < 26; b++)
		{
			map[b + 7] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 47] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 87] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 127] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 167] = char(253);
		}
		for (int b = 0; b < 26; b++)
		{
			map[b + 207] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		break;
	case 3:
		for (int b = 0; b < 30; b++)
		{
			map[b + 5] = char(253);
		}
		for (int b = 0; b < 30; b++)
		{
			map[b + 45] = char(253);
		}
		for (int b = 0; b < 30; b++)
		{
			map[b + 85] = char(253);
		}
		for (int b = 0; b < 30; b++)
		{
			map[b + 125] = char(253);
		}
		for (int b = 0; b < 30; b++)
		{
			map[b + 165] = char(253);
		}
		for (int b = 0; b < 30; b++)
		{
			map[b + 205] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		break;
	case 4:
		for (int b = 0; b < 34; b++)
		{
			map[b + 3] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 43] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 83] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 123] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 163] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 203] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 360] = char(253);
		}
		break;
	case 5:

		for (int b = 0; b < 38; b++)
		{
			map[b + 1] = char(253);
		}
		for (int b = 0; b < 38; b++)
		{
			map[b + 41] = char(253);
		}
		for (int b = 0; b < 38; b++)
		{
			map[b + 81] = char(253);
		}
		for (int b = 0; b < 38; b++)
		{
			map[b + 121] = char(253);
		}
		for (int b = 0; b < 38; b++)
		{
			map[b + 161] = char(253);
		}
		for (int b = 0; b < 38; b++)
		{
			map[b + 201] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		break;
	case 6:
		for (int b = 0; b < 34; b++)
		{
			map[b + 3] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 43] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 83] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 123] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 163] = char(253);
		}
		for (int b = 0; b < 34; b++)
		{
			map[b + 203] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 360] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 400] = char(253);
		}
		break;
	case 7:
		for (int b = 0; b < 40; b++)
		{
			map[b] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 40] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 80] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 120] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 160] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 200] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 360] = char(253);
		}
		break;
	case 8:
		for (int b = 0; b < 40; b++)
		{
			map[b] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 40] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 80] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 120] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 160] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 200] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 360] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 400] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 440] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 480] = char(253);
		}
		break;
	case 9:
		for (int b = 0; b < 40; b++)
		{
			map[b] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 40] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 80] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 120] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 160] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 200] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 360] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 400] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[400 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[440 + 2 * b] = char(253);
		}
		break;
	case 10:
		for (int b = 0; b < 40; b++)
		{
			map[b] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 40] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 80] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 120] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 160] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 200] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 360] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 400] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[400 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[440 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[480 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[520 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[560 + 2 * b] = char(253);
		}
		break;
	case 11:
		for (int b = 0; b < 40; b++)
		{
			map[b] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 40] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 80] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 120] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 160] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 200] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 240] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 280] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 320] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 360] = char(253);
		}
		for (int b = 0; b < 40; b++)
		{
			map[b + 400] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[400 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[440 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[480 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[520 + 2 * b] = char(253);
		}
		for (int b = 0; b < 20; b++)
		{
			map[560 + 2 * b] = char(253);
		}
		break;

	default:
		system("cls");
		gamewin();
	}
	PrepareGraphics();
}
void sp(int spalva)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), spalva);
}
void game::LevelMenu()
{
	CurrentLevel = 6;
	speed = 115;
	system("cls");
	Levels();
}
void game::PrepareGraphics()
{
	x = 1140;
	map[x] = 'H';
	graphics();
}
void game::graphics()
{
	c = 0;
	for (int CheckingForWin = 0; CheckingForWin < 40; CheckingForWin++)
	{
		if (map[CheckingForWin] == ' ')
		{
			c++;
		}
	}
	if (c == 40)
	{
		gamewin();
	}
	std::cout << std::endl;
	for (int k = 0; k < 40; k++)
	{
		std::cout << char(219);
	}
	std::cout << std::endl;
	for (int u = 0; u < 1800; u++)
	{
		if (u != 0 && u % 40 == 0)
		{
			std::cout << std::endl;
		}
		if (map[u + 40] == char(173))
		{
			map[u + 40] = ' ';
			if (map[u] != char(253))
			{
				map[u] = char(173);
			}
			else
			{
				map[u] = ' ';
				points++;
			}
		}
		else if (u <= 39 && map[u] == char(173))
		{
			map[u] = ' ';
		}
		if (map[u] == char(253) && map[u + 40] != char(253))
		{
			c = rand() % speed + 1;
			if (c == 5)
			{
				map[u + 40] = 'o';
			}
		};
		if (map[u] == 'o')
		{
			for (unsigned int g = 0; g != fake.size(); g++)
			{
				if (fake[g] == u)
				{
					g = fake.size() - 1;
					check = 1;
				}
			}
			if (!check)
			{
				map[u] = ' ';
				if (x == u + 40)
				{
					gameover();
				}
				map[u + 40] = 'o';
				fake.push_back(u + 40);
			}
		};
		check = 0;
		std::cout << map[u];
	}
	for (int h = 1760; h < 1800; h++)
	{
		if (map[h] == 'o')
		{
			map[h] = ' ';
		}
	}
	fake.clear();
	std::cout << std::endl;
	for (int k = 0; k < 40; k++)
	{
		std::cout << char(219);
	}
	LOGIC();
}
void game::gameover()
{
	system("cls");
	std::cout << "GAME OVER!";
	Sleep(2500);
	exit(0);
}
void game::gamewin()
{
	system("cls");
	std::cout << "YOU WON";
	Sleep(2500);
	exit(0);
}
void game::LOGIC()
{
	if (GetAsyncKeyState(VK_LEFT))
	{
		if (x % 40 != 0)
		{
			if (map[x - 1] == 'o')
			{
				gameover();
			};
			x--;
			map[x + 1] = ' ';
			map[x] = 'H';
		}
	}
	else if (GetAsyncKeyState(VK_RIGHT))
	{
		if ((x + 1) % 40 != 0)
		{
			if (map[x + 1] == 'o')
			{
				gameover();
			};
			x++;
			map[x - 1] = ' ';
			map[x] = 'H';
		}
	}
	else if (GetAsyncKeyState(VK_UP))
	{
		if (x > 480)
		{
			x -= 40;
			map[x + 40] = ' ';
			map[x] = 'H';
		}
	}
	else if (GetAsyncKeyState(VK_DOWN))
	{
		if (x < 1760)
		{
			x += 40;
			map[x - 40] = ' ';
			map[x] = 'H';
		}
	}
	else {}
	if (_kbhit())
	{
		char l = _getch();
		if (l == 32)
		{
			map[x - 40] = char(173);
		};
	}
	cls();
	graphics();
}
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void fullscreen()
{
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}
int main(int argc, char** argv) {
	fullscreen();
	srand((unsigned)time(0));
	game *memb;
	memb = new game;
	memb->LevelMenu();
}