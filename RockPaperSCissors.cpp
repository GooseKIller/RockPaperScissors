﻿#include <iostream>
#include <ctime>
using namespace std;
int main()
{   
    srand(time(NULL));
    
    int you = 0, ai = rand()%3+1,aiScore=0, youScore=0,score=0;
    cout << "Game Comands\n1=Rock\n2=Paper\n3=Scissors\n\n";
    for (int i = 0; i < 3; i++) {
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
        switch (you)//player choise
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
        cout << endl;
        cout << "COMPUTER:" << ai << "\n";
        switch (ai)//comuter choise
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
        }
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

}
