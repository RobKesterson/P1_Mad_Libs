#include <iostream>
#include <string>

int main() {
	std::cout << "CSCI 151 Mad Libs";

	std::string answers[10];

	std::cout << "Provide a name for a person: ";
	std::string input_word;
	std::cin >> input_word;
	answers[0] = input_word;

	std::cout << "Provide a name for a second person: ";
	std::cin >> input_word;
	answers[1] = input_word;

	std::cout << "Provide a place: ";
	std::cin >> input_word;
	answers[2] = input_word;

	std::cout << "Provide a beverage type (e.g. coffee, tea, etc.) : ";
	std::cin >> input_word;
	answers[3] = input_word;

	std::cout << "Provide a holiday: ";
	std::cin >> input_word;
	answers[4] = input_word;

	std::cout << "Name a skill (e.g. sailing, basket weaving, etc.): ";
	std::cin >> input_word;
	answers[5] = input_word;

	std::cout << "Name a type of pet (e.g. cat, dog, iguana, etc.): ";
	std::cin >> input_word;
	answers[6] = input_word;

	std::cout << "Choose a time of day: ";
	std::cin >> input_word;
	answers[7] = input_word;

	std::cout << "Choose a weapon: ";
	std::cin >> input_word;
	answers[8] = input_word;

	std::cout << "Name a type of treasure (e.g. diamonds, gold, silk, etc.: ";
	std::cin >> input_word;
	answers[9] = input_word;

	//std::cout << "This is the story of " + answers[0] + " and " + answers[1] + ".";
	std::cout << "One day while " + answers[0] + " and " + answers[1] + " were sitting at " + answers[2] + " drinking " + answers[3] + " they decided to stage a robbery of the great " + answers[4] + " festival.";
	std::cout << answers[0] + " had considerable skill with " + answers[5] + " and " + answers[1] + " had a pet " + answers[6] + ".";
	std::cout << "They struck at " + answers[7] + " leaving only a lone sentinel armed with a " + answers[8] + " to be dealth with. \n";
	std::cout << "Finally " + answers[0] + " and " + answers[1] + " obtained the " + answers[9] + " they were after and rode off into the mountains.";
	std::cout << "fin";
}