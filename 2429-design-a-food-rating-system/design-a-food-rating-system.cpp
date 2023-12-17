class FoodRatings {
    unordered_map<string, set<pair<int, string>>> cuisineMap; 
    unordered_map<string, pair<int, string>> foodMap; 
public:
    
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        
        
        for(int i=0; i<n; i++) {
            cuisineMap[cuisines[i]].insert({-ratings[i], foods[i]});
            foodMap[foods[i]] = {-ratings[i], cuisines[i]}; 
        }
    }
    
    void changeRating(string food, int newRating) {
        auto [currentRating, cuisine] = foodMap[food];
        
        foodMap[food] = {-newRating, cuisine}; 
            
        
        cuisineMap[cuisine].erase({currentRating, food}); 
        cuisineMap[cuisine].insert({-newRating, food}); 
    }
    
    string highestRated(string cuisine) {
        
        return cuisineMap[cuisine].begin()->second;
    }
};