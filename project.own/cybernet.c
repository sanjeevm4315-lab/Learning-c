#include <stdio.h>

int main() {
    // Variable Declarations (Chapter 1 Standard)
    float rawGigabytes;
    float downloadSpeedMbps;
    
    float totalMegabytes, totalMegabits;
    int totalSecondsNeeded;
    int hours, minutes, seconds;
    
    // 1. Visual Interface
    printf("==================================================\n");
    printf("     CYBERNET: PACKET & METRICS CALCULATOR       \n");
    printf("==================================================\n\n");
    
    // 2. User Input
    printf("[+] Enter File Size to Transfer (in GB): ");
    scanf("%f", &rawGigabytes);
    
    printf("[+] Enter Network Speed (in Mbps): ");
    scanf("%f", &downloadSpeedMbps);
    
    // 3. Ultra-Logic Arithmetic Processing
    // Convert GB to MB (1 GB = 1024 MB)
    totalMegabytes = rawGigabytes * 1024.0;
    
    // Convert MB to Megabits for network calculation (1 Byte = 8 Bits)
    totalMegabits = totalMegabytes * 8.0;
    
    // Calculate total transfer time in seconds
    totalSecondsNeeded = (int)(totalMegabits / downloadSpeedMbps);
    
    // Time Parsing Logic using Division and Modulo (Crucial Chapter 1 Exercise)
    hours = totalSecondsNeeded / 3600;
    minutes = (totalSecondsNeeded % 3600) / 60;
    seconds = totalSecondsNeeded % 60;
    
    // 4. Output Generation with Advanced Output Formatting
    printf("\n--------------------------------------------------\n");
    printf("               DATA ANALYSIS REPORT               \n");
    printf("--------------------------------------------------\n");
    printf("[*] Raw Data Base    : %.2f GB\n", rawGigabytes);
    printf("[*] Storage Weight   : %.2f MB\n", totalMegabytes);
    printf("[*] Network Payload  : %.0f Megabits\n", totalMegabits);
    printf("--------------------------------------------------\n");
    printf("[>] Estimated Transfer Time: %02d:%02d:%02d (HH:MM:SS)\n", hours, minutes, seconds);
    printf("==================================================\n");

    return 0;
}
