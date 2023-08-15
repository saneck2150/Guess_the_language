#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <random>
#include <string>
#include <msclr/marshal_cppstd.h>

#define NUMB_OF_LANGUAGES 10 // Number of included laguages
#define NUMB_OF_BUTTONS 4
#define POINS_GAIN 5 // Point gain after the correct answer

using namespace std;
using namespace msclr::interop;

/*
Step by step instructions
1) random Distribution(). Generates a vector with four unique country names selected from the languageIdPair map.
The VectorPairCheck() function checks these names for uniqueness. And returns a vector with these names

2) rigthAnwerGeneration(). Selects a random country from the vector generated by random Distribution()
and makes that name the correct answer by writing its value to rightAnswer

3)rightAnswerLanguageAudioPath(). This is a function that returns a link to an audio file based on rightAnswer

4) After the user selects an answer, the rightAnswerCheck() function checks this answer for correctness.
Returns 1 if the answer is correct and vice versa

5)healthCheck(). the function checks the user's health and if health == 0 returns 1
*/

// In future there will be more functionalities. For example, more audio files for each language, registration panel
// and the panell of hiest scores

// Heare are included all back-end usefull functions
class GuessTheLanguageLogic
{
public:
	static string chosenLanguage; // The answer user chose
	static int rightAnswer; // randomly generated right answer
	static int healthPoints; // Number of health poins, max = 3 min = 0
	static int scorePoints; // The score of a player



	map <int, string>languageIdPair = {// Map with pair of languages and its ids. ids - for easy search between files
		{1,"English"},
		{2,"French"},
		{3,"German"},
		{4,"Russian"},
		{5,"Ukrainian"},
		{6,"Danish"},
		{7,"Slovak"},
		{8,"Polish"},
		{9,"Hispanic"},
		{10,"Italian"}
	};
	// The ids are used because we could have more than one audio file for each language 


	 vector<int> randomDistribution(); // Returns the vector of randomly distributed languages
	 bool vectorPairCheck(vector<int> vec, int position); // Checks uniqness of all numbers in random distribution
	 void rigthAnwerGeneration(vector<int> distribution); // Choose the rigth anwer based on randomDistribution vector
	 bool rightAnswerCheck(); // returns 1 if the users answer is right 
	 string rightAnswerLanguageAudioPath();// function return the path to file with audio 
	 static bool healthCheck();// checks statement:  user HP == 0;
};

class Tests : public GuessTheLanguageLogic
{
public:
	void vectorPairCheckTest();
	void rightAnswerCheckTest();
	void rightAnswerLanguageAudioPathTest();
	void healthCheckTest();

	static void testCall();
};

