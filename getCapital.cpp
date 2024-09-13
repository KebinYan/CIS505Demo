#include <iostream>

int main(int argc, char *argv[]) {
	if (argc < 2) {
    		fprintf(stderr, "Error: No country provided.\n");
    		exit(127);
  	}
	
	std::string country = argv[1];
	if (country == "USA") {
		std::cout << "Washington D.C." << std::endl;
	} else if (country == "UK") {
		std::cout << "London" << std::endl;
	} else if (country == "China") {
		std::cout << "Beijing" << std::endl;
	} else if (country == "France") {
		std::cout << "Paris" << std::endl;
	} else {
		std::cout << "I don't the capital for " << country << std::endl;
	}
}
