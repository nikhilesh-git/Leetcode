#include <algorithm>

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int firstfruit=-1,secondfruit=-1;
        int start=0,end=0;
        int fruit1count=0,fruit2count=0;
        int maxi=0;
        while(end<fruits.size()){

            if(fruits[end]==firstfruit ){
                fruit1count++;
                end++;
            }
            else if( fruits[end]==secondfruit){
                fruit2count++;
                end++;
            }
            else if(fruit1count==0){
                firstfruit=fruits[end];
                fruit1count++;
                end++;
            }
            else if(fruit2count==0){
                secondfruit=fruits[end];
                fruit2count++;
                end++;
            }
            else{
                while(fruit1count!=0 && fruit2count!=0){
                    if(fruits[start]==firstfruit){
                        fruit1count--;
                    }
                    else{
                        fruit2count--;
                    }
                    start++;
                }
            }
            
            maxi=max(maxi,(fruit1count+fruit2count));
        }

        return maxi;
    }
};