#include <stdio.h>

    ///Using structure for easier order info operations
    struct ordernumber_info{
        int order_number;
    };

    ///Variable type & declaration for products & orders
    int counter, counter1, pepsi_count, somucha_count, singara_count, burger_count, muffin_count, vegroll_count, pizza_count, sandwich_count, hotdog_count, water_count;
    int total_count=0;
    int amount[10]={100,50,50,30,30,30,20,20,20,100};
    int order_taking;
    char x='s';

    struct ordernumber_info ordernumber[10];

    ///Showing the item list and amount of food like a menue in funtion
    void print_menue_information(){
        printf("\n>>>>Today's Item List<<<<\n");
        printf("Item name         Quantity \n");
        printf("+++++++++         ++++++++\n");
        printf("Pepsi(s) we have: %d \n",amount[0]);
        printf("Somucha(s) we have: %d \n",amount[1]);
        printf("Singara(s) we have: %d \n",amount[2]);
        printf("Burger(s) we have: %d \n",amount[3]);
        printf("Muffin(s) we have: %d \n",amount[4]);
        printf("Vegroll(s) we have: %d \n",amount[5]);
        printf("Pizza(s) we have: %d \n",amount[6]);
        printf("Sandwich(s) we have: %d \n",amount[7]);
        printf("Hotdog(s) we have: %d \n",amount[8]);
        printf("Water 250ml bottle(s) we have: %d \n\n",amount[9]);

    }

int main(){

    printf("Cafeteria order management system\n");
    printf("==================================\n");
    print_menue_information();

    ///Asking for order,taking orders for several times and verifying
    for(counter=0;counter<=9;counter++){
        printf("Take orders?yes then 1 or no then 0 ! = ");
        scanf("%d",&order_taking);
        if(order_taking==1){
            printf("\nEnter no. %d order info : ",counter+1);
            scanf("%d",&ordernumber[counter].order_number);
            for(counter1=0;counter1<=counter-1;counter1++){
                if(ordernumber[counter].order_number==ordernumber[counter1].order_number){
                    ordernumber[counter].order_number=0;
                }
            }
            if(ordernumber[counter].order_number!=0){
                total_count=0;
                if(counter>0){
                    print_menue_information();
                }
                printf("\nHow many Pepsi(s) you want to buy: ");
                scanf("%d", &pepsi_count);
                if(pepsi_count<101){
                    printf("You have bought: %d\n\n",pepsi_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Somucha(s) you want to buy: ");
                scanf("%d", &somucha_count);
                if(somucha_count<51){
                    printf("You have bought: %d\n\n",somucha_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Singara(s) you want to buy: ");
                scanf("%d", &singara_count);
                if(singara_count<51){
                    printf("You have bought: %d\n\n",singara_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Burger(s) you want to buy: ");
                scanf("%d", &burger_count);
                if(burger_count<31){
                    printf("You have bought: %d\n\n",burger_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Muffin(s) you want to buy: ");
                scanf("%d", &muffin_count);
                if(muffin_count<31){
                    printf("You have bought: %d\n\n",muffin_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Vegroll(s) you want to buy: ");
                scanf("%d", &vegroll_count);
                if(vegroll_count<31){
                    printf("You have bought: %d\n\n",vegroll_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Pizza(s) you want to buy: ");
                scanf("%d", &pizza_count);
                if(pizza_count<21){
                    printf("You have bought: %d\n\n",pizza_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Sandwich(s) you want to buy: ");
                scanf("%d", &sandwich_count);
                if(sandwich_count<21){
                    printf("You have bought: %d\n\n",sandwich_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Hotdogs(s) you want to buy: ");
                scanf("%d", &hotdog_count);
                if(hotdog_count<21){
                    printf("You have bought: %d\n\n",hotdog_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
                printf("How many Water 250ml bottle(s) you want to buy: ");
                scanf("%d", &water_count);
                if(water_count<101){
                    printf("You have bought: %d\n\n",water_count);
                }
                else{
                    printf("Sorry we cant provide the item!!\n\n");
                }
            }
            else{
                printf("\nInvalid.Order number same!,order revoked!!\n\n");
                ordernumber[counter].order_number=0;
            }
        }
        else{
            printf("\nWaiting for orders!!");
            ordernumber[counter].order_number=0;
        }

        ///Calculating bill & giving the final output as total bill reciept for every order
        printf("\n\n**********BITE food & CHILL fast**********\n");
        printf("\nBill info for order no. %d \n",ordernumber[counter].order_number);
        printf("===========================\n\n");
        if(ordernumber[counter].order_number!=0){
            if(order_taking==1){
                if(pepsi_count!=0){
                    if(pepsi_count<101){
                        if(pepsi_count>1){
                            printf("Pepsi%c        - %d  x 20   %d Tk\n", x, pepsi_count, pepsi_count*20);
                        }
                        else{
                            printf("Pepsi          - %d  x 20   %d Tk\n", pepsi_count, pepsi_count*20);
                        }
                        total_count=total_count+pepsi_count*20;
                    }
                }
                else{
                    printf("\n");
                }
                if(somucha_count!=0){
                    if(somucha_count<51){
                        if(somucha_count>1){
                            printf("Somucha%c      - %d  x  8   %d Tk\n", x, somucha_count, somucha_count*8);
                        }
                        else{
                            printf("Somucha        - %d  x  8   %d Tk\n", somucha_count, somucha_count*8);
                        }
                        total_count=total_count+somucha_count*8;
                    }
                }
                else{
                    printf("\n");
                }
                if(singara_count!=0){
                    if(singara_count<51){
                        if(singara_count>1){
                            printf("Singara%c      - %d  x  6   %d Tk\n", x, singara_count, singara_count*6);
                        }
                        else{
                            printf("Singara        - %d  x  6   %d Tk\n", singara_count, singara_count*6);
                        }
                        total_count=total_count+singara_count*6;
                    }
                }
                else{
                    printf("\n");
                }
                if(burger_count!=0){
                    if(burger_count<31){
                        if(burger_count>1){
                            printf("Burger%c       - %d  x 40   %d Tk\n", x, burger_count, burger_count*40);
                        }
                        else{
                            printf("Burger         - %d  x 40   %d Tk\n", burger_count, burger_count*40);
                        }
                        total_count=total_count+burger_count*40;
                    }
                }
                else{
                    printf("\n");
                }
                if(muffin_count!=0){
                    if(muffin_count<31){
                        if(muffin_count>1){
                            printf("Muffin%c       - %d  x 20   %d Tk\n", x, muffin_count, muffin_count*20);
                        }
                        else{
                            printf("Muffin         - %d  x 20   %d Tk\n", muffin_count, muffin_count*20);
                        }
                        total_count=total_count+muffin_count*20;
                    }
                }
                else{
                    printf("\n");
                }
                if(vegroll_count!=0){
                    if(vegroll_count<31){
                        if(vegroll_count>1){
                            printf("Vegroll%c      - %d  x 15   %d Tk\n", x, vegroll_count, vegroll_count*15);
                        }
                        else{
                            printf("Vegroll        - %d  x 15   %d Tk\n", vegroll_count, vegroll_count*15);
                        }
                        total_count=total_count+vegroll_count*15;
                    }
                }
                else{
                    printf("\n");
                }
                if(pizza_count!=0){
                    if(pizza_count<21){
                        if(pizza_count>1){
                            printf("Pizza%c        - %d  x 40   %d Tk\n", x, pizza_count, pizza_count*40);
                        }
                        else{
                            printf("Pizza          - %d  x 40   %d Tk\n", pizza_count, pizza_count*40);
                        }
                        total_count=total_count+pizza_count*40;
                    }
                }
                else{
                    printf("\n");
                }
                if(sandwich_count!=0){
                    if(sandwich_count<21){
                        if(sandwich_count>1){
                            printf("Sandwich%c     - %d  x 30   %d Tk\n", x, sandwich_count, sandwich_count*30);
                        }
                        else{
                            printf("Sandwich       - %d  x 30   %d Tk\n", sandwich_count, sandwich_count*30);
                        }
                        total_count=total_count+sandwich_count*30;
                    }
                }
                else{
                    printf("\n");
                }
                if(hotdog_count!=0){
                    if(hotdog_count<21){
                        if(hotdog_count>1){
                            printf("Hotdog%c       - %d  x 25   %d Tk\n", x, hotdog_count, hotdog_count*25);
                        }
                        else{
                            printf("Hotdog         - %d  x 25   %d Tk\n", hotdog_count, hotdog_count*25);
                        }
                        total_count=total_count+hotdog_count*25;
                    }
                }
                else{
                    printf("\n");
                }
                if(water_count!=0){
                    if(water_count<101){
                        if(water_count>1){
                            printf("Water250ml%c   - %d  x 15   %d Tk\n", x, water_count, water_count*15);
                        }
                        else{
                            printf("Water250ml     - %d  x 15   %d Tk\n", water_count, water_count*15);
                        }
                        total_count=total_count+water_count*15;
                    }
                }
                else{
                    printf("\n");
                }

                printf("Total bill =============== %d Tk\n", total_count);
                printf(" \n o_o Thank you! come again o_o\n\n");
            }
            else{
                printf("\nNo orders,No bills!!\n\n");
            }
        }
        else{
            printf("\nNo orders,No bills!!\n\n");
        }
    }
    return 0;
}



