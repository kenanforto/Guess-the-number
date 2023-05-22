# Guess-the-number
Let's imagine a number between 0 and 100 (not including those two), and the computer should guess which number it is!
Function daj_sljedeci_broj receives one parameter of type int. This parameter has a value of -1 if the user answered 
"less", and +1 if the user answered "greater", while 0 returns the middle of the interval but does not change the interval. 
The function "remembers" what number was returned last time and adjusts the interval accordingly.
