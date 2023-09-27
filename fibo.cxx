class Fib {
    public:
    int rec(int n) {
       return n<2 ? n : rec(n-1) + rec(n-2);
    }
    int buf(int n) {
        int depth=2; //should be an arg
        std::vector<int> buf(depth);
        buf[1]=1;
        int idx=n; //scope
        for(int i=2; i<=n; ++i) buf[idx=i%depth]=std::accumulate(buf.begin(),buf.end(),0);
        return buf[idx];
    }
}; 

int main() {
    Fib fib;
    for(int i=0; i<11; ++i) {
        std::cout<<"fib.rec("<<i<<")="<<fib.rec(i)<<std::endl;
        std::cout<<"fib.buf("<<i<<")="<<fib.buf(i)<<std::endl;
    }
}
