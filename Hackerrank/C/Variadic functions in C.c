

// Function to calculate sum of variadic arguments
int sum(int count, ...) {
    va_list args;
    va_start(args, count);

    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}

// Function to find minimum of variadic arguments
int min(int count, ...) {
    va_list args;
    va_start(args, count);

    int minVal = va_arg(args, int);
    for (int i = 1; i < count; ++i) {
        int val = va_arg(args, int);
        if (val < minVal) {
            minVal = val;
        }
    }

    va_end(args);
    return minVal;
}

// Function to find maximum of variadic arguments
int max(int count, ...) {
    va_list args;
    va_start(args, count);

    int maxVal = va_arg(args, int);
    for (int i = 1; i < count; ++i) {
        int val = va_arg(args, int);
        if (val > maxVal) {
            maxVal = val;
        }
    }

    va_end(args);
    return maxVal;
}

