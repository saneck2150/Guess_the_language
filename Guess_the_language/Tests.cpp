#include "CodeHeader.h"
#include <cassert>

using namespace std;

void Tests::vectorPairCheckTest()
{
	assert(GuessTheLanguageLogic::vectorPairCheck( { 1,2,3,4,4,5 },2 ) == 0);
    assert(GuessTheLanguageLogic::vectorPairCheck({ 1,2,3,4,4,5 }, 4) == 1);
	assert(GuessTheLanguageLogic::vectorPairCheck({}, 100) == 0);
}

void Tests::rightAnswerCheckTest()
{
	GuessTheLanguageLogic::chosenLanguage = "English";
	GuessTheLanguageLogic::rightAnswer = 1;
	assert(GuessTheLanguageLogic::rightAnswerCheck() == 1);

	GuessTheLanguageLogic::rightAnswer = 3;
	assert(GuessTheLanguageLogic::rightAnswerCheck() == 0);
}

void Tests::rightAnswerLanguageAudioPathTest()
{
	GuessTheLanguageLogic::rightAnswer = 1;
	assert(GuessTheLanguageLogic::rightAnswerLanguageAudioPath() == "Languages\\English.wav");
	GuessTheLanguageLogic::rightAnswer = 5;
	assert(GuessTheLanguageLogic::rightAnswerLanguageAudioPath() == "Languages\\Ukrainian.wav");
}

void Tests::healthCheckTest()
{
	GuessTheLanguageLogic::healthPoints = 0;
	assert(GuessTheLanguageLogic::healthCheck() == 1);
	GuessTheLanguageLogic::healthPoints = 2;
	assert(GuessTheLanguageLogic::healthCheck() == 0);
}


void Tests::testCall()
{
	Tests test;
	test.healthCheckTest();
	test.rightAnswerCheckTest();
	test.rightAnswerLanguageAudioPathTest();
	test.vectorPairCheckTest();
}