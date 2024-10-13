#include <iostream>
#include <vector>
#include <string>

// Function to print FizzBuzz and store the results in a vector
std::vector<std::string> fizzBuzz() {
    std::vector<std::string> result;
    
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(std::to_string(i));
        }
    }
    
    return result;
}

// Function to reverse a vector of integers
std::vector<int> reverseVector(const std::vector<int>& input) {
    std::vector<int> reversed;
    reversed.reserve(input.size()); 

    for (std::vector<int>::const_reverse_iterator rit = input.rbegin(); rit != input.rend(); ++rit) {
        reversed.push_back(*rit);
    }
    
    return reversed;
}

int main() {
    std::vector<std::string> fizzBuzzResult = fizzBuzz();

    // Print Hasil FizzBuzz 
    for (std::vector<std::string>::const_iterator it = fizzBuzzResult.begin(); it != fizzBuzzResult.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // Reverse vector 
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> reversedNumbers = reverseVector(numbers);

    // Print Hasil reversed vector
    std::cout << "Reversed vector: ";
    for (std::vector<int>::const_iterator it = reversedNumbers.begin(); it != reversedNumbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
