#include <string>

std::string DNAStrand(const std::string& dna){
    std::string complement;
    for (char proof : dna) {
        if (proof == 'A') {
            complement += 'T';
        } else if (proof == 'T') {
            complement += 'A';
        } else if (proof == 'C') {
            complement += 'G';
        } else if (proof == 'G') {
            complement += 'C';
        }
    }
    return complement;
}
