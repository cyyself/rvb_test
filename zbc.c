long clmulr(long a, long b) { // zba
    long r;
    asm volatile("clmulr %0, %1, %2" : "=r" (r) : "r" (a), "r" (b));
    return r;
}

int main() {
    return !(clmulr(0, 0) == 0);
}
