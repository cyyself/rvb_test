long bclr(long a, long b) { // zba
    long r;
    asm volatile("bclr %0, %1, %2" : "=r" (r) : "r" (a), "r" (b));
    return r;
}

int main() {
    return !(bclr(0, 0) == 0);
}
