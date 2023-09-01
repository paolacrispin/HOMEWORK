int FindOutlier(std::vector<int> arr)
{
    int par = 0;
    int impar = 0;

    for (int num : arr) {
        if (num % 2 == 0) {
            ++par;
        } else {
            ++impar;
        }
    }

    if (par == 1) {
        for (int num : arr) {
            if (num % 2 == 0) {
                return num;
            }
        }
    } else if (impar == 1) {
        for (int num : arr) {
            if (num % 2 != 0) {
                return num;
            }
        }
    }
}