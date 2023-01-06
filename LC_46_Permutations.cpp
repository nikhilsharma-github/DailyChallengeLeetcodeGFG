class Solution {
  public: 
  void permutations(vector < int > & nums, vector < int > & currperm,
    vector < bool >  check,vector < vector < int >> & ans) {

    //If currperm size==nums size, means we have the same length permutation as original, so add it to the answer 2d array and return back.
    if (currperm.size() == nums.size()) {
      ans.push_back(currperm);
      return;
    }

    //We are checking for every character by traversing it, that:
    for (int i = 0; i < nums.size(); i++) {
      //Is this already visited or not, if visited, skip, else move in the block.
      if (check[i] == false) {
        //Mark this ith index as true as it denotes nums[i] value, index to index mapping.
        check[i] = true;
        //Adding the current nums[i] value to our currperm vector as it is correct candidate for sure as we are visiting it first time.
        currperm.push_back(nums[i]);

        //Calling the function again with new currperm value and leftover non visited values.
        permutations(nums, currperm, check, ans);
        //After the call ends, mark the corresponding value as nonvisited and remove it also from the currperm so that next permutations can take place easily.
        check[i] = false;
        currperm.pop_back();
      }
    }

  }
  vector < vector < int >> permute(vector < int > & nums) {
    //This 2d vector is i am using to store my final answer.
    vector < vector < int >> ans;
    //This 1d vector is used to find our correct current permutation
    // which is supposed to be inserted in ans vector in the base case.
    vector < int > currperm;

    //This boolean array is checking that whether we have used the current value 
    //from the given input or not, so mark it true/false accordingly,
    // setting everything as false in initial.
    vector < bool > check(nums.size(), false);

    //Our main Function to find permutations.
    permutations(nums, currperm, check, ans);
    //Return ans at the end.
    return ans;
  }
};