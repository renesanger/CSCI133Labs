Hi, this is rene and this is my readme file.
I built this code and it took me a while to get it working.
partially because i did not know the specifics of cass structure and formatting.
such as that classes need semicolons at the end.
so what i did was that i disregarded project 1 code and started from scratch 
so then i would see my errors clearly as it occured
other problems dealt with scoping of classes and whether or not the class was in the scope
for example class sentence has the vector of type Word and therefore the word class must bee in the scope and by doing this you would need a header file so the problems wouldnt occur

=====4 parts of speech======
for the four parts of speeches i used four different classes which all had similar functionalities for instance they would all have a function that would read from a file and fill all the vectors withobjects of either type noun adj. verb, or, pronoun. i just needed to get noun class working and the other classes would also work

======word================

the word class has two pieces of data that is the name and the part of speech.
and whenever i would need to do something with this i would use member functions both accessor and mutator. such as the findPOS which will lead us to comparison in which we looped through the global vectors and compared it to the word to see if that word is in the global vector.

===sentences========
sentences on the other hand has three private pieces of data which is a vector of type word, the sentence itself in string form and the syntax of each word. after parsing this sentence i would find the part of speech and i would create a syntax and see if this syntax is a valid syntax. 

=======The hardest things======
the hardest things about this project would be friend operator overloading when you would have to stream the file and turn them into objects.

another thing that was quite hard was translating the code for parsing from the project 1 file into the the project 3 where objects were involved.


=========TESTING=========

//I used these as inputs and they worked
MAP IS LARGE ART
Map Is Large Art
People cReate hisTory
map is large art
i ate good burger
faMily beCome tWo
government need law
computer obtain data
internet find important information
music provide inner health


//I used thes tests and they work
world is world (#1) 
sTorY 		are 	 	 HOT 		EQuipMent (#2)
thEy 		reMInd     LakE = (#3)
their depend 			TRADITIONaL	energy (#4)
everybody REcomMEnd Our
