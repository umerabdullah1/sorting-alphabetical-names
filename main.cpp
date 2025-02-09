/*#include <iostream>
#include <algorithm> // For sort() function
#include <vector>    // For vector

int main() {
    // Create a vector to store the names
    std::vector<std::string> names(5) ;

    // Input names from the user
    std::cout << "Enter the names of 5 people:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter name " << i + 1 << ": ";
        std::getline(std::cin, names[i]);
    }

    // Sort the names alphabetically
    std::sort(names.begin(), names.end());

    // Display the sorted names
    std::cout << "\nThe names in alphabetical order are:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << names[i] << std::endl;
    }

    return 0;
}
*/
// methode 2
#include <iostream>
#include <algorithm>

int main() {
    std::string names[5];  // Array of 5 strings

    // Input names
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter name " << i + 1 << ": ";
        std::getline(std::cin, names[i]);
    }

    // Sort names
     std::sort(names, names + 5);

    // Display sorted names
      for (int i = 0; i < 5; i++) {
         std::cout << names[i] << std::endl;
    }

    return 0;
}
