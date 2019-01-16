int main() {
    int n;
    int m;
    cin >> n >> m;
    vector <long> c(m);
    for (int i=0;i<m;i++) cin >> c[i];

    vector <long> numways(n+1); 
    numways[0]=1; 
    
    
    for (int i=0;i<m;i++) {
        for (int j=c[i];j<=n;j++) {
           
            numways[j]=numways[j]+ numways[j-c[i]]; 
        }
    }    

    cout << numways[n];    
    return 0;
}






n, m = map(int,input().split())
coins = list(map(int,input().split()))
dp = [1]+[0]*n
for i in range(m): 
    for j in range(coins[i], n+1): dp[j]+=dp[j-coins[i]]
print(dp[-1])

