#include <iostream>

using namespace std;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }
    while( input.size() != RGB_HEX_LENGTH );

    int r, g, b;
    
    string x = to_string(input);

    const char* ccx = x.c_str();

    sscanf(input, "%02x%02x%02x", &r, &g, &b);

    cout << "Your hex color is: " << input << endl;

    return 0;
}