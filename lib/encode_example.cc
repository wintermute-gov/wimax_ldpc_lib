#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <chrono>
#include <inttypes.h>

#include "ldpc_encoder.h"

#define NUM_THREADS 4
int main()
{
    
    FILE *f;
    FILE *fw;
    
    uint64_t start_time;
    uint64_t elapsed_time;
    uint64_t time_sum = 0;
    double avg_time;
    uint64_t max_time = 0;
    uint64_t min_time = 10000000000;
    
    uint8_t* file_buffer = (uint8_t*) malloc(4096*(576/2));
    
    
    f = fopen("../example_data/576_infowords.bin", "rb");
    
    if(f)
    {
        int n = fread(file_buffer, 1, 4096*(576/2), f);
        printf("nread: %d\n", n);
    }
    
    fclose(f);
    
    ldpc_encoder encoder = ldpc_encoder(HALFRATE, 24, NUM_THREADS);
    
    uint8_t temp_codeword[576];
    
    fw = fopen("../example_data/576_codewords.bin", "wb");
    
    
    for (unsigned int i = 0; i < 4096; i++)
    {
        
        start_time = encoder.get_nanoseconds();
        encoder.encode_data(file_buffer + i * 288, temp_codeword);
        elapsed_time = encoder.get_nanoseconds() - start_time;
        time_sum += elapsed_time;
        printf("Rate (Mbits/Sec): %f\n", (576.0 * 1000.0) / (elapsed_time) ); 
        
        if(elapsed_time > max_time)
            max_time = elapsed_time;
        
        if(elapsed_time < min_time)
            min_time = elapsed_time;
        
        fwrite(temp_codeword, 1, 576, fw);
    }
    avg_time = time_sum / 4096.0;
    printf("Average Rate (Mbits/Sec): %f\n", (576.0 * 1000.0) / (avg_time) ); 
    printf("Fastest Time (Mbits/Sec): %f\n", (576.0 * 1000.0) / (min_time) );
    printf("Slowest Time (Mbits/Sec): %f\n", (576.0 * 1000.0) / (max_time) );

    fclose(fw);
    
    free(file_buffer);
    return 1;
}