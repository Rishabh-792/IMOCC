#include <windows.h>
#include <bits/stdc++.h>

using namespace std;

void changeColour(int colour) {
	HANDLE hConsole;
	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colour);
}

void  Print(string s){
    for(int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout << "\x20"
                    " \137_\x5F"
                    " \040 ";
        ;
        if (s[i] == '\x42')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x43')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x44')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x45')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x46')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x47')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x48')
            cout << "\x20"
                    "_\040 \x20"
                    "_\040 ";
        ;
        if (s[i] == '\x49')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x4A')
            cout << "\x20"
                    " \040_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x4B')
            cout << "\x20"
                    "_\040 \x20"
                    "_\137 ";
        ;
        if (s[i] == '\x4C')
            cout << "\x20"
                    "_\040 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x4D')
            cout << "\x20"
                    "_\137 \x20"
                    "_\137 \x20"
                    "";
        ;
        if (s[i] == '\x4E')
            cout << "\x20"
                    "_\040 \x20"
                    "_\040 ";
        ;
        if (s[i] == '\x4F')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x50')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x51')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x52')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x53')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x54')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x55')
            cout << "\x20"
                    "_\040 \x20"
                    "_\040 ";
        ;
        if (s[i] == '\x56')
            cout << "\x20"
                    "_\040 \x20"
                    "_\040 ";
        ;
        if (s[i] == '\x57')
            cout << "\x20"
                    "_\040 \x20"
                    " \137 \x20"
                    "";
        ;
        if (s[i] == '\x58')
            cout << "\x5F"
                    "_\040 \x20"
                    "_\137 ";
        ;
        if (s[i] == '\x59')
            cout << "\x5F"
                    "_\040 \x20"
                    "_\137 ";
        ;
        if (s[i] == '\x5A')
            cout << "\x20"
                    "_\137_\x5F"
                    "_\137 ";
        ;
        if (s[i] == '\x20')
            cout << "\x20"
                    " \040 ";
        ;
    };
    cout << endl;
    for(int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout << "\x20"
                    "/\040_\x20"
                    "\\\040 ";
        ;
        if (s[i] == '\x42')
            cout << "\x7C"
                    " \137_\x5F"
                    " \134 ";
        ;
        if (s[i] == '\x43')
            cout << "\x2F"
                    " \040_\x5F"
                    " \134 ";
        ;
        if (s[i] == '\x44')
            cout << "\x7C"
                    " \040_\x20"
                    " \134 ";
        ;
        if (s[i] == '\x45')
            cout << "\x7C"
                    " \040_\x5F"
                    "_\174 ";
        ;
        if (s[i] == '\x46')
            cout << "\x7C"
                    " \040_\x5F"
                    "_\174 ";
        ;
        if (s[i] == '\x47')
            cout << "\x7C"
                    " \040_\x5F"
                    " \134 ";
        ;
        if (s[i] == '\x48')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x49')
            cout << "\x7C"
                    "_\040 \x20"
                    "_\174 ";
        ;
        if (s[i] == '\x4A')
            cout << "\x20"
                    " \174_\x20"
                    " \174 ";
        ;
        if (s[i] == '\x4B')
            cout << "\x7C"
                    " \174 \x2F"
                    " \057 ";
        ;
        if (s[i] == '\x4C')
            cout << "\x7C"
                    " \174 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x4D')
            cout << "\x7C"
                    " \040\\\x2F"
                    " \040|\x20"
                    "";
        ;
        if (s[i] == '\x4E')
            cout << "\x7C"
                    " \134 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x4F')
            cout << "\x7C"
                    " \040_\x20"
                    " \174 ";
        ;
        if (s[i] == '\x50')
            cout << "\x7C"
                    " \137_\x5F"
                    " \134 ";
        ;
        if (s[i] == '\x51')
            cout << "\x7C"
                    " \040_\x20"
                    " \174 ";
        ;
        if (s[i] == '\x52')
            cout << "\x7C"
                    " \137_\x5F"
                    " \134 ";
        ;
        if (s[i] == '\x53')
            cout << "\x2F"
                    " \040_\x5F"
                    "_\174 ";
        ;
        if (s[i] == '\x54')
            cout << "\x7C"
                    "_\040 \x20"
                    "_\174 ";
        ;
        if (s[i] == '\x55')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x56')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x57')
            cout << "\x7C"
                    " \174 \x20"
                    "|\040|\x20"
                    "";
        ;
        if (s[i] == '\x58')
            cout << "\x5C"
                    " \134 \x2F"
                    " \057 ";
        ;
        if (s[i] == '\x59')
            cout << "\x5C"
                    " \134 \x2F"
                    " \057 ";
        ;
        if (s[i] == '\x5A')
            cout << "\x7C"
                    "_\137_\x20"
                    " \057 ";
        ;
        if (s[i] == '\x20')
            cout << "\x20"
                    " \040 ";
        ;
    };
    cout << endl;
    for(int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout << "\x2F"
                    " \057_\x5C"
                    " \134 ";
        ;
        if (s[i] == '\x42')
            cout << "\x7C"
                    " \174_\x2F"
                    " \057 ";
        ;
        if (s[i] == '\x43')
            cout << "\x7C"
                    " \057 \x20"
                    "\\\057 ";
        ;
        if (s[i] == '\x44')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x45')
            cout << "\x7C"
                    " \174_\x5F"
                    " \040 ";
        ;
        if (s[i] == '\x46')
            cout << "\x7C"
                    " \174_\x20"
                    " \040 ";
        ;
        if (s[i] == '\x47')
            cout << "\x7C"
                    " \174 \x20"
                    "\\\057 ";
        ;
        if (s[i] == '\x48')
            cout << "\x7C"
                    " \174_\x7C"
                    " \174 ";
        ;
        if (s[i] == '\x49')
            cout << "\x20"
                    " \174 \x7C"
                    " \040 ";
        ;
        if (s[i] == '\x4A')
            cout << "\x20"
                    " \040 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x4B')
            cout << "\x7C"
                    " \174/\x20"
                    "/\040 ";
        ;
        if (s[i] == '\x4C')
            cout << "\x7C"
                    " \174 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x4D')
            cout << "\x7C"
                    " \056 \x20"
                    ".\040|\x20"
                    "";
        ;
        if (s[i] == '\x4E')
            cout << "\x7C"
                    " \040\\\x7C"
                    " \174 ";
        ;
        if (s[i] == '\x4F')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x50')
            cout << "\x7C"
                    " \174_\x2F"
                    " \057 ";
        ;
        if (s[i] == '\x51')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x52')
            cout << "\x7C"
                    " \174_\x2F"
                    " \057 ";
        ;
        if (s[i] == '\x53')
            cout << "\x5C"
                    " \140-\x2D"
                    ".\040 ";
        ;
        if (s[i] == '\x54')
            cout << "\x20"
                    " \174 \x7C"
                    " \040 ";
        ;
        if (s[i] == '\x55')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x56')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x57')
            cout << "\x7C"
                    " \174 \x20"
                    "|\040|\x20"
                    "";
        ;
        if (s[i] == '\x58')
            cout << "\x20"
                    "\\\040V\x20"
                    "/\040 ";
        ;
        if (s[i] == '\x59')
            cout << "\x20"
                    "\\\040V\x20"
                    "/\040 ";
        ;
        if (s[i] == '\x5A')
            cout << "\x20"
                    " \040/\x20"
                    "/\040 ";
        ;
        if (s[i] == '\x20')
            cout << "\x20"
                    " \040 ";
        ;
    };
    cout << endl;
    for(int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout << "\x7C"
                    " \040_\x20"
                    " \174 ";
        ;
        if (s[i] == '\x42')
            cout << "\x7C"
                    " \137_\x5F"
                    " \134 ";
        ;
        if (s[i] == '\x43')
            cout << "\x7C"
                    " \174 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x44')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x45')
            cout << "\x7C"
                    " \040_\x5F"
                    "|\040 ";
        ;
        if (s[i] == '\x46')
            cout << "\x7C"
                    " \040_\x7C"
                    " \040 ";
        ;
        if (s[i] == '\x47')
            cout << "\x7C"
                    " \174 \x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x48')
            cout << "\x7C"
                    " \040_\x20"
                    " \174 ";
        ;
        if (s[i] == '\x49')
            cout << "\x20"
                    " \174 \x7C"
                    " \040 ";
        ;
        if (s[i] == '\x4A')
            cout << "\x20"
                    " \040 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x4B')
            cout << "\x7C"
                    " \040 \x20"
                    "\\\040 ";
        ;
        if (s[i] == '\x4C')
            cout << "\x7C"
                    " \174 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x4D')
            cout << "\x7C"
                    " \174\\\x2F"
                    "|\040|\x20"
                    "";
        ;
        if (s[i] == '\x4E')
            cout << "\x7C"
                    " \056 \x60"
                    " \174 ";
        ;
        if (s[i] == '\x4F')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x50')
            cout << "\x7C"
                    " \040_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x51')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x52')
            cout << "\x7C"
                    " \040 \x20"
                    "/\040 ";
        ;
        if (s[i] == '\x53')
            cout << "\x20"
                    "`\055-\x2E"
                    " \134 ";
        ;
        if (s[i] == '\x54')
            cout << "\x20"
                    " \174 \x7C"
                    " \040 ";
        ;
        if (s[i] == '\x55')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x56')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x57')
            cout << "\x7C"
                    " \174/\x5C"
                    "|\040|\x20"
                    "";
        ;
        if (s[i] == '\x58')
            cout << "\x20"
                    "/\040^\x20"
                    "\\\040 ";
        ;
        if (s[i] == '\x59')
            cout << "\x20"
                    " \134 \x2F"
                    " \040 ";
        ;
        if (s[i] == '\x5A')
            cout << "\x20"
                    " \057 \x2F"
                    " \040 ";
        ;
        if (s[i] == '\x20')
            cout << "\x20"
                    " \040 ";
        ;
    };
    cout << endl;
    for(int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x42')
            cout << "\x7C"
                    " \174_\x2F"
                    " \057 ";
        ;
        if (s[i] == '\x43')
            cout << "\x7C"
                    " \134_\x5F"
                    "/\134 ";
        ;
        if (s[i] == '\x44')
            cout << "\x7C"
                    " \174/\x20"
                    "/\040 ";
        ;
        if (s[i] == '\x45')
            cout << "\x7C"
                    " \174_\x5F"
                    "_\040 ";
        ;
        if (s[i] == '\x46')
            cout << "\x7C"
                    " \174 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x47')
            cout << "\x7C"
                    " \174_\x5C"
                    " \134 ";
        ;
        if (s[i] == '\x48')
            cout << "\x7C"
                    " \174 \x7C"
                    " \174 ";
        ;
        if (s[i] == '\x49')
            cout << "\x20"
                    "_\174 \x7C"
                    "_\040 ";
        ;
        if (s[i] == '\x4A')
            cout << "\x2F"
                    "\\\137_\x2F"
                    " \057 ";
        ;
        if (s[i] == '\x4B')
            cout << "\x7C"
                    " \174\\\x20"
                    " \134 ";
        ;
        if (s[i] == '\x4C')
            cout << "\x7C"
                    " \174_\x5F"
                    "_\137 ";
        ;
        if (s[i] == '\x4D')
            cout << "\x7C"
                    " \174 \x20"
                    "|\040|\x20"
                    "";
        ;
        if (s[i] == '\x4E')
            cout << "\x7C"
                    " \174\\\x20"
                    " \174 ";
        ;
        if (s[i] == '\x4F')
            cout << "\x5C"
                    " \134_\x2F"
                    " \057 ";
        ;
        if (s[i] == '\x50')
            cout << "\x7C"
                    " \174 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x51')
            cout << "\x5C"
                    " \134/\x27"
                    " \057 ";
        ;
        if (s[i] == '\x52')
            cout << "\x7C"
                    " \174\\\x20"
                    "\\\040 ";
        ;
        if (s[i] == '\x53')
            cout << "\x2F"
                    "\\\137_\x2F"
                    " \057 ";
        ;
        if (s[i] == '\x54')
            cout << "\x20"
                    " \174 \x7C"
                    " \040 ";
        ;
        if (s[i] == '\x55')
            cout << "\x7C"
                    " \174_\x7C"
                    " \174 ";
        ;
        if (s[i] == '\x56')
            cout << "\x5C"
                    " \134_\x2F"
                    " \057 ";
        ;
        if (s[i] == '\x57')
            cout << "\x5C"
                    " \040/\x5C"
                    " \040/\x20"
                    "";
        ;
        if (s[i] == '\x58')
            cout << "\x2F"
                    " \057 \x5C"
                    " \134 ";
        ;
        if (s[i] == '\x59')
            cout << "\x20"
                    " \174 \x7C"
                    " \040 ";
        ;
        if (s[i] == '\x5A')
            cout << "\x20"
                    "/\040/\x5F"
                    "_\137 ";
        ;
        if (s[i] == '\x20')
            cout << "\x20"
                    " \040 ";
        ;
    };
    cout << endl;
    for(int i=0; i < s.size(); i++)
    {
        if (s[i] == '\x41')
            cout << "\x5C"
                    "_\174 \x7C"
                    "_\057 ";
        ;
        if (s[i] == '\x42')
            cout << "\x5C"
                    "_\137_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x43')
            cout << "\x20"
                    "\\\137_\x5F"
                    "_\057 ";
        ;
        if (s[i] == '\x44')
            cout << "\x7C"
                    "_\137_\x2F"
                    " \040 ";
        ;
        if (s[i] == '\x45')
            cout << "\x5C"
                    "_\137_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x46')
            cout << "\x5C"
                    "_\174 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x47')
            cout << "\x20"
                    "\\\137_\x5F"
                    "_\057 ";
        ;
        if (s[i] == '\x48')
            cout << "\x5C"
                    "_\174 \x7C"
                    "_\057 ";
        ;
        if (s[i] == '\x49')
            cout << "\x20"
                    "\\\137_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x4A')
            cout << "\x5C"
                    "_\137_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x4B')
            cout << "\x5C"
                    "_\174 \x5C"
                    "_\057 ";
        ;
        if (s[i] == '\x4C')
            cout << "\x5C"
                    "_\137_\x5F"
                    "_\057 ";
        ;
        if (s[i] == '\x4D')
            cout << "\x5C"
                    "_\174 \x20"
                    "|\137/\x20"
                    "";
        ;
        if (s[i] == '\x4E')
            cout << "\x5C"
                    "_\174 \x5C"
                    "_\057 ";
        ;
        if (s[i] == '\x4F')
            cout << "\x20"
                    "\\\137_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x50')
            cout << "\x5C"
                    "_\174 \x20"
                    " \040 ";
        ;
        if (s[i] == '\x51')
            cout << "\x20"
                    "\\\137/\x5C"
                    "_\134 ";
        ;
        if (s[i] == '\x52')
            cout << "\x5C"
                    "_\174 \x5C"
                    "_\174 ";
        ;
        if (s[i] == '\x53')
            cout << "\x5C"
                    "_\137_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x54')
            cout << "\x20"
                    " \134_\x2F"
                    " \040 ";
        ;
        if (s[i] == '\x55')
            cout << "\x20"
                    "\\\137_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x56')
            cout << "\x20"
                    "\\\137_\x5F"
                    "/\040 ";
        ;
        if (s[i] == '\x57')
            cout << "\x20"
                    "\\\057 \x20"
                    "\\\057 \x20"
                    "";
        ;
        if (s[i] == '\x58')
            cout << "\x5C"
                    "/\040 \x20"
                    "\\\057 ";
        ;
        if (s[i] == '\x59')
            cout << "\x20"
                    " \134_\x2F"
                    " \040 ";
        ;
        if (s[i] == '\x5A')
            cout << "\x5C"
                    "_\137_\x5F"
                    "_\057 ";
        ;
        if (s[i] == '\x20')
            cout << "\x20"
                    " \040 ";
        ;
    };
    cout << "\n";
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