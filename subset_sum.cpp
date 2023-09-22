 void func(int i, int sum, vector<int> &arr,int N, vector<int> &sumsubset){
      //base case
       if(i ==N){
         sumsubset.push_back(sum);
         return;
  }


 //picking the element
     func(i+1,sum+arr[i],arr,N,sumsubset);
// not picking the element
 func(i+1, sum, arr, N, sumsubset);
  }

    vector<int> subsetSums(vector<int> arr, int N)
    {
       vector<int> sumsubset;
       func(0,0,arr,N,sumsubset);
       sort(sumsubset.begin(),sumsubset.end());
       return sumsubset;
    }
