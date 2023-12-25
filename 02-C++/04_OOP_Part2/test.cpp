#include "String.h"
#include <utility>

int main(int argc, const char** argv) {
    String s{"Give Me Love"};
    String S2{s};
    String s3{std::move(s)};
    S2 = "test Run";
    return 0;
}