#include<iostream>

// Announcement that the In-Game Store is down for maintenance
void store_down()
{
    std::cout << R"(
.-----------------------------------------------------------------------------------.
|                 *8/6/23: The In-Game Store is down for maintenance*               |
| Pre-orders for the Doom at Owl Creek expansion can still be placed on our website.|
|   Please visit https://www.youtube.com/watch?v=3BSv-_tZX0Y for more information.  |
'-----------------------------------------------------------------------------------'
    )" << std::endl;
}

// Dev blog re: delayed implementation of uppercase letters
void dev_blog_1()
{
    std::cout << R"(
Embracing Simplicity: A Developer's Note on Executioner's Oath: Online

Greetings, brave adventurers of Executioner's Oath: Online!

As the lead developer of our beloved game, I come bearing news and insights into our game's future. First and foremost, I extend my heartfelt gratitude to each and every one of you for your unwavering support and dedication to EO:O. Your passion and enthusiasm have made this journey truly remarkable.

Today, I wish to address a topic that has been eagerly discussed amongst our players—the introduction of upper case letters. We understand that this feature has been eagerly anticipated, and many of you have expressed a desire to see it implemented.

Let me assure you that we, too, see the value of this enhancement. Capital letters could bring added depth and flavor to our storytelling and enrich the immersion within the world of Executioner's Oath: Online.

However, as with any software project, we must navigate the challenges of resource allocation and prioritize our efforts. Regrettably, I must acknowledge that our team currently faces limitations in terms of available development resources. As such, we must make cautious decisions about the features we implement and the timeline in which we introduce them.

While the introduction of upper case letters may seem like a straightforward task, it requires meticulous attention to detail and thorough testing to ensure seamless integration without disrupting the existing gameplay experience. We are committed to delivering nothing short of excellence, and this means dedicating sufficient time and effort to guarantee the feature's flawless implementation.

With that said, we want to emphasize that your feedback is invaluable to us. Your continued passion for the game fuels our determination to make Executioner's Oath the best it can be. We are carefully listening to your suggestions and eagerly planning for future updates.

Rest assured, our journey together has only just begun. We are exploring avenues to expand our development team and streamline processes to accelerate the pace of future enhancements. Your unwavering patience and support during this time of growth are truly appreciated.

Thank you for being an integral part of our community and sharing this epic adventure with us.

May you keep your head when all around you are losing theirs!

Sincerely,

Eric Graham
Lead Developer
August 5, 2023
    )" << std::endl;
}

// Dev blog re: Vowel Packs available in In-Game Store
void dev_blog_2()
{
    std::cout << R"(
Unleash the Power of Vowels: Introducing Vowel Packs to the In-Game Store!

Greetings, valiant players of Executioner's Oath: Online!

Today, I am thrilled to share some exciting news that will add a touch of magic to your adventures within our beloved game. It is my pleasure, as the lead developer of this ever-expanding world, to introduce a new and enchanting feature to the In-Game Store: Vowel Packs!

What are Vowel Packs, you might ask? Well, prepare to be amazed! These packs are specially curated collections of powerful vowels that can enhance your interactions, unlock unique quests, and enrich the immersive experience within Executioner's Oath.

Each Vowel Pack contains a combination of rare and mystic vowels, each possessing distinct attributes and benefits. With these packs, you will unlock the power to unravel ancient riddles, communicate with enigmatic beings, and discover hidden secrets scattered throughout our world.

Now, we understand that some of you might have questions about how Vowel Packs will be made available. Rest assured, we have carefully designed our approach to ensure fairness and inclusivity for all players. Vowel Packs will be obtainable through in-game quests, achievements, and rare drops from formidable foes. For those seeking a quicker path to mastering the power of vowels, they will also be accessible through the In-Game Store.

As developers, we are always dedicated to striking a balance between enriching gameplay and maintaining a fair gaming environment. The introduction of Vowel Packs is no exception, and we are eager to hear your feedback to further refine and expand this exciting feature.

We hope that the addition of Vowel Packs will bring forth new challenges and triumphs for you, dear adventurers. Your unyielding support has been the backbone of Executioner's Oath, and we are committed to ensuring that your adventures in our world continue to be an unforgettable and magical experience.

Thank you for joining us on this extraordinary journey. May the vowels guide you to glory!

Sincerely,

Eric Graham
Lead Developer
August 6, 2023
    )" << std::endl;
}

// Credits
void credits()
{
    std::cout << R"(
.-----------------------------------------------------------------------------------.
| * Thanks to Professor David Kirk for graciously licensing his Hangman Game        |
|   Engine for this project, and for creating such a great class!                   |
| * Thanks to everyone in COSC 1436-83852 (especially on the Discord)               |
|   for all of the fun and support!                                                 |
| * Thanks to https://stackoverflow.com/a/37766035 for the raw string literal       |
|   solution, which saved a lot of typing on the ASCII art                          |
| * ASCII banners were created with https://patorjk.com/software/taag/              |
| * ASCII art generated with https://www.ascii-art-generator.org/                   |
| * Credit to Frank Frazetta for the original defeat art (The Executioner)          |
| * Credit to https://www.svgviewer.dev/s/41772/broken-axe for the original         |
|   victory art                                                                     |
| * Credit to Marcin Glinski for the in-game store ASCII art                        |
|   https://www.asciiart.eu/weapons/axes                                            |
| * Credit to ChatGPT for doing most of the writing on the Dev Blogs                |
| * Everything else was created by me, Eric Graham!                                 |
'-----------------------------------------------------------------------------------'
    )" << std::endl;
}