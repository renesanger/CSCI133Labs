#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Noun;
class Adjective;
class Verb;
class Pronoun;
class Word;
class Sentence;

vector<Noun> nounvect;
vector<Adjective> adjvect;
vector<Verb> verbvect;
vector<Pronoun> pronounvect;
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
Noun::Noun()
{
	letters="";
}

string Noun::getLetters()
{
	return letters;
}

void Noun::setLetters(string s)
{
	letters+=s;
}

void Noun::output()
{
	cout<<letters<<endl;

}
ifstream& operator >>(ifstream& in, Noun& noun)
{
	string let;
	in>>let;
	noun.setLetters(let);
	
	return in;
}

void fillNounVect()
{

	ifstream nouns;
	nouns.open("nouns");
	while (!nouns.eof()){
		Noun noun;
		nouns >> noun;
		nounvect.push_back(noun);
  	}
	//noun.output();
	nouns.close();

}

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
Verb::Verb()
{
	letters="";
}

string Verb::getLetters()
{
	return letters;
}

void Verb::setLetters(string s)
{
	letters="";
	letters+=s;
}

void Verb::output()
{
	cout<<letters<<endl;

}
ifstream& operator >>(ifstream& in, Verb& verb)
{
	string let;
	in>>let;
	verb.setLetters(let);
	
	return in;
}

void fillVerbVect()
{

	ifstream verbs;
	verbs.open("verbs");
	while (!verbs.eof()){
		Verb verb;
		verbs >> verb;
		verbvect.push_back(verb);
  	}
	//verb.output();
	verbs.close();

}

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
Adjective::Adjective()
{
	letters="";
}

string Adjective::getLetters()
{
	return letters;
}

void Adjective::setLetters(string s)
{
	letters+=s;
}

void Adjective::output()
{
	cout<<letters<<endl;

}
ifstream& operator >>(ifstream& in, Adjective& adj)
{
	string let;
	in>>let;
	adj.setLetters(let);
	
	return in;
}

void fillAdjVect()
{

	ifstream adjectives;
	adjectives.open("adjectives");
	while (!adjectives.eof()){
		Adjective adj;
		adjectives >> adj;
		adjvect.push_back(adj);
  	}
	//adj.output();
	adjectives.close();

}

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
Pronoun::Pronoun()
{
	letters="";
}

string Pronoun::getLetters()
{
	return letters;
}

void Pronoun::setLetters(string s)
{
	letters+=s;
}

void Pronoun::output()
{
	cout<<letters<<endl;

}
ifstream& operator >>(ifstream& in, Pronoun& pronoun)
{
	string let;
	in>>let;
	pronoun.setLetters(let);
	
	return in;
}

void fillPronounVect()
{

	ifstream pronouns;
	pronouns.open("pronouns");
	while (!pronouns.eof()){
		Pronoun pronoun;
		pronouns >> pronoun;
		pronounvect.push_back(pronoun);
  	}
	//pronoun.output();
	pronouns.close();

}

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

Word::Word(string s)
{
	letters="";
	letters+=s;
}

Word::Word()
{
	letters="";
}

string Word::getLetters()
{
	return letters;
}

void Word::setLetters(string s)
{
	letters="";
	letters+=s;

}

Pos Word::getPartOfSpeech()
{
	return partofspeech;
}


void Word::setPartOfSpeech()
{
	partofspeech=undefined;
	for(int i=0;i<nounvect.size();i++)
	{
		if(letters==nounvect[i].getLetters())
		{
			partofspeech=noun;
		}
	}
	
	for(int i=0;i<verbvect.size();i++)
	{
		if(letters==verbvect[i].getLetters())
		{
			partofspeech=verb;
		}
	}
	
	for(int i=0;i<adjvect.size();i++)
	{
		if(letters==adjvect[i].getLetters())
		{
			partofspeech=adjective;
		}
	}

	for(int i=0;i<pronounvect.size();i++)
	{
		if(letters==pronounvect[i].getLetters())
		{
			partofspeech=pronoun;
		}
	}

	
}


void Word::lower()
{
	for(int i=0; i<letters.length();i++)
	{
		if(letters[i]>= 'A' && letters[i]<='Z')
			letters[i]=letters[i]+0x20;
	}
}
void Word::output()
{
	cout<<letters<<endl;
}


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

Sentence::Sentence(string s)
{
	sent="";
	sent+=s;
}

Sentence::Sentence()
{
	sent="";
}
//turns the whole sentence lowercase
void Sentence::lower()
{
	for(int i=0; i<sent.length();i++)
	{
		if(sent[i]>= 'A' && sent[i]<='Z')
			sent[i]=sent[i]+0x20;
	}
}

void Sentence::output()
{
	cout<<sent<<endl;


}


//finds end of word
int Sentence::findWordEnd(int index)
{
	for(int i=index; i<sent.length()-1;i++)
	{
		if((sent[i+1]==' ')||(sent[i+1]=='\t'))
		{
			return i;
		}
	}
	return sent.length()-1;
}

//finds beginning of word
int Sentence::findNextWord(int index)
{
	for(int i=index;i<sent.length();i++)
	{
		if(sent[i] != ' ')
		{
			return i;
		}
	}
	return sent.length();
}


//gets the word depending on starting and ending index
void Sentence::getWord(int start, int end)
{
	string str="";
	for(int i=start;i<=end; i++)
	{
		str+=sent[i];
	}
	//cout<<s<<endl;
	Word word(str);
	words.push_back(word);
	

}

//gets first word
string Sentence::getWords()
{
	int wordPos; 
	int wordEndPos; 
	int i=1;
	
	for(wordPos=0; wordPos< sent.length();)
	{
		wordPos = findNextWord(wordPos);
		wordEndPos = findWordEnd(wordPos);
		
		if(i==1||i==2||i==3||i==4||i==5)
		{
			getWord(wordPos,wordEndPos);

		}	

		wordPos=wordEndPos+1;
		i++;
	}

}


//concatonates the syntax order in a string
string Sentence::syn(Word word)
{
	string str="";
	if(word.getPartOfSpeech()==noun)
		return str+="noun";
	else if(word.getPartOfSpeech()==verb)
		return str+="verb";
	else if(word.getPartOfSpeech()==adjective)
		return str+="adjective";
	else if(word.getPartOfSpeech()==pronoun)
		return str+="pronoun";
	else if(word.getLetters()=="")
		return str;
	else	
		return " ";

}

//completes syntax
void Sentence::developSyn()
{
	for(int i=0; i<words.size();i++)
	{
		words[i].setPartOfSpeech();
		syntax+= syn(words[i]);
	}	
}

//checks if syntax follows rule
int Sentence::isValid()
{
	if(syntax=="nounverbnoun")
		return 1;
	else if(syntax=="nounverbadjectivenoun")
		return 2;
	else if(syntax=="pronounverbnoun")
		return 3;
	else if(syntax=="pronounverbadjectivenoun")
		return 4;
	else if(syntax=="pronounverbpronoun")
		return 5;
	return 0;
}
void Sentence::legal()
{	
	if(isValid()>0)
		cout<<"Your sentence is a legal sentance by rule " << isValid()<<endl;
	else if(isValid()<=0)
		cout<<"Your sentence is a not a legal sentence"<<endl;

}

string Sentence::getSyntax()
{
	
	return syntax;

}

//prints whether or not the sentence is legal.

/*

*/
/*if you want to see what is in vector nounvect
for(int i=0; i<nounvect.size();i++)
	{
		nounvect[i].output();
	}
adj parallel

	for(int i=0; i<adjvect.size();i++)
	{
		adjvect[i].output();
	}


	for(int i=0; i<adjvect.size();i++)
	{
		verbvect[i].output();
	}


	for(int i=0; i<adjvect.size();i++)
	{
		pronounvect[i].output();
	}
======TESTING LOWER FUNCTION===============
	string s="HELLO";
	Word word(s);
	cout<<word.getLetters()<<endl;
	word.lower();
	cout<<word.getLetters()<<endl;
=====testing vectors============
	string s="map is art";
	Sentence sent(s);
	sent.output();
	sent.getWord1();
	for(int i=0; i<sent.words.size();i++)
	{
		sent.words[i].output();
	}
=====part of speech test=====
	string s="nice";
	Word word(s);
	word.setPartOfSpeech();
	cout<<word.getPartOfSpeech()<<endl;
*/

void fillFileVects()
{
	fillNounVect();
	fillVerbVect();
	fillAdjVect();
	fillPronounVect();
}

int main()
{
	//read file I/O files
	fillFileVects();

	//Input Sentence 
	string s;
	cout<<"Enter a valid sentence: "<<endl;
	getline(cin,s);

	//construct sentence and syntax
	Sentence sent(s);
	sent.lower();	
	sent.getWords();
	sent.developSyn();

	//output legality
	sent.legal();

	return 0;
}







































