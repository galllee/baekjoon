#include <iostream>
#include <cstring>

using namespace std;

bool istherevowel(string s) {
	char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };
	for (int i = 0; s[i] != '\0'; i++) {
		for (int j = 0; j < 5; j++) {
			if (s[i] == vowel[j])
				return true;
		}
	}
	return false;
}

bool isthisvowel(string s, int n) {
	if (s[n] == '\0') 
		return false;
	char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };
	for (int i = 0; i < 5; i++) {
		if (s[n] == vowel[i])
			return true;
	}
	return false;
}

int main() {
	string s = { 0 };
	bool okay;

	while (1) {
		okay = true;
		cin >> s;
		if (s == "end")
			break;

		if (!istherevowel(s)) {
			okay = false; 
		}

		for (int i = 0; s[i+1] != '\0'; i++) {
			if (isthisvowel(s, i) && isthisvowel(s, i + 1)) {
				if (isthisvowel(s, i + 2)) {
					okay = false; 
				}
			}
			if (!isthisvowel(s, i) && !isthisvowel(s, i + 1)) {
				if (s[i + 2] != '\0' && !isthisvowel(s, i + 2)) {
					okay = false;
				}
			}
		}
		for (int i = 0; s[i + 1] != '\0'; i++) {
			if (s[i] == s[i + 1] && !(s[i] == 'e' || s[i] == 'o')) {
				okay = false;
			}
		}
		if (okay == true)
			cout << "<" << s << "> is acceptable.\n";
		else
			cout << "<" << s << "> is not acceptable.\n";
	}


	return 0;
}