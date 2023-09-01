#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> result = input;
    int numZeros = 0;

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 0) {
            ++numZeros;
        } else {
            result[i - numZeros] = input[i];
        }
    }

    for (int i = result.size() - numZeros; i < result.size(); ++i) {
        result[i] = 0;
    }

    return result;
}