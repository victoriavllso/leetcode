class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> frequencia;

        for (int num:nums) {
            frequencia[num]++;
    }
    // ordenação utilizando função lamda
    sort(nums.begin(), nums.end(), [&](int x, int y) {
        if (frequencia[x] == frequencia[y])
            return x>y; // se as frequencias forem iguais, retorna a ordenação decrescente
        return frequencia[x] < frequencia[y]; // se a frequencia for diferente, retorna o elemento com maior frequencia
    } ); //fecha a função lambda
    return nums;

    }
};