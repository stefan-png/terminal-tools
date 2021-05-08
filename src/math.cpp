#include <iostream>
#include <cstring>  //strcmp
#include <vector>   //vector of ints

int add(std::vector<int> numbers) {
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    return sum;
}
int subtract(std::vector<int> numbers) {
    int difference = numbers[0];
    for(int i = 1; i < numbers.size(); i++) {
        difference -= numbers[i];
    }
    return difference;
}
int multiply(std::vector<int> numbers) {
    int product = 1;
    for(int i = 0; i < numbers.size(); i++) {
        product *= numbers[i];
    }
    return product;
}
int divide(std::vector<int> numbers) {
    int quotient = numbers[0];
    for(int i = 1; i < numbers.size(); i++) {
        quotient /= numbers[i];
    }
    return quotient;
}

int main(int argc, const char* argv[]) {
    int (*function_ptr) (std::vector<int>);    //function which will be called

    for(int i = 0; i < argc; i++){
        // std::cout << "arg: " << argv[i] << std::endl;
        if(strcmp(argv[i], "-help") == 0) {
            std::cout << "Specify any amount of integers as arguments, and one operation argument. If more than one operation is specified, the first one will be chosen.\neg. math -add 5 4 20\n\n";
            std::cout << "Operation Arguments:\n\n";
            std::cout << "-add\tadds all the numbers together.\n";
            std::cout << "-sub\tsubtracts all the numbers from first number.\n";
            std::cout << "-mult\tmultiplies all the numbers together.\n";
            std::cout << "-div\tdivides all the numbers from first number.\n";
            std::cout << std::endl;
            return 0;
        }
        if(strcmp(argv[i], "-add") == 0) {
            function_ptr = &add;
            goto found;
        }
        if(strcmp(argv[i], "-sub") == 0) {
            function_ptr = &subtract;
            goto found;
        }
        if(strcmp(argv[i], "-mult") == 0) {
            function_ptr = &multiply;
            goto found;
        }
        if(strcmp(argv[i], "-div") == 0) {
            function_ptr = &divide;
            goto found;
        }
    }
    std::cout << "use argument -help for info" << std::endl;
    return 0;
    
found:

    std::vector<int> numbers;
    for(int i = 0; i < argc-1; i++) { //fill numbers array, ommiting the first arg(bin/App)
        if(strcmp(argv[i+1], "-add") == 0 ||
            strcmp(argv[i+1], "-sub") == 0 || 
            strcmp(argv[i+1], "-mult") == 0 ||
            strcmp(argv[i+1], "-div") == 0) {
            continue;
        }
        numbers.push_back(std::stoi(argv[i+1]));
    }

    // for(int i = 0; i < numbers.size(); i++) {
    //     std::cout << " " << numbers[i];
    // }
    // std::cout << std::endl;

    std::cout << function_ptr(numbers) << std::endl;
    return 0;
}
