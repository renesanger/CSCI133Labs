It was weird to me hownot all the elements in the array were intialized to the value 5, but instead was initialized to the default 0.
this made me take a look at the for loop when setting the values to 5.
it was an off by one error, fence post error, 
changed it to i=MAXSIZE-1 and it worked correctly

the next thing i noticed was that vallues array and arr2 array were pointing to the same object.
it was a shallow copy instead of a deep copy where arr2 does not have its own set of elements.

the reason the program was allowed to run with MAXSIZE and not MAXSIZE-1 is because when the function accessed the 16th element of the array, it modified the adjacent memory location in something that is called buffer overflow. it accesses something that is not supposef to be accessible.
