#include "CodeHeader.h"

string GuessTheLanguageLogic::chosenLanguage;
int GuessTheLanguageLogic::rightAnswer;
int GuessTheLanguageLogic::healthPoints = 3; // default HP number
int GuessTheLanguageLogic::scorePoints = 0;

// secondary functoin to randomDistribution, to check if all languages are uniq
bool GuessTheLanguageLogic::vectorPairCheck(vector<int> vec, int position)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[position] == vec[i] && position != i)
        {
            return 1;
        }
    }
    return 0;
}

// Returns a vector with coutry names based on map
vector<int> GuessTheLanguageLogic::randomDistribution()
{
    vector<int> languageDistributionVector(NUMB_OF_BUTTONS, 0);

    random_device rd;
    mt19937 gen(rd());

    // Define a distribution range for the random numbers
    uniform_int_distribution<int> dis(1, NUMB_OF_LANGUAGES);

    // Generate a random number
    for (int i = 0; i < NUMB_OF_BUTTONS; i++)
    {
        languageDistributionVector[i] = dis(gen);
        if (vectorPairCheck(languageDistributionVector, i))
        {
            i--;
        }
    }
    return languageDistributionVector;
}
// Functoin choose the right answer based on vector with coutrynames
void GuessTheLanguageLogic::rigthAnwerGeneration(vector<int> distribution)
{
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> dis(0, NUMB_OF_BUTTONS-1);
    rightAnswer = distribution[dis(gen)];
}

// checks if an user answer is right, returns 1 if true
bool GuessTheLanguageLogic::rightAnswerCheck()
{
    for (int i = 0; i <= NUMB_OF_LANGUAGES; i++)
    {
        if (chosenLanguage == languageIdPair[i] && i == rightAnswer)
        {
            return 1;
        }
    }
    return 0;
}
// function returns a path to audiofile based on rightAnswer
string GuessTheLanguageLogic::rightAnswerLanguageAudioPath()
{
    switch (rightAnswer)
    {
    case 1:
        return "Languages\\English.wav";
        break;
    case 2:
        return "Languages\\French.wav";
        break;
    case 3:
        return "Languages\\German.wav";
        break;
    case 4:
        return "Languages\\Russian.wav";
        break;
    case 5:
        return "Languages\\Ukrainian.wav";
        break;
    case 6:
        return "Languages\\Danish.wav";
        break;
    case 7:
        return "Languages\\Slovak.wav";
        break;
    case 8:
        return "Languages\\Polish.wav";
        break;
    case 9:
        return "Languages\\Hispanic.wav";
        break;
    case 10:
        return "Languages\\Italian.wav";
        break;
    default:
        break;
    }
    return "-1";
}
// Returns 1 if HP == 0
bool GuessTheLanguageLogic::healthCheck()
{
    return GuessTheLanguageLogic::healthPoints == 0;
}