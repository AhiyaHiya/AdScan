#include "ExampleUsage.hpp"

#include <filesystem>
#include <format>
#include <iostream>
#include <string>

namespace ExampleUsage
{
    void PrintExampleUsage()
    {
        const auto inputFile = std::filesystem::path{"some/full/file/path.mp4"}.make_preferred();
        const auto outputFolder = std::filesystem::path{"some/full/folder_path"}.make_preferred();

        const auto message = std::format("AdScan.exe --input_file {} --output_folder {}",
                                inputFile.string(),
                                outputFolder.string());

        std::cout << "Example usage:\n";
        std::cout << message << "\n";
    }
}