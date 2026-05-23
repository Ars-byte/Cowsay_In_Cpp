#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string msg;
    if (argc > 1)
        for (int i = 1; i < argc; i++)
            msg += (i > 1 ? " " : "") + std::string(argv[i]);
    else
        std::getline(std::cin, msg);
    int n = msg.size();
    std::cout << " " << std::string(n + 2, '-') << "\n";
    std::cout << "< " << msg << " >\n";
    std::cout << " " << std::string(n + 2, '-') << "\n";
    std::cout << "        \\   ^__^\n";
    std::cout << "         \\  (oo)\\_______\n";
    std::cout << "            (__)\\       )\\/\\\n";
    std::cout << "                ||----w |\n";
    std::cout << "                ||     ||\n";
}