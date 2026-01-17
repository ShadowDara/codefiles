/*
 * Notenpunkte Umrechner
 * by Shadowdara
 * 2025 Apache License 2.0
 * Date: 05.11.2025
 * 
 * More Infos:
 * https://shadowdara.github.io/blog/2025/11/10/NotenpunkteUmrechner
 */

// Import standard input-output library
#include <stdio.h>
// for atof()
#include <stdlib.h>

// Registering all functions above main
float convertNotenpunktzuNote(float Notenpunkt);
float convertNotezuNotenpunkt(float Note);

// Main function
// Start of the program
int main(int argc, char *argv[]) {
    float val;

    // Check the first arg
    if (argc == 3) {
        // Notenpunkte -> Noten
        if (strcmp(argv[1], "np") == 0) {
            val = convertNotenpunktzuNote(atof(argv[2]));
        }
        // Noten -> Notenpunkte
        else {
            val = convertNotezuNotenpunkt(atof(argv[2]));
        }
    } else {
        printf("Notenpunkte Umrechner\n");
        printf("Usage: %s <np|n> <value>\n", argv[0]);
        return 1;
    }

    printf("%f", val);

    // Returning 0 to indicate successful completion
    return 0;
}

// konvertierung Notenpunkt -> Note
float convertNotenpunktzuNote(float Notenpunkt) {
    // Note = (17 - Notenpunkte) / 3
    // Ausnahme: 0 Notenpunkte sind Note 6
    if (Notenpunkt == 0) {
        return 6;
    }
    // Temporäre Variable zum rechnen
    float tmp = 17;
    tmp = tmp - Notenpunkt;
    tmp = tmp / 3;
    return tmp;
}

// konvertierung Note -> Notenpunkt
float convertNotezuNotenpunkt(float Note) {
    // Notenpunkte = - (Note * 3 - 17)
    // Temporäre Variable zum Rechnen
    float tmp;
    tmp = Note * 3;
    tmp = tmp - 17;
    tmp = tmp * (-1);
    return tmp;
}
