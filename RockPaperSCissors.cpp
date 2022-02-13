#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

int choise(int player) {
    switch (player)//player choise
    {
    case 1:
        cout << "Rock";
        break;
    case 2:
        cout << "Paper";
        break;
    case 3:
        cout << "Scissors";
        break;
    default:
        cout << "Ops wrong command";
    }
}

int main()
{   
    srand(time(NULL));
    
    int you = 0,aiScore=0,youScore=0,score=0;
	string s;
    cout << "Game Comands\n1=Rock\n2=Paper\n3=Scissors\n\n";
    for (int i = 0; i < 3; i++) {
        int ai = rand()%3+1;
        if (aiScore == 2 && youScore==2) {
            score = 2;
            break;
        }
        else if (youScore == 2) {
            score = 1;
            break;
        }
        else if(aiScore==2){
            score = 3;
            break;
        }
        cout << "Round:"<<i+1<<"/3"<<endl;//rounds
        cout << "YOU:"; cin >> you;
        choise(you);
        cout << endl;
        cout << "COMPUTER:" << ai << "\n";
	choise(ai);
        cout << endl;
        if (you == 1 && ai == 3 || you == 2 && ai == 1 || you == 3 && ai == 2) {//choose round winner
            cout << "YOU Win!!";
            youScore++;
        }
        else if (ai == you) {
            cout << "FRIENDSHIP Win!!!";
            youScore++; aiScore++;
        }
        else {
            cout << "COMPUTER Win!!!";
            aiScore++;
        }
        cout << endl;
        cout << "YOU:" << youScore << " COMPUTER:" << aiScore<<endl;
    }
    switch (score)//choose total winner
    {
    case 1:
        cout << "YOU Win!!";
        break;
    case 2:
        cout << "FRIENDSHIP Win!!!";
        break;
    case 3:
        cout << "COMPUTER Win!!";
        break;
    
    }
return 0;
}
