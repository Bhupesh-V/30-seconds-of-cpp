#include <iostream>
#include <algorithm>

bool compare(const char& a, const char& b) {
    // Case insensitive lexicographical check
    return std::tolower(a) < std::tolower(b);
}

int main() {
    std::string s = "ThisComesFirst";
    std::string t = "aaa...stillthiscomessecond";

    // Use lexicographical_compare to check if one string is lexicographically smaller than the other. The check is case sensitive.
    if (std::lexicographical_compare(s.begin(), s.end(), t.begin(), t.end())) {
        std::cout << s << " is lexicographically smaller than " << t << std::endl;
    } else {
        std::cout << s << " is not lexicographically smaller than " << t << std::endl;
    }

    // Use lexicographical_compare to check if one string is smaller than the other using the custom comparator function.
    if (std::lexicographical_compare(s.begin(), s.end(), t.begin(), t.end(), compare)) {
        std::cout << s << " is lexicographically smaller than " << t << " on ignoring case" << std::endl;
    } else {
        std::cout << s << " is not lexicographically smaller than " << t << " on ignoring case" << std::endl;
    }
}