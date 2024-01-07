#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define NUM_THREADS 4

int main(int argc, char* argv[])
{
    #pragma omp parallel num_threads(NUM_THREADS)
    {
        printf("[Thread %d%d] Hello OpenMP!\n"
        , omp_get_thread_num(), omp_get_num_threads());
    }
}