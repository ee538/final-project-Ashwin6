#include <iostream>
#include "src/lib/trojanmap.h"
#include<queue>
#include<algorithm>
#include<limits>

using namespace std;




// int main()
// {
//   TrojanMap m;
//   // m.CreateGraphFromCSVFile();
//   // // m.PrintMenu();
//   // std::vector<std::string> input{"1862312636", "67666219", "7424270441","4015405548", "4015203110", "6807439002"};
//   // auto result = m.TravellingTrojan_2opt(input);
//   // std::cout<<"done"<<"\n";

// int map[5][5] = { { 0, 2, INT16_MAX, 12, 5 }, 
//                                         { 2, 0, 4, 8, INT16_MAX }, 
//                                         { INT16_MAX, 4, 0, 3, 3 }, 
//                                         { 12, 8, 3, 0, 10 }, 
//                                         { 5, INT16_MAX, 3, 10, 0 } }; 
//   m.TSPUtil(map);


//   return 0;
// }



int main() 
{ 
    TrojanMap m;
    m.CreateGraphFromCSVFile();
    m.PrintMenu();

//     TrojanMap m;
//     m.CreateGraphFromCSVFile();
//   std::vector<std::string> input{"123120189", "4011837229", "4011837224", "2514542032", "2514541020", "1931345270", "4015477529", "214470792", "63068532", "6807909279"}; // Input location ids 
//   auto result = m.TravellingTrojan_GeneticAlgo(input);

//   for(int i = 0; i < result.second[0].size(); i++)
//   {
//       std::cout<<result.second[0][i]<<" ";
//   }
//   std::cout<<"\n";

//     std::vector<std::string> input{"123120189", "4011837229", "4011837224", "2514542032", "2514541020", "1931345270", "4015477529", "214470792", "63068532", "6807909279"};
//   auto result = m.TravellingTrojan_2opt(input);
//     return 0;
} 


