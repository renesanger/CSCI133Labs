#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
void fillNounVect();
void fillVerbVect();
void fillAdjVect();
void fillPronounVect();
void fillFileVects();


//=====================NOUNS========================
class Noun
{
	public:
		Noun();
		//initialized to ""
		string getLetters();
		void setLetters(string s);
		friend ifstream& operator >>(ifstream& in, Noun& noun);
		void output();

	private:
		string letters;
};

//========================VERBS========================

class Verb
{
	public:
		Verb();
		//initialized to ""
		string getLetters();
		void setLetters(string s);
		friend ifstream& operator >>(ifstream& in, Verb& verb);
		void output();

	private:
		string letters;
};


//=====================ADJECTIVES=========================

class Adjective
{
	public:
		Adjective();
		//initialized to ""
		string getLetters();
		void setLetters(string s);
		friend ifstream& operator >>(ifstream& in, Adjective& adj);
		void output();

	private:
		string letters;
};


//========================PRONOUNS========================

class Pronoun
{
	public:
		Pronoun();
		//initialized to ""
		string getLetters();
		void setLetters(string s);
		friend ifstream& operator >>(ifstream& in, Pronoun& pronoun);
		void output();

	private:
		string letters;
};


enum Pos{noun,verb,adjective,pronoun,undefined=-1};


//==================WORD========================
class Word
{
	public:
		bool isPronoun();
		bool isNoun();
		bool isVerb();
		bool isAdj();
		string getLetters();
		void setLetters(string s);
		void lower();
		Word(string s);
		Word();
		void output();
		Pos getPartOfSpeech();
		void setPartOfSpeech();
		
	private:
		string letters;
		Pos partofspeech;
		
		
};

//================SENTENCES==================
class Sentence
{
	public:
		void lower();
		int findWordEnd(int index);
		int findNextWord(int index);
		string syn(Word w);
		void developSyn();
		int isValid();
		void legal();
		
		void getWord(int start, int end);
		string getWords();
		string getSyntax();

		void input();
		Sentence(string s);
		Sentence();
		void output();
		

	private:
		string sent;
		vector <Word> words;
		string syntax;
	

};


