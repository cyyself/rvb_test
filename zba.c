long add_uw(long a, long b) { // zba
    long r;
    asm volatile("add.uw %0, %1, %2" : "=r" (r) : "r" (a), "r" (b));
    return r;
}

int main() {
    return !(add_uw(1, 2) == 3);
}
