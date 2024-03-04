long andn(long a, long b) { // zba
    long r;
    asm volatile("andn %0, %1, %2" : "=r" (r) : "r" (a), "r" (b));
    return r;
}

int main() {
    return !(andn(0,0) == 0);
}
