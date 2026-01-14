# NumberGuessingGame
"""
main():
    Variable for 20-len char array userName
    Variable with the name guess 
    Variable with the name "correct" (will be randonly generated)
    Variable with the name "turns", starts at 0
    Varaible with the name "keepGoing" starts true

    seed random number generator
    generate random int from 1 to 100 and puts in variable "correct"
    ask username and puts it in "userName"
    greet user by the name

    while keepGoing is true:
        increment turns
        ask user for number and put it in guess
        if guess < correct:
            tell them "Too low"
        else if guess > correct:
            tell them "Too high"
        else:
            tell them "correct"
            set keepGoing to false
        
    evalueate the users preformance
    if turns < 7:
        says "Good job"
    else if turns > 7:
        say "Try better next time"
    else: 
        say "perfect attempt"

# Documentation
https://docs.google.com/document/d/1ws8A83E2h0V3JhjzxS0770-oXaaqeGBWYnvDty5nXjY/edit?usp=sharing