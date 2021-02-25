#include <iostream>
#include <string>

class Proofnik {
    public:
        std::string name;
        int favoriteNumber;

    Proofnik(std::string input){
        
    }

}; 

std::string inverse(std::string input) {
    int len = input.length();
    std::string reverse = "";
    for (int i = len - 1; i >= 0; i--) {
        reverse = reverse + input[i];
    }
    return reverse;

}

void frame_print(std::string arr[]) {
    int max = -1;
    int len = *(&arr + 1) - arr - 1;
    // I believe this -1 is because you are passing a pointer to arr in the function.
    for (int i = 0; i < len; i++) {
        int strLen = arr[i].length();
        // I don't quite understand why, but I need to cast arr[i].length() to an int;
        if (strLen > max) {
            max = strLen;
        }
    }
    std::string horizontalBoarder(max+2,'*');
    std::cout << horizontalBoarder << "\n";
    for (int i = 0; i < len; i++) {
        std::cout << "*" + arr[i];
        std::string spaces(max-arr[i].length(), ' ');
        std::cout << spaces + "*" << "\n";
    }
    std::cout << horizontalBoarder << "\n";
}

int main() {
    std::cout << "Hello Word" << "\n";
    std::string result =  inverse("Nice Dog!");
    std::cout << result << "\n";
    std::string arr[6] = {"Hello", "Word", "In", "A", "Frame", "Yeet"};
    frame_print(arr);
}