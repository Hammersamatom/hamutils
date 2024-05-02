#include <unordered_map>
#include <fmt/core.h>

std::unordered_map<std::string, uint8_t> applets = {
    {"ls", 0}
};

int main(int argc, char* argv[])
{
    // No argument? Exit.
    if (argc < 1) return -1;

    switch (applets[argv[2]])
    {
    case 0:
        fmt::print("applet: ls\n");
        break;

    default:
        break;
    }
}
