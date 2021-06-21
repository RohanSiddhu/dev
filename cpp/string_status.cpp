/**
 * Description: Use class to store string and its status details such as number of lower case characters, consonents, etc.
 * coded By: Rohan Siddhu
 * Date: 29/03/2021
 * Last Modified: 31/03/2021
 **/

#include <iostream>
#include <iomanip>
#include <cstring>

namespace loc {				// Name Space local to this file.
	class String {
	private:				// Private Data.
		char* str;
		uint32_t length;
		uint32_t upCase;
		uint32_t lowCase;
		uint32_t vowel;
		uint32_t consonent;
		uint32_t whiteSpace;
		uint32_t numbers;
		uint32_t specialChar;
	private:				// Private Methods.
		void init();
		/*void StrLen();
		void CountUpCase();
		void CountLowCase();
		void CountVowel();
		void CountConsonent();
		void CountWhiteSpace();*/
	public:					// Public Methods.
	// Constructors
		String() {
			/* Default constructor */
			str 		= nullptr;
			length 		= 0;
			upCase 		= 0;
			lowCase 	= 0;
			vowel 		= 0;
			consonent 	= 0;
			whiteSpace 	= 0;
			numbers 	= 0;
			specialChar = 0;
		}
		
		String(const char* value) {
			/* Parameterized constructor */
			length = strlen(value);
			str = (char*)malloc(length);
			strcpy(str, value);			// Deep Copy.
			init();
		}

		String(loc::String& obj) {
			/* Copy constructor */
			str 		= (char*)malloc(obj.length);		// Deep Copy.
			strcpy(str, obj.str);
			length 		= obj.length;
			upCase 		= obj.upCase;
			lowCase 	= obj.lowCase;
			vowel 		= obj.vowel;
			consonent 	= obj.consonent;
			whiteSpace 	= obj.whiteSpace;
			numbers 	= obj.numbers;
			specialChar = obj.specialChar;
		}
		
		~String() {
			free(str);
		}
		
		void Print();
		void ShowDetails();
		void Input();
	};	// String Class End.
	
	//String class Methods Declaration
	void String::init() {
		char temp = 0;
		
		upCase 		= 0;
		lowCase 	= 0;
		vowel 		= 0;
		consonent 	= 0;
		whiteSpace 	= 0;
		numbers 	= 0;
		specialChar = 0;
		
		for (length = 0; *(str + length) != 0; length++) {
			temp = *(str + length);
			
			if ( temp > 64 && temp < 91 ) {		// Upper Case
					upCase++;
					
					if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U') {
						vowel++;
					}
					else {
						consonent++;
					}
			}
			else if (temp > 96 && temp < 123) {		// Lower Case
				lowCase++;
				
				if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
						vowel++;
					}
					else {
						consonent++;
					}
			}
			else if(temp > 47 && temp < 58) {
				numbers++;
			}
			else if (temp == ' ') {
				whiteSpace++;
			}
			else {
				specialChar++;
			}
		}// length++;
	}
	
	inline void String::Print() {
		if (str == nullptr) {
			std::cout << "Empty String" << std::endl;
		}
		else {
			std::cout << str << std::endl;
		}
	}
	
	void String::ShowDetails() {
		if (str == nullptr) {
			std::cout << "Empty String.\n";
			return;
		}
		String::Print();
		std::cout.setf(std::ios::left, std::ios::adjustfield);
		std::cout << std::setw(20) << "Length" << ": " << length << std::endl;
		std::cout << std::setw(20) << "Upper Case" << ": " << upCase << std::endl;
		std::cout << std::setw(20) << "Lower Case" << ": " << lowCase << std::endl;
		std::cout << std::setw(20) << "Vowels" << ": " << vowel << std::endl;
		std::cout << std::setw(20) << "Consonents" << ": " << consonent << std::endl;
		std::cout << std::setw(20) << "White Spaces" << ": " << whiteSpace << std::endl;
		std::cout << std::setw(20) << "Numbers" << ": " << numbers << std::endl;
		std::cout << std::setw(20) << "Special Characters" << ": " << specialChar << std::endl;
	}
	
	void String::Input() {
		std::cout << "Enter Max Length: ";
		std::cin >> length;
		std::cin.ignore();
		
		free(str);
		str = (char*)malloc(length + 1);
		std::cout << "Enter String: ";
		std::cin.getline(str, length);
		init();
	}
}	// Local Name Space End.

/***********************
 * Main
 ***********************/
int main() {
	loc::String strObj;
	
	strObj.Input();
	strObj.ShowDetails();
	
	return 0;
}