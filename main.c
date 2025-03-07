#include <stdio.h>

int main() {
    char drug_name[50];
    float weight_lb, daily_dosage_mg_per_kg, frequency, dosage_concentration, dosage_concentration_ml;

    // Input
    printf("\n------------------------------------------------------------------------------------------------");
    printf("\n                        H. A. AHMAD PEDIATRIC DRUG DOSAGE CALCULATOR                        \n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("Insert drug name: ");
    scanf("%s", drug_name);
    printf("Insert weight in lbs: ");
    scanf("%f", &weight_lb);
    printf("Insert the required daily dosage in mg/kg/day: ");
    scanf("%f", &daily_dosage_mg_per_kg);
    printf("Insert the frequency required per day: ");
    scanf("%f", &frequency);
    printf("Insert the dosage concentration in mg/ml: ");
    scanf("%f %f", &dosage_concentration, &dosage_concentration_ml);

    // Conversion
    float weight_kg = weight_lb / 2.2;
    float total_dosage_mg = weight_kg * daily_dosage_mg_per_kg;
    float single_dose_mg = total_dosage_mg / frequency;
    float dosage_concentration2 = total_dosage_mg / frequency; ///(BID) ///Dosage concentration 2 is 400/2 = 200
    float dosage_concentration_full = dosage_concentration / dosage_concentration_ml; /// Dosage concentration full is 400/5 = 80
    float dose_ml = dosage_concentration2 / dosage_concentration_full; /// Dose ml is 200/80 = 2.5 ???
    float BID = frequency;

    // Output
    printf("\n------------------");
    printf("\nResults Summary:\n");
    printf("------------------\n");
    printf("Drug: %s\n", drug_name);
    printf("Weight: %.2f kg\n", weight_kg);
    printf("Daily dosage: %.2f (mg/kg/day)\n", daily_dosage_mg_per_kg);
    printf("Dosage concentration: %.2f mg/", total_dosage_mg);
    printf("%.2f mL \n", dosage_concentration_ml);
    printf("Dose in mL: %.2f mL, ", dose_ml);
    printf("%.2f times(s) / day\n", BID);

    return 0;
}
