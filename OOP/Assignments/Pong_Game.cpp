#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
enum Direction_of_ball { Stop, Left, Left_upward, Left_downward, Right, Right_upward, Right_downward };
int  changeclr = 1;
const int width = 40;
const int height = 20;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); //to get a handle at console
bool comp = false;

void hideCursor()
{
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 1; // size = 1
	cci.bVisible = FALSE; // visibility false
	SetConsoleCursorInfo(hStdOut, &cci); // hide cursor
}
void rgb()
{
	SetConsoleTextAttribute(hStdOut, changeclr);
	changeclr += 1;
	if (changeclr > 15)
		changeclr = 1;
}
void welcome()
{
	char name[] = { "Pong" };
	SetConsoleCursorPosition(hStdOut, { 0 , 7 });
	for (int i = 0; i < 4; i++)
	{
		Beep(400, 70);
		cout << "\t\t\t\t\t" << name[i] << "\n";
		rgb();
		Sleep(300);
	}
	system("cls");
	char ques[] = { "Press 1 to play with Computer or two play with Friend:" };
	for (int i = 0; i < 56; i++)
	{
		Beep(400, 70);
		cout << ques[i];
		rgb();
	}
	int temp;
	cin >> temp;
	switch (temp)
	{
	case 1:
		comp = true;
		break;
	case 2:
		break;
	default:
		cout << "\t\t\t\t\t" << "Wrong value Entered:";
		Sleep(300);
		welcome();
	}
}
void gameover()
{
	char name[] = { " GAME OVER " };
	SetConsoleCursorPosition(hStdOut, { 0 , 7 });
	for (int i = 0; i < 11; i++)
	{
		if (name[i] != 32)
			Beep(400, 70);
		cout << "\t\t\t\t\t" << name[i] << "\n";
		Sleep(300);
		rgb();
	}
	system("cls");
	exit(0);
}

class Ball
{
private:
	int posx, posy;
	Direction_of_ball direction;
public:
	Ball()
	{
		posx = width / 2;
		posy = height / 2;
		direction = Stop;
	}
	void Original_ball()
	{
		posx = width / 2;
		posy = height / 2;
		direction = Stop;
	}
	void Set_ball_direction(Direction_of_ball d)
	{
		direction = d;
	}
	void randomDirection()
	{
		int temp = (rand() % 6) + 1;
		direction = (Direction_of_ball)temp;
	}
	int getX()
	{
		return posx;
	}
	int getY()
	{
		return posy;
	}
	Direction_of_ball getDirection()
	{
		return direction;
	}
	void Movement()
	{
		switch (direction)
		{
		case 0:
			break;
		case 1:
			posx--;
			break;
		case 2:
			posx--;
			posy--;
			break;
		case 3:
			posx--;
			posy++;
			break;
		case 4:
			posx++;
			break;
		case 5:
			posx++;
			posy--;
			break;
		case 6:
			posx++;
			posy++;
			break;
		default:
			break;
		}
	}
};
class Paddle
{
private:
	int pos_x, pos_y;
	int originalX, originalY;
public:

	Paddle(int x, int y)
	{
		pos_x = x;
		pos_y = y;
		originalX = x;
		originalY = y;
	}
	void Original_paddle()
	{
		pos_x = originalX;
		pos_y = originalY;
	}
	int get_paddleX()
	{
		return pos_x;
	}
	int get_paddleY()
	{
		return pos_y;
	}
	void moveUp()
	{
		pos_y--;
	}
	void moveDown()
	{
		pos_y++;
	}

};
class GameManger
{
private:

	int player1_score, player2_score;
	bool game;
	Ball* ball;
	Paddle* player1;
	Paddle* player2;
public:
	GameManger()
	{
		srand(time(NULL));
		game = false;
		int middle = height / 2 - 3;
		player1_score = 0, player2_score = 0;
		ball = new Ball();
		player1 = new Paddle(1, middle);
		player2 = new Paddle(width - 2, middle);
	}

	void Reset_All()
	{
		ball->Original_ball();

		player1->Original_paddle();

		player2->Original_paddle();
	}

	void Input()
	{
		ball->Movement();
		//getting postions of ball and paddle
		int ballx = ball->getX();
		int bally = ball->getY();
		int player1x = player1->get_paddleX();
		int player2x = player2->get_paddleX();
		int player1y = player1->get_paddleY();
		int player2y = player2->get_paddleY();

		if (_kbhit())
		{
			char current = _getch();
			//player one up
			if (current == 72)
			{
				if (player1y > 0)
					player1->moveUp();
			}
			//player one down
			if (current == 80)
			{
				if (player1y + 4 < height)
					player1->moveDown();
			}
			//player two up
			if (current == 'w')
			{
				if (player2y > 0)
					player2->moveUp();
			}
			//player two down
			if (current == 's')
			{
				if (player2y + 4 < height)
					player2->moveDown();
			}

			if (ball->getDirection() == Stop)
				ball->randomDirection();
			//Exit game
			if (current == 27)
				game = true;
		}
	}
	void Input1()
	{
		ball->Movement();
		//getting postions of ball and paddle
		int ballx = ball->getX();
		int bally = ball->getY();
		int player1x = player1->get_paddleX();
		int player2x = player2->get_paddleX();
		int player1y = player1->get_paddleY();
		int player2y = player2->get_paddleY();

		int computer = (rand() % 3);
		if (computer < 0)
		{
			computer = computer * -1;
		}
		//computer up
		if (computer == 1)
		{
			if (player2y > 0)
				player2->moveUp();
		}
		//computer down
		if (computer == 2)
		{
			if (player2y + 4 < height)
				player2->moveDown();
		}
		if (_kbhit())
		{
			char current = _getch();
			//player one up
			if (current == 72)
			{
				if (player1y > 0)
					player1->moveUp();
			}
			//player one down
			if (current == 80)
			{
				if (player1y + 4 < height)
					player1->moveDown();
			}


			if (ball->getDirection() == Stop)
				ball->randomDirection();
			//Exit game
			if (current == 27)
				game = true;
		}
	}
	void ball_paddle_wall_collision()
	{
		int ballx = ball->getX();
		int bally = ball->getY();
		int player1x = player1->get_paddleX();
		int player2x = player2->get_paddleX();
		int player1y = player1->get_paddleY();
		int player2y = player2->get_paddleY();

		//left paddle
		for (int i = 0; i < 4; i++)
		{
			if (ballx == player1x + 1)
			{
				if (bally == player1y + i)
				{
					int temp = (rand() % 3) + 4;
					ball->Set_ball_direction((Direction_of_ball)temp);
					Beep(300, 100);
					rgb();
				}
			}
		}

		//right paddle
		for (int i = 0; i < 4; i++)
		{
			if (ballx == player2x - 1)
			{
				if (bally == player2y + i)
				{
					int temp = (rand() % 3) + 1;
					ball->Set_ball_direction((Direction_of_ball)temp);
					Beep(300, 100);
					rgb();
				}
			}
		}
		//bottom wall
		if (bally == height - 1)
		{
			if (ball->getDirection() == Right_downward)
			{
				ball->Set_ball_direction(Right_upward);
				Beep(300, 100);
				rgb();
			}
			if (ball->getDirection() == Left_downward)
			{
				ball->Set_ball_direction(Left_upward);
				Beep(300, 100);
				rgb();
			}
		}

		//top wall
		if (bally == 0)
		{
			if (ball->getDirection() == Right_upward)
			{
				ball->Set_ball_direction(Right_downward);
				Beep(300, 100);
				rgb();
			}
			if (ball->getDirection() == Left_upward)
			{
				ball->Set_ball_direction(Left_downward);
				Beep(300, 100);
				rgb();
			}
		}
		//right wall
		if (ballx == width - 1)
		{
			player1_score++;
			Reset_All();
			Beep(300, 100);
			rgb();
			winner();
		}
		//left wall
		if (ballx == 0)
		{
			player2_score++;
			Reset_All();
			Beep(300, 100);
			rgb();
			winner();
		}
	}
	void winner()
	{
		if (player1_score >= 5 || player2_score >= 5)
		{
			system("cls");
			game = true;
			if (player1_score >= 5)
			{
				SetConsoleCursorPosition(hStdOut, { 0 , 7 });
				char message[] = { "Congrats Player 1 Won:" };
				for (int i = 0; i < 25; i++)
				{
					Beep(300, 100);
					rgb();
					cout << message[i];
				}
				Sleep(1000);
			}
			else
			{
				SetConsoleCursorPosition(hStdOut, { 0 , 7 });
				char message[] = { "Congrats Player 2 Won:" };
				for (int i = 0; i < 25; i++)
				{
					Beep(300, 100);
					rgb();
					cout << message[i];
				}
				Sleep(1000);
			}
		}
	}
	void Logic()
	{
		ball_paddle_wall_collision();
	}

	void Run()
	{
		if (!comp)
		{
			while (!game)
			{
				Draw();
				Input();
				Logic();
			}
		}
		else
		{
			while (!game)
			{
				Draw();
				Input1();
				Logic();
			}
		}
		gameover();
	}

	void Draw()
	{
		cout << endl;
		cout << endl;
		for (int k = 0; k < 30; k++)
		{
			cout << " ";
		}
		cout << "P  O  N  G";
		cout << endl;
		SetConsoleCursorPosition(hStdOut, { 24 , 5 });
		for (int i = 0; i < width + 2; i++)
			cout << "=";
		cout << endl;

		for (int i = 0; i < height; i++)
		{
			for (int k = 0; k < 24; k++)
			{
				cout << " ";
			}
			for (int j = 0; j < width; j++)
			{

				int ballx = ball->getX();
				int bally = ball->getY();
				int player1x = player1->get_paddleX();
				int player2x = player2->get_paddleX();
				int player1y = player1->get_paddleY();
				int player2y = player2->get_paddleY();

				if (j == 0)
					cout << "||";
				//cout << "\xB2";


				if (ballx == j && bally == i)
					cout << "O"; //ball

				else if (player1x == j && player1y == i)
					cout << "\xDB"; //player1
				else if (player2x == j && player2y == i)
					cout << "\xDB"; //player2

				else if (player1x == j && player1y + 1 == i)
					cout << "\xDB"; //player1
				else if (player1x == j && player1y + 2 == i)
					cout << "\xDB"; //player1
				else if (player1x == j && player1y + 3 == i)
					cout << "\xDB"; //player1

				else if (player2x == j && player2y + 1 == i)
					cout << "\xDB"; //player1
				else if (player2x == j && player2y + 2 == i)
					cout << "\xDB"; //player1
				else if (player2x == j && player2y + 3 == i)
					cout << "\xDB"; //player1
				else
					cout << " ";

				if (j == width - 1)
					cout << "||";
			}
			cout << endl;
		}
		for (int k = 0; k < 24; k++)
		{
			cout << " ";
		}
		for (int i = 0; i < width + 2; i++)
			cout << "=";
		cout << endl;

		for (int k = 0; k < 28; k++)
		{
			cout << " ";
		}
		cout << "Score 1: " << player1_score << "    " << "Score 2: " << player2_score << endl;
	}
	friend void rgb();
	~GameManger()//Delete All 
	{
		delete ball, player1, player2;
	}
};




int main()
{
	welcome();
	GameManger GAME;
	GAME.Run();
	return 0;
}