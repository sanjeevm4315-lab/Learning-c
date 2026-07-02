/*Project_Name: Fuel Planner
Author: Sanjeev M
Date: 2026-07-02
*/

#include <stdio.h>

int main() {
    // Defining fixed planetary and physical constants
    const float EARTH_GRAVITY = 9.81;
    const float FUEL_PER_KG_PER_KM = 0.0015;
    const float BASE_ROCKET_WEIGHT = 50000.0; // Empty rocket weight in kg

    // Declaring variables for user tracking
    char astronaut_rank;
    int total_astronauts;
    float cargo_weight;
    float destination_distance;

    // Declaring math calculation outputs
    float total_mass;
    float required_fuel;
    float structural_stress;

    // Mission Control Terminal Banner
    printf("==================================================\n");
    printf("   ASTRONAUTICAL MISSION CONTROL: FUEL PLANNER    \n");
    printf("==================================================\n\n");

    // Collecting input data using formatted scanf
    printf("Enter Mission Commander's Rank Initial (e.g., C, M, A): ");
    scanf(" %c", &astronaut_rank); 

    printf("Enter number of crew members: ");
    scanf("%d", &total_astronauts);

    printf("Enter total payload/cargo weight (in kg): ");
    scanf("%f", &cargo_weight);

    printf("Enter destination distance from Earth orbit (in km): ");
    scanf("%f", &destination_distance);

    // Sequential operations mapping Chapter 1 math formulas
    // Assigning 90kg per astronaut including survival gear
    total_mass = BASE_ROCKET_WEIGHT + cargo_weight + (total_astronauts * 90.0);
    
    // Total fuel requirement proportional to weight and total travel distance
    required_fuel = total_mass * destination_distance * FUEL_PER_KG_PER_KM;
    
    // Translating total weight into downward structural load (Force = mass * acceleration)
    structural_stress = (total_mass * EARTH_GRAVITY) / 1000.0; 

    // Formatting final terminal interface print block
    printf("\n==================================================\n");
    printf("             MISSION BUDGET REPORT                \n");
    printf("==================================================\n");
    printf("Commander Rank Designation : [ %c ]\n", astronaut_rank);
    printf("Total Crew Size            : %d personnel\n", total_astronauts);
    printf("Total Launch Mass (Wet)    : %.2f kg\n", total_mass);
    printf("Target Orbit Distance      : %.2f km\n", destination_distance);
    printf("--------------------------------------------------\n");
    printf("REQUIRED LIFT-OFF FUEL     : %.2f Liters\n", required_fuel);
    printf("ESTIMATED HULL STRESS      : %.2f kN (Kilonewtons)\n", structural_stress);
    printf("==================================================\n");
    printf("Status: Project complete and operational!\n");

    return 0;
}

