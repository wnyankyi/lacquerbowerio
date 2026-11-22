#include <string>
#include <vector>

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void reverse_text() {
    std::string text = "signal";
    std::string rev;
    for (std::size_t i = text.size(); i > 0; --i) rev += text[i - 1];
    (void)rev;
}

void text_length() {
    std::string text = "cascade";
    std::size_t n = text.size();
    (void)n;
}

void count_bits() {
    unsigned int n = 0b10110101u;
    int bits = 0;
    while (n != 0) {
        bits += static_cast<int>(n & 1u);
        n >>= 1;
    }
    (void)bits;
}

extern "C" int prime_ripple();
extern "C" void still_meadow();
extern "C" void amber_maple();

int main() {
    count_spaces();
    reverse_text();
    text_length();
    count_bits();
    still_meadow();
    amber_maple();
    return prime_ripple();
}
