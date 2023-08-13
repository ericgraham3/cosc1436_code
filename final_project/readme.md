# COSC Homework 7 / Final Project: Hangman Game

Description of the assignment can be found [on the course website](http://mypccourse.com/cosc1436/homework/hangman.html) and there is also a [YouTube video](https://youtu.be/utAI-p5pKZM) that was instrumental.

## My Approach

I used the structure of the main loop from the video almost word-for-word, though I changed some var names. My primary customizations were related to the content and style of the game. I developed the theme of a "serious" game based on hangman (Executioner's Oath) which I built out into a silly perspective on the consumer experience of contemporary online gaming. I repurposed a top-level menu from a previous homework assignment so I could have ancilliary elements like a (fake) online store and (fake) dev blogs (mostly written by ChatGPT, with some tuning). I found some cool artwork that fit the theme and ran it through an ASCII art genmerator. I also used ASCII banner generators and one piece of original art (see in-game credits for details). 

My favorite elements of the game from a programming perspective were the progressive ASCII art for wrong guesses (I was proud of myself for the way I coded that) and the decision to store the ASCII art and larger, non-game text content as functions in separate header files. I'm just starting to learn the basics of OOP. I know enough to know that this isn't anywhere close to OOP. But I really enjoyed the process of trying to make my code more "modular," and it feels like a small step in the right direction as opposed to the purely procedural approach I have taken in my earliest assignments.

## Roadmap?

If I do any more work on this it would be strictly for my own practice, and there are a few things I would like to do (mostly for purposes of learning a bit more C++):

* "Sanitize" CIN values to handle strings entered as menu choices (currently causes a crash) and prohibit multi-letter guesses
* Enable case-insensitive interpretation of CIN for guesses so we can capitalize the secret phrases properly
* Add numerals as possible entires so we can have them in secret phrases (e.g., Battlefield 1942)
* If possible, store menus as functions in a separate header, or otherwise simplify that feature
* Possibly change sub-menu to just "press any key" to return to main menu  
* Increase the pool of possible secret phrases and store in a separate file or possibly a SQLite database
* Track high scores, streaks, game history, etc. in a separate file or DB 
* Fix formatting on dev blogs so it doesn't take up the whole screen
* Polish up the text of the captions for wrong guesses (could be a little cooler)