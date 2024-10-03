class Solution {
public:
    vector<int> plusOne(vector<int>& digits){
    int size = digits.size();
    
    for (int i = size - 1; i >= 0; i--){
        if (digits.at(i) < 9){
            digits.at(i) = digits.at(i) + 1;
            return digits;
        }
        digits.at(i) = 0;
    }

    digits.insert(digits.begin(), 1);
    return digits;
}
};