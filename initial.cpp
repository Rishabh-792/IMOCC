#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

const int BLUE = 1;
const int GREEN = 2;
const int RED = 4;
const int WHITE = 15;

void changeColour(int colour) {
	HANDLE hConsole;
	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colour);
}

void  Print(string s){
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cout<<"  ___   ";
        if (s[i] == 'B')
            cout<<" _____  ";
        if (s[i] == 'C')
            cout<<" _____  ";
        if (s[i] == 'D')
            cout<<" _____  ";
        if (s[i] == 'E')
            cout<<" _____  ";
        if (s[i] == 'F')
            cout<<" _____  ";
        if (s[i] == 'G')
            cout<<" _____  ";
        if (s[i] == 'H')
            cout<<" _   _  ";
        if (s[i] == 'I')
            cout<<" _____  ";
        if (s[i] == 'J')
            cout<<"   ___  ";
        if (s[i] == 'K')
            cout<<" _   __ ";
        if (s[i] == 'L')
            cout<<" _      ";
        if (s[i] == 'M')
            cout<<" __  __  ";
        if (s[i] == 'N')
            cout<<" _   _  ";
        if (s[i] == 'O')
            cout<<" _____  ";
        if (s[i] == 'P')
            cout<<" _____  ";
        if (s[i] == 'Q')
            cout<<" _____  ";
        if (s[i] == 'R')
            cout<<" _____  ";
        if (s[i] == 'S')
            cout<<" _____  ";
        if (s[i] == 'T')
            cout<<" _____  ";
        if (s[i] == 'U')
            cout<<" _   _  ";
        if (s[i] == 'V')
            cout<<" _   _  ";
        if (s[i] == 'W')
            cout<<" _    _  ";
        if (s[i] == 'X')
            cout<<"__   __ ";
        if (s[i] == 'Y')
            cout<<"__   __ ";
        if (s[i] == 'Z')
            cout<<" ______ ";
        if (s[i] == ' ')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print second layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cout<<" / _ \\  ";
        if (s[i] == 'B')
            cout<<"| ___ \\ ";
        if (s[i] == 'C')
            cout<<"/  __ \\ ";
        if (s[i] == 'D')
            cout<<"|  _  \\ ";
        if (s[i] == 'E')
            cout<<"|  ___| ";
        if (s[i] == 'F')
            cout<<"|  ___| ";
        if (s[i] == 'G')
            cout<<"|  __ \\ ";
        if (s[i] == 'H')
            cout<<"| | | | ";
        if (s[i] == 'I')
            cout<<"|_   _| ";
        if (s[i] == 'J')
            cout<<"  |_  | ";
        if (s[i] == 'K')
            cout<<"| | / / ";
        if (s[i] == 'L')
            cout<<"| |     ";
        if (s[i] == 'M')
            cout<<"|  \\/  | ";
        if (s[i] == 'N')
            cout<<"| \\ | | ";
        if (s[i] == 'O')
            cout<<"|  _  | ";
        if (s[i] == 'P')
            cout<<"| ___ \\ ";
        if (s[i] == 'Q')
            cout<<"|  _  | ";
        if (s[i] == 'R')
            cout<<"| ___ \\ ";
        if (s[i] == 'S')
            cout<<"/  ___| ";
        if (s[i] == 'T')
            cout<<"|_   _| ";
        if (s[i] == 'U')
            cout<<"| | | | ";
        if (s[i] == 'V')
            cout<<"| | | | ";
        if (s[i] == 'W')
            cout<<"| |  | | ";
        if (s[i] == 'X')
            cout<<"\\ \\ / / ";
        if (s[i] == 'Y')
            cout<<"\\ \\ / / ";
        if (s[i] == 'Z')
            cout<<"|___  / ";
        if (s[i] == ' ')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print third layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cout<<"/ /_\\ \\ ";
        if (s[i] == 'B')
            cout<<"| |_/ / ";
        if (s[i] == 'C')
            cout<<"| /  \\/ ";
        if (s[i] == 'D')
            cout<<"| | | | ";
        if (s[i] == 'E')
            cout<<"| |__   ";
        if (s[i] == 'F')
            cout<<"| |_    ";
        if (s[i] == 'G')
            cout<<"| |  \\/ ";
        if (s[i] == 'H')
            cout<<"| |_| | ";
        if (s[i] == 'I')
            cout<<"  | |   ";
        if (s[i] == 'J')
            cout<<"    | | ";
        if (s[i] == 'K')
            cout<<"| |/ /  ";
        if (s[i] == 'L')
            cout<<"| |     ";
        if (s[i] == 'M')
            cout<<"| .  . | ";
        if (s[i] == 'N')
            cout<<"|  \\| | ";
        if (s[i] == 'O')
            cout<<"| | | | ";
        if (s[i] == 'P')
            cout<<"| |_/ / ";
        if (s[i] == 'Q')
            cout<<"| | | | ";
        if (s[i] == 'R')
            cout<<"| |_/ / ";
        if (s[i] == 'S')
            cout<<"\\ `--.  ";
        if (s[i] == 'T')
            cout<<"  | |   ";
        if (s[i] == 'U')
            cout<<"| | | | ";
        if (s[i] == 'V')
            cout<<"| | | | ";
        if (s[i] == 'W')
            cout<<"| |  | | ";
        if (s[i] == 'X')
            cout<<" \\ V /  ";
        if (s[i] == 'Y')
            cout<<" \\ V /  ";
        if (s[i] == 'Z')
            cout<<"   / /  ";
        if (s[i] == ' ')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print fourth layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cout<<"|  _  | ";
        if (s[i] == 'B')
            cout<<"| ___ \\ ";
        if (s[i] == 'C')
            cout<<"| |     ";
        if (s[i] == 'D')
            cout<<"| | | | ";
        if (s[i] == 'E')
            cout<<"|  __|  ";
        if (s[i] == 'F')
            cout<<"|  _|   ";
        if (s[i] == 'G')
            cout<<"| | __  ";
        if (s[i] == 'H')
            cout<<"|  _  | ";
        if (s[i] == 'I')
            cout<<"  | |   ";
        if (s[i] == 'J')
            cout<<"    | | ";
        if (s[i] == 'K')
            cout<<"|    \\  ";
        if (s[i] == 'L')
            cout<<"| |     ";
        if (s[i] == 'M')
            cout<<"| |\\/| | ";
        if (s[i] == 'N')
            cout<<"| . ` | ";
        if (s[i] == 'O')
            cout<<"| | | | ";
        if (s[i] == 'P')
            cout<<"|  __/  ";
        if (s[i] == 'Q')
            cout<<"| | | | ";
        if (s[i] == 'R')
            cout<<"|    /  ";
        if (s[i] == 'S')
            cout<<" `--. \\ ";
        if (s[i] == 'T')
            cout<<"  | |   ";
        if (s[i] == 'U')
            cout<<"| | | | ";
        if (s[i] == 'V')
            cout<<"| | | | ";
        if (s[i] == 'W')
            cout<<"| |/\\| | ";
        if (s[i] == 'X')
            cout<<" / ^ \\  ";
        if (s[i] == 'Y')
            cout<<"  \\ /   ";
        if (s[i] == 'Z')
            cout<<"  / /   ";
        if (s[i] == ' ')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print fifth layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cout<<"| | | | ";
        if (s[i] == 'B')
            cout<<"| |_/ / ";
        if (s[i] == 'C')
            cout<<"| \\__/\\ ";
        if (s[i] == 'D')
            cout<<"| |/ /  ";
        if (s[i] == 'E')
            cout<<"| |___  ";
        if (s[i] == 'F')
            cout<<"| |     ";
        if (s[i] == 'G')
            cout<<"| |_\\ \\ ";
        if (s[i] == 'H')
            cout<<"| | | | ";
        if (s[i] == 'I')
            cout<<" _| |_  ";
        if (s[i] == 'J')
            cout<<"/\\__/ / ";
        if (s[i] == 'K')
            cout<<"| |\\  \\ ";
        if (s[i] == 'L')
            cout<<"| |____ ";
        if (s[i] == 'M')
            cout<<"| |  | | ";
        if (s[i] == 'N')
            cout<<"| |\\  | ";
        if (s[i] == 'O')
            cout<<"\\ \\_/ / ";
        if (s[i] == 'P')
            cout<<"| |     ";
        if (s[i] == 'Q')
            cout<<"\\ \\/' / ";
        if (s[i] == 'R')
            cout<<"| |\\ \\  ";
        if (s[i] == 'S')
            cout<<"/\\__/ / ";
        if (s[i] == 'T')
            cout<<"  | |   ";
        if (s[i] == 'U')
            cout<<"| |_| | ";
        if (s[i] == 'V')
            cout<<"\\ \\_/ / ";
        if (s[i] == 'W')
            cout<<"\\  /\\  / ";
        if (s[i] == 'X')
            cout<<"/ / \\ \\ ";
        if (s[i] == 'Y')
            cout<<"  | |   ";
        if (s[i] == 'Z')
            cout<<" / /___ ";
        if (s[i] == ' ')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print sixth layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cout<<"\\_| |_/ ";
        if (s[i] == 'B')
            cout<<"\\____/  ";
        if (s[i] == 'C')
            cout<<" \\____/ ";
        if (s[i] == 'D')
            cout<<"|___/   ";
        if (s[i] == 'E')
            cout<<"\\____/  ";
        if (s[i] == 'F')
            cout<<"\\_|     ";
        if (s[i] == 'G')
            cout<<" \\____/ ";
        if (s[i] == 'H')
            cout<<"\\_| |_/ ";
        if (s[i] == 'I')
            cout<<" \\___/  ";
        if (s[i] == 'J')
            cout<<"\\____/  ";
        if (s[i] == 'K')
            cout<<"\\_| \\_/ ";
        if (s[i] == 'L')
            cout<<"\\_____/ ";
        if (s[i] == 'M')
            cout<<"\\_|  |_/ ";
        if (s[i] == 'N')
            cout<<"\\_| \\_/ ";
        if (s[i] == 'O')
            cout<<" \\___/  ";
        if (s[i] == 'P')
            cout<<"\\_|     ";
        if (s[i] == 'Q')
            cout<<" \\_/\\_\\ ";
        if (s[i] == 'R')
            cout<<"\\_| \\_| ";
        if (s[i] == 'S')
            cout<<"\\____/  ";
        if (s[i] == 'T')
            cout<<"  \\_/   ";
        if (s[i] == 'U')
            cout<<" \\___/  ";
        if (s[i] == 'V')
            cout<<" \\___/  ";
        if (s[i] == 'W')
            cout<<" \\/  \\/  ";
        if (s[i] == 'X')
            cout<<"\\/   \\/ ";
        if (s[i] == 'Y')
            cout<<"  \\_/   ";
        if (s[i] == 'Z')
            cout<<"\\_____/ ";
        if (s[i] == ' ')
            cout<<"    ";
    }
    cout<<endl;
}

void blink(string str){
    int colour[] = {RED, GREEN, BLUE};
    for(int j = 0 ; j < 5 ; j++){
        for (int i = 0; i < 3; i++) {
            Sleep(1000);
            cout << "\033[2J\033[1;1H";
            changeColour(colour[i]);
            Print(str);
        }
    }
    changeColour(WHITE);
}

int main(){
    string str;
    cout << "Enter Text : ";
    getline(cin,str);
    transform(str.begin(), str.end(),str.begin(), ::toupper);
    blink(str);
    return 0;
}