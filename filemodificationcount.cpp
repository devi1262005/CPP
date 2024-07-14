#include <iostream>
#include <filesystem>
#include <ctime>

namespace fs = std::filesystem;

int main() {
    std::string filePath = "example.txt";  // Change this to your file path

    if (fs::exists(filePath)) {
        // Get the last modification time
        auto lastModificationTime = fs::last_write_time(filePath);

        // Convert the last modification time to a readable format
        std::time_t modifiedTime = std::chrono::system_clock::to_time_t(lastModificationTime);

        // Print the last modification time
        std::cout << "Last modified: " << std::ctime(&modifiedTime) << std::endl;
    } else {
        std::cout << "File not found." << std::endl;
    }

    return 0;
}
