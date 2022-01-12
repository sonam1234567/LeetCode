//<Summary>
//Brute Force method.

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int Length = prices.size();
//         if(Length < 2){
//             cout<<Length;
//             return 0;
//         }
//         int result;
//         vector<int>Profits;
//         for(int i = 0; i< Length; i++){
//             for (int j = i + 1; j < Length; j++){
//                 cout << prices[j] <<setw(20) << prices[i] << endl;
//                 result = prices[j] - prices[i];//Buy on day 2 and sell on day 1.
//                 Profits.emplace_back(result);
//             }
//         }
//         sort(Profits.begin(),Profits.end());
//         for(int k=0; k < Profits.size(); k++)
//         std::cout << Profits.at(k) << endl;
//         if(Profits[Profits.size() -1] > 0){
//             return Profits[Profits.size() -1];
//         }
//         else{
//             return 0;
//         }
//     }
// };


