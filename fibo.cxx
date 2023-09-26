class Fibo {
    public:
    int fibo_recur(int n) {
        int out; //scope
        if(n<=1) {
            out=n;
        } else { 
            out = fibo_recur(n-1) + fibo_recur(n-2);
        } 
        return out;
    }
    int fibo_buf(int n) {
        int depth=2; //should be an arg
        std::vector<int> v0(depth);
        v0[1] = 1;
        int idx = n; //scope
        for(int i=2; i<=n; ++i) {
            //idx = i % depth; 
            //for(int j=0; j<depth; ++j) if(j!=idx) v0[idx]+=v0[j]; 
            v0[idx = i % depth] = std::accumulate(v0.begin(),v0.end(),0); 
        }
        return v0[idx];
    }
};
//recursion
//grow buffer -> shift buffer -> point at a buffer

int main() {
    //std::cout << "Hello World!\n";
    std::vector<int> n0={0,1,2,3,4,5,6,7,8,9,10};
    Fibo f0;
    for(auto i : n0) {
        std::cout << "fibo_recur("<<i<<")=" << f0.fibo_recur(i) << std::endl;
        std::cout << "fibo_buf("<<i<<")=" << f0.fibo_buf(i) << std::endl;
    }
}
