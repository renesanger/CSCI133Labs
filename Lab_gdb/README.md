i used GDB in this lab assignment and it really helped me out,
taught me that 

1)the reason why we use debugging tools:
	to fix the program based on how the compiler runs 
	our program, using step by step analysis of each line
2)i used step to see the process in which the program goes through to run the program

3)print statements helped me alot, it kinda works like couts statements in that it shows you what the value of each element is.
	- particularly for example i whent through the first for loop in the function an printed the elements of the array and instead of getting integers from 0 to 5, i got crazy numbers that showed me there was an error

4)step:
	to give an example of how i used step,
	when i typed step in the GDB terminal, it went through the program and gave me the first action in the program which is the for loop.

other notes:
	i fixed the function call for minVal because it was reffering to a non-existent array in order for it to compile and make the executable

	i used -tui to get the display menu
and used start to start the program although it wouldnt run

	found a fencepost or out of bounds error when referring to A[5] which does not exist


