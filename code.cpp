#include <windows.h>
#include <bits/stdc++.h>

using namespace std;

void changeColour(int colour) {
	HANDLE hConsole;
	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colour);
}

void  Print(string s){
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout<<"  ___   ";
        if (s[i] == '\x42')
            cout<<" _____  ";
        if (s[i] == '\x43')
            cout<<" _____  ";
        if (s[i] == '\x44')
            cout<<" _____  ";
        if (s[i] == '\x45')
            cout<<" _____  ";
        if (s[i] == '\x46')
            cout<<" _____  ";
        if (s[i] == '\x47')
            cout<<" _____  ";
        if (s[i] == '\x48')
            cout<<" _   _  ";
        if (s[i] == '\x49')
            cout<<" _____  ";
        if (s[i] == '\x4A')
            cout<<"   ___  ";
        if (s[i] == '\x4B')
            cout<<" _   __ ";
        if (s[i] == '\x4C')
            cout<<" _      ";
        if (s[i] == '\x4D')
            cout<<" __  __  ";
        if (s[i] == '\x4E')
            cout<<" _   _  ";
        if (s[i] == '\x4F')
            cout<<" _____  ";
        if (s[i] == '\x50')
            cout<<" _____  ";
        if (s[i] == '\x51')
            cout<<" _____  ";
        if (s[i] == '\x52')
            cout<<" _____  ";
        if (s[i] == '\x53')
            cout<<" _____  ";
        if (s[i] == '\x54')
            cout<<" _____  ";
        if (s[i] == '\x55')
            cout<<" _   _  ";
        if (s[i] == '\x56')
            cout<<" _   _  ";
        if (s[i] == '\x57')
            cout<<" _    _  ";
        if (s[i] == '\x58')
            cout<<"__   __ ";
        if (s[i] == '\x59')
            cout<<"__   __ ";
        if (s[i] == '\x6A')
            cout<<" ______ ";
        if (s[i] == '\x20')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print second layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout<<" / _ \\  ";
        if (s[i] == '\x42')
            cout<<"| ___ \\ ";
        if (s[i] == '\x43')
            cout<<"/  __ \\ ";
        if (s[i] == '\x44')
            cout<<"|  _  \\ ";
        if (s[i] == '\x45')
            cout<<"|  ___| ";
        if (s[i] == '\x46')
            cout<<"|  ___| ";
        if (s[i] == '\x47')
            cout<<"|  __ \\ ";
        if (s[i] == '\x48')
            cout<<"| | | | ";
        if (s[i] == '\x49')
            cout<<"|_   _| ";
        if (s[i] == '\x4A')
            cout<<"  |_  | ";
        if (s[i] == '\x4B')
            cout<<"| | / / ";
        if (s[i] == '\x4C')
            cout<<"| |     ";
        if (s[i] == '\x4D')
            cout<<"|  \\/  | ";
        if (s[i] == '\x4E')
            cout<<"| \\ | | ";
        if (s[i] == '\x4F')
            cout<<"|  _  | ";
        if (s[i] == '\x50')
            cout<<"| ___ \\ ";
        if (s[i] == '\x51')
            cout<<"|  _  | ";
        if (s[i] == '\x52')
            cout<<"| ___ \\ ";
        if (s[i] == '\x53')
            cout<<"/  ___| ";
        if (s[i] == '\x54')
            cout<<"|_   _| ";
        if (s[i] == '\x55')
            cout<<"| | | | ";
        if (s[i] == '\x56')
            cout<<"| | | | ";
        if (s[i] == '\x57')
            cout<<"| |  | | ";
        if (s[i] == '\x58')
            cout<<"\\ \\ / / ";
        if (s[i] == '\x59')
            cout<<"\\ \\ / / ";
        if (s[i] == '\x6A')
            cout<<"|___  / ";
        if (s[i] == '\x20')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print third layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout<<"/ /_\\ \\ ";
        if (s[i] == '\x42')
            cout<<"| |_/ / ";
        if (s[i] == '\x43')
            cout<<"| /  \\/ ";
        if (s[i] == '\x44')
            cout<<"| | | | ";
        if (s[i] == '\x45')
            cout<<"| |__   ";
        if (s[i] == '\x46')
            cout<<"| |_    ";
        if (s[i] == '\x47')
            cout<<"| |  \\/ ";
        if (s[i] == '\x48')
            cout<<"| |_| | ";
        if (s[i] == '\x49')
            cout<<"  | |   ";
        if (s[i] == '\x4A')
            cout<<"    | | ";
        if (s[i] == '\x4B')
            cout<<"| |/ /  ";
        if (s[i] == '\x4C')
            cout<<"| |     ";
        if (s[i] == '\x4D')
            cout<<"| .  . | ";
        if (s[i] == '\x4E')
            cout<<"|  \\| | ";
        if (s[i] == '\x4F')
            cout<<"| | | | ";
        if (s[i] == '\x50')
            cout<<"| |_/ / ";
        if (s[i] == '\x51')
            cout<<"| | | | ";
        if (s[i] == '\x52')
            cout<<"| |_/ / ";
        if (s[i] == '\x53')
            cout<<"\\ `--.  ";
        if (s[i] == '\x54')
            cout<<"  | |   ";
        if (s[i] == '\x55')
            cout<<"| | | | ";
        if (s[i] == '\x56')
            cout<<"| | | | ";
        if (s[i] == '\x57')
            cout<<"| |  | | ";
        if (s[i] == '\x58')
            cout<<" \\ V /  ";
        if (s[i] == '\x59')
            cout<<" \\ V /  ";
        if (s[i] == '\x6A')
            cout<<"   / /  ";
        if (s[i] == '\x20')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print fourth layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout<<"|  _  | ";
        if (s[i] == '\x42')
            cout<<"| ___ \\ ";
        if (s[i] == '\x43')
            cout<<"| |     ";
        if (s[i] == '\x44')
            cout<<"| | | | ";
        if (s[i] == '\x45')
            cout<<"|  __|  ";
        if (s[i] == '\x46')
            cout<<"|  _|   ";
        if (s[i] == '\x47')
            cout<<"| | __  ";
        if (s[i] == '\x48')
            cout<<"|  _  | ";
        if (s[i] == '\x49')
            cout<<"  | |   ";
        if (s[i] == '\x4A')
            cout<<"    | | ";
        if (s[i] == '\x4B')
            cout<<"|    \\  ";
        if (s[i] == '\x4C')
            cout<<"| |     ";
        if (s[i] == '\x4D')
            cout<<"| |\\/| | ";
        if (s[i] == '\x4E')
            cout<<"| . ` | ";
        if (s[i] == '\x4F')
            cout<<"| | | | ";
        if (s[i] == '\x50')
            cout<<"|  __/  ";
        if (s[i] == '\x51')
            cout<<"| | | | ";
        if (s[i] == '\x52')
            cout<<"|    /  ";
        if (s[i] == '\x53')
            cout<<" `--. \\ ";
        if (s[i] == '\x54')
            cout<<"  | |   ";
        if (s[i] == '\x55')
            cout<<"| | | | ";
        if (s[i] == '\x56')
            cout<<"| | | | ";
        if (s[i] == '\x57')
            cout<<"| |/\\| | ";
        if (s[i] == '\x58')
            cout<<" / ^ \\  ";
        if (s[i] == '\x59')
            cout<<"  \\ /   ";
        if (s[i] == '\x6A')
            cout<<"  / /   ";
        if (s[i] == '\x20')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print fifth layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout<<"| | | | ";
        if (s[i] == '\x42')
            cout<<"| |_/ / ";
        if (s[i] == '\x43')
            cout<<"| \\__/\\ ";
        if (s[i] == '\x44')
            cout<<"| |/ /  ";
        if (s[i] == '\x45')
            cout<<"| |___  ";
        if (s[i] == '\x46')
            cout<<"| |     ";
        if (s[i] == '\x47')
            cout<<"| |_\\ \\ ";
        if (s[i] == '\x48')
            cout<<"| | | | ";
        if (s[i] == '\x49')
            cout<<" _| |_  ";
        if (s[i] == '\x4A')
            cout<<"/\\__/ / ";
        if (s[i] == '\x4B')
            cout<<"| |\\  \\ ";
        if (s[i] == '\x4C')
            cout<<"| |____ ";
        if (s[i] == '\x4D')
            cout<<"| |  | | ";
        if (s[i] == '\x4E')
            cout<<"| |\\  | ";
        if (s[i] == '\x4F')
            cout<<"\\ \\_/ / ";
        if (s[i] == '\x50')
            cout<<"| |     ";
        if (s[i] == '\x51')
            cout<<"\\ \\/' / ";
        if (s[i] == '\x52')
            cout<<"| |\\ \\  ";
        if (s[i] == '\x53')
            cout<<"/\\__/ / ";
        if (s[i] == '\x54')
            cout<<"  | |   ";
        if (s[i] == '\x55')
            cout<<"| |_| | ";
        if (s[i] == '\x56')
            cout<<"\\ \\_/ / ";
        if (s[i] == '\x57')
            cout<<"\\  /\\  / ";
        if (s[i] == '\x58')
            cout<<"/ / \\ \\ ";
        if (s[i] == '\x59')
            cout<<"  | |   ";
        if (s[i] == '\x6A')
            cout<<" / /___ ";
        if (s[i] == '\x20')
            cout<<"    ";
    }
    cout<<endl;
    //loop will print sixth layer
    for (int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout<<"\\_| |_/ ";
        if (s[i] == '\x42')
            cout<<"\\____/  ";
        if (s[i] == '\x43')
            cout<<" \\____/ ";
        if (s[i] == '\x44')
            cout<<"|___/   ";
        if (s[i] == '\x45')
            cout<<"\\____/  ";
        if (s[i] == '\x46')
            cout<<"\\_|     ";
        if (s[i] == '\x47')
            cout<<" \\____/ ";
        if (s[i] == '\x48')
            cout<<"\\_| |_/ ";
        if (s[i] == '\x49')
            cout<<" \\___/  ";
        if (s[i] == '\x4A')
            cout<<"\\____/  ";
        if (s[i] == '\x4B')
            cout<<"\\_| \\_/ ";
        if (s[i] == '\x4C')
            cout<<"\\_____/ ";
        if (s[i] == '\x4D')
            cout<<"\\_|  |_/ ";
        if (s[i] == '\x4E')
            cout<<"\\_| \\_/ ";
        if (s[i] == '\x4F')
            cout<<" \\___/  ";
        if (s[i] == '\x50')
            cout<<"\\_|     ";
        if (s[i] == '\x51')
            cout<<" \\_/\\_\\ ";
        if (s[i] == '\x52')
            cout<<"\\_| \\_| ";
        if (s[i] == '\x53')
            cout<<"\\____/  ";
        if (s[i] == '\x54')
            cout<<"  \\_/   ";
        if (s[i] == '\x55')
            cout<<" \\___/  ";
        if (s[i] == '\x56')
            cout<<" \\___/  ";
        if (s[i] == '\x57')
            cout<<" \\/  \\/  ";
        if (s[i] == '\x58')
            cout<<"\\/   \\/ ";
        if (s[i] == '\x59')
            cout<<"  \\_/   ";
        if (s[i] == '\x6A')
            cout<<"\\_____/ ";
        if (s[i] == '\x20')
            cout<<"    ";
    }
    cout<<endl;
}

void blink(string str){
    int colour[] = {0x4, 0x2, 0x1};
    for(int j = 0 ; j < 0x5 ; j++){
        for (int i = 0; i < 0x3; i++) {
            Sleep(1000);
            cout << "\033[2J\033[1;1H";
            changeColour(colour[i]);
            Print(str);
        }
    }
    changeColour(0xF);
}

int main(){
    string str;
    cout << "Enter Text : ";
    getline(cin,str);
    transform(str.begin(), str.end(),str.begin(), ::toupper);
    blink(str);
    return 0;
}