#include <iostream> 
#include <cmath> 
#include <set> 
#include <map> 
#include <vector> 


using namespace std; 


int searchInsert(vector<int>& nums, int target) {
       
        //probs binary search
        int low = 0; 
        int high = nums.size(); 
        int mid;
        
        if(target <= nums[0]) return 0; 
        if(target >= nums[nums.size() - 1]) return nums.size(); 
        
        while(low <= high){ 
            mid = (low + high) / 2; 
            if(nums[mid] == target){
                 return mid; 
            }
            else if (nums[mid] < target){ 
                low = mid + 1; 
            }
            else{
                high = mid - 1; 
            }
        }
        if(nums[mid] > target) return mid; 
        else return mid + 1;  
    }

int main(int argc, char* argv[]){

    vector<int> t = {1, 3, 5}; 

    int r = searchInsert(t, 4);

    cout << (2+3) / 2 << endl;  

    cout << r << endl; 



    return 0; 
}

