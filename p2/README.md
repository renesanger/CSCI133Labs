What I did:

-instead of going to each location on the board on by 1,
	i placed the default to be random

-I've mad new variables "prevHit, PrevMiss, prevHit, PrecSunk" to check if the last move was a hit or miss

-Ive also made variable "found" to see if a location is a hit it saves the coordinates to (hitR, hitC) and set found to equal true

-found is only false at the beginning of the game and when you have successfully sunk the ship
this makes it so it will going, when it was previously missed shot (prevHit ==True) but (found==true)
change direction.

-sidenote: if i had more time and wasnt lazy my idea was maybe you can two ships at a time using your miss of the first ship
-i could have also improved this code by limiting the directions i want to go to

-IMPORTANT: If the designated location for r and c has already been shot at, change direction (if found==true) or hit a different location (random)

-this big leap that im proud of is what to do after the ship is sunk and found==false? where do you hit?
instead of hitting at a random location, save the hitR and hitC of the previously sunken ship and use that initial shot to manipulate where to go next.
-more accurately I added two or subtracted two to either row or col location depending on the direction of the previosly sunken ship as to predict that the next ship would be parallel

-once again if the location is already shot at hit somewhere else randomly

-When hitting a location I always make sure that there is space for the ship to be placed there
-so i check the longest distance containing the shot 
-and i check the widest also
-this would be easier to explain with a diagram

	-----------
	| |X| | | |
	-----------
	|X| | |X|X|
	----------
	|X|X| |X|X|
	-----------
-so basically if you hit at location (0,2) the longest distance is 3 and the widest is 3
-the way i calculate is increment a count for every time i scan each box and then stop incrementing when either the shot is out of the grid or if it hits an x
-coding: i used while loops and if statements, i looped through an array called mem[][] that mimicked the board and the hits

-finally the one that decreased the code the most wasplacing "x" outside the perimeter of a sunken ship because each ship is not allowed to touch.


