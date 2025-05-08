#include <stdio.h>
#include <stdlib.h>

void Hunerler ( float itemPrice, float* donationTotal , float* profitTotal);

int main( void ){
    
    printf("This program gets the profits and donations:\n");
    
    float itemPrice, total_donation = 0, total_profit = 0;
    
    FILE * fileDonations;
    fileDonations = fopen("donations.txt", "w");
    
    for( int i=0; i<50; i++ ){
        itemPrice = rand() %21000 ;
        itemPrice = itemPrice /1000;
        Hunerler(itemPrice, &total_donation, &total_profit);
        printf("Item is %.2f \n", itemPrice);
        fprintf(fileDonations, "Item is %.2f\n", itemPrice);
        }
        
    printf("Donation is %.2f\n", total_donation);
    fprintf(fileDonations, "Donation is %.2f\n", total_donation);
    printf("Profit is %.2f", total_profit);
    fprintf(fileDonations, "Profit is %.2f\n", total_profit);
    fclose(fileDonations);
    
}

void Hunerler ( float itemPrice, float* donationTotal , float* profitTotal){
    
    int profit   = (int)itemPrice;
    float donation = itemPrice - profit;
    
    *donationTotal = *donationTotal + donation;
    *profitTotal   = *profitTotal   + profit;
}
