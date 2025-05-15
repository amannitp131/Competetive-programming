void solve() {
   int n;vector<int> arr(n,0);vector<int> vec(n);
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>vec[i];
   }
   for(int i=0;i<n;i++){
    for(int i=vec[i];i<=n;i++){
        arr[i]++;
    }

   }
   sort(arr.begin(),arr.end());
   cout<<arr[n-1]<<endl;
   
}
