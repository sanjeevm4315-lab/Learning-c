#include <stdio.h>

int main() {
    long long encrypted_key;
    long long security_clearance, bypass_core, subgrid_frequency, final_checksum;
    long long calculation_pool;

    long long clearance_divisor = 1000000;
    long long core_divisor = 10000;       
    long long grid_divisor = 100;         

    printf("==================================================\n");
    printf("     CYBERPUNK TERMINAL DECRYPTION PROTOCOL       \n");
    printf("==================================================\n");

    printf("[+] Enter Main Encrypted Access Key (e.g., 87654321): ");
    scanf("%lld", &encrypted_key);

    security_clearance = encrypted_key / clearance_divisor;
    calculation_pool = encrypted_key % clearance_divisor;

    bypass_core = calculation_pool / core_divisor;
    calculation_pool = calculation_pool % core_divisor;

    subgrid_frequency = calculation_pool / grid_divisor;
    final_checksum = calculation_pool % grid_divisor;

    printf("\n============ ACCESS BREAKDOWN REPORT ============\n");
    printf("Raw Input Data Core:\t\t%lld\n", encrypted_key);
    printf("--------------------------------------------------\n");
    printf("Security Clearance Tier:\tLevel %lld\n", security_clearance);
    printf("Bypass Core Command Key:\t0x%04lld\n", bypass_core);
    printf("Subgrid Router Frequency:\t%lld MHz\n", subgrid_frequency);
    printf("System Core Checksum:\t\t%lld\n", final_checksum);
    printf("==================================================\n");

    return 0;
}
