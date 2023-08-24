//con game nay co the gay uc che nguoi choi va co the gay dap may
//giu binh tinh truoc khi choi
//chuc ban choi game vui ve:))
//made by kieu tan phuoc
#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <conio.h>
using namespace std;

void goToXY(int x, int y) {
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

const int hurdleCount = 4;

class Flappy_Bird {
	int hurdlePos[hurdleCount][2]; // mô hình lên xuống của chim
	int screenWidth = 79;
	int screenHeight = 25;
	int hurdleGap = 8;
	int betweenHurdleGap;

	int birdX = 17;
	int birdY = 15;

	int jump = 4;
	int score = 0;
public:
	Flappy_Bird() {
		srand(time(NULL));

		betweenHurdleGap = (screenWidth / hurdleCount) + 10;
		for (int i = 0; i < hurdleCount; i++) {
			hurdlePos[i][0] = betweenHurdleGap * (i+1);

			int breakPos = rand() % (screenHeight / 3) + hurdleGap;
			hurdlePos[i][1] = breakPos;
		}
	}

	void printHurdle() { //các trụ cột khi chim bay qua
		int count = 0;
		for (int i = 0; i < hurdleCount; i++) {
			for (int j = 0; j < screenHeight; j++) {
				
				if (hurdlePos[i][1] == j) count = hurdleGap;
				
				if (count == 0) {
					if (hurdlePos[i][0] < screenWidth) {
						goToXY(hurdlePos[i][0] + 1, j);
						cout << " ";

						goToXY(hurdlePos[i][0], j);
						cout << i;
					}
				}
				else {
					if ((count == 1 || count == hurdleGap) && hurdlePos[i][0] < screenWidth) {
						if (hurdlePos[i][0] + 1 > 0) {
							goToXY(hurdlePos[i][0] + 1, j);
							cout << "   ";
						}
						
						if (hurdlePos[i][0] - 1 > 0) {
							goToXY(hurdlePos[i][0] - 1, j);
							cout << "===";
						}
					}
					
					count--;
				}
			}

			hurdlePos[i][0]--;

			if (hurdlePos[i][0] == -1) {
				int prev;
				if (i == 0)
					prev = hurdleCount - 1;
				else
					prev = i - 1;

				hurdlePos[i][0] = hurdlePos[prev][0] + betweenHurdleGap;

				int breakPos = rand() % (screenHeight / 3) + hurdleGap;
				hurdlePos[i][1] = breakPos;
			
				for (int i = 0; i < screenHeight; i++) {
					goToXY(0, i);
					cout << " ";
				}
			}
		}
	}

	bool collisionCheck() {
		if (birdY == 0 || birdY + 2 == screenHeight) return true;
		
		for (int i = 0; i < hurdleCount; i++) {
			if (
				hurdlePos[i][0] == birdX &&
				(
					birdY >= hurdlePos[i][1] ||
					birdY + 2 <= (hurdlePos[i][1] + hurdleGap)
				)
			) {
				score++;
			}
			
			if (hurdlePos[i][0] >= birdX - 5 &&
				hurdlePos[i][0] <= birdX &&
				(	
					birdY <= hurdlePos[i][1] ||
					birdY + 3 >= (hurdlePos[i][1] + hurdleGap)
				) 
			) {
				return true;
			}
		}
		return false;
	}

	void clearBird() {
		goToXY(birdX - 5, birdY);
		cout << "   ";
		goToXY(birdX - 5, birdY + 1);
		cout << "      ";
		goToXY(birdX - 5, birdY + 2);
		cout << "       ";
	}

	void printScore() {
		goToXY(0, screenHeight + 4);
		cout << "Score: " << score;
	}

	void printBird() { // mô hình của con chim
			goToXY(birdX - 5, birdY);		cout << " __";
			goToXY(birdX - 5, birdY + 1);	cout << "/-/o\\";
			goToXY(birdX - 5, birdY + 2);		cout << "\\_\\-/";
	}

	void printRoad() {
		for (int i = 0; i <= screenWidth; i++) {
			goToXY(i, screenHeight);		cout << "_";
			goToXY(i, screenHeight + 1);	cout << "/";
			goToXY(i, screenHeight + 2);	cout << "=";
		}
	}

	void play() {
		printRoad();
		int someDelay = 0;
		while (true) {
			if (GetAsyncKeyState(VK_SPACE)) {
				birdY -= jump;
			}

			printHurdle();
			printBird();
			printScore();

			if (collisionCheck()) break;
			
			Sleep(100);
			clearBird();
			birdY += 1;
		}
	}
};

int main(){ // rest game 
	
	while (true) {
		Flappy_Bird fb;
		fb.play();
		goToXY(30,30);
		cout << "Ban co mua choi lai (Y/N)";
		goToXY(40,36);
		cout <<"Made by kieu tan phuoc";
		
		
		char ch;
		cin >> ch;
		if (ch == 'N' || ch == 'n') {
			break;
		}
		system("cls");
	}

	return 0;
}