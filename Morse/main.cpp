#include <iostream>
#include <cctype>
#include <map>
using namespace std;
typedef long long int lld;
string S1, S2, M1, M2;
map<char, string> Morse;

//Basic Functions
void GetInput() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> S1 >> S2;
}

void MorseCodes()
{
	Morse['A'] = ".-";
	Morse['B'] = "-...";
	Morse['C'] = "-.-.";
	Morse['D'] = "-..";
	Morse['E'] = ".";
	Morse['F'] = "..-.";
	Morse['G'] = "--.";
	Morse['H'] = "....";
	Morse['I'] = "..";
	Morse['J'] = ".---";
	Morse['K'] = "-.-";
	Morse['L'] = ".-..";
	Morse['M'] = "--";
	Morse['N'] = "-.";
	Morse['O'] = "---";
	Morse['P'] = ".--.";
	Morse['Q'] = "--.-";
	Morse['R'] = ".-.";
	Morse['S'] = "...";
	Morse['T'] = "-";
	Morse['U'] = "..-";
	Morse['V'] = "...-";
	Morse['W'] = ".--";
	Morse['X'] = "-..-";
	Morse['Y'] = "-.--";
	Morse['Z'] = "--..";
}

bool SolveProblem()
{
	for(int i=0; i<S1.length(); i++)
		M1+= Morse[toupper(S1[i])];
	for(int i=0; i<S2.length(); i++)
		M2+= Morse[toupper(S2[i])];
	if(M1 == M2)
		return true;
	return false;
}

void PrintOutput(bool ans) {
	if(ans)
		cout << "Es lo mesmo";
	else
		cout << "No es lo mesmo";
	cout << "\n";
}

int main ()
{
	MorseCodes();
	GetInput();
	PrintOutput(SolveProblem());
	return 0;
}
