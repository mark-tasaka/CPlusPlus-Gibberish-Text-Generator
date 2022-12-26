# CPlusPlus-Gibberish-Text-Generator
Designed in C++, the Gibberish Text Generator is designed to perform a similar function as a 'lorem ipsum' random text generator.  When the program starts, the users will be asked to input the number of paragraphs they would like to generate.  The program will generate a number of paragraphs based on what the user entered.  

The Gibberish Text Generator is designed with the following rules.

1. Each sentence contains between 5 to 15 words, and each word is between 4 to 12 characters.  

2. Every paragraph contains 4 to 9 sentences.  

3. The words are in lower case, with the first word in each paragraph starting with an upper case character.

4. 'a' and 'an' will be randomly added into each sentence, with 'an' being assigned to words starting with a vowel.

   a. There will be a 80% probability that a sentence will have 'a' or 'an'.
   
   b. There is a 20% probability that a sentence wills start will 'a' or 'an'.

5. Commas (') and semi-colons (;) will be randomly added to each sentence.  

     a. These special characters will be added anywhere between the third word in the sentence, and the start of the last three words in the sentence.
     
     b. All sentences greater than 5 words will have either a comma (75% probability) or a semi-colon (25% probability).

6. Sentences will end with a period.

----------------

Update 1.01: 2022-12-25

Updated files to add more functionality.


Initial commit: 2022-12-24

The intial commit for the Giberish Text Generator.
