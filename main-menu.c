#include <stdio.h>
#include <string.h>

int quantity_of_tickets = 0,money_spended_summary = 0,choose_film,row,seat, popcorn_menu;
char quit_key[20],back_key[20],active_session[20],temp_confirm;



int description_function() {
    while (1) {
        printf("(Enter 'exit' to go back to the main menu)\n");
        printf("\tDescription\n");
        
        if (quantity_of_tickets == 0) {
            printf("Watch something, we need some info\n");
            printf("__________________________________\n");
            break;
        } else {
            printf("Overall you watched %d movies! All this cost you %d UAH\n", quantity_of_tickets, money_spended_summary);
            
            scanf("%s", quit_key);
        
            if (strcmp(quit_key, "exit") == 0) {
                break;
            }
        }
    }
}


int account_info() {
    while (1) {
        printf("(Enter '0' to go back to the main menu)\n");
        
        // scanf("%s", quit_key);
        
        // if (strcmp(quit_key, "exit") == 0) {
        //     break;
        // }

        int account_info_menu_section, desc;
        printf("Pick info that you want to see\n");
        printf("Description(1) Next session(2) Liked films(3)\n");
        scanf("%d", &account_info_menu_section);
        
        switch (account_info_menu_section) {
            case 0:
                printf("Exit to main menu");
                break;
            case 1:
                desc = description_function();
                break;
            case 2:
                printf("Active session\n");
                break;
            case 3:
                printf("Liked films\n");
                break;
            default:
                printf("Input another key\n");
                break;
        }
    }
    
    return 0;
}


int purchasing_function() {
    int purchasing_function_menu_section,menu_navigation, money_spended = 0,return_function;
    while (1) {
        printf("__________________________________\n");
        printf("\t  |               |\n");
        printf("\t  | Choose a time |\n");
        printf("\t  |               |\n");
        printf("__________________________________\n");
        printf("\t| 10:00, 120 UAH (1) |\n");
        printf("__________________________________\n");
        printf("\t| 12:00, 140 UAH (2) |\n");
        printf("__________________________________\n");
        printf("\t| 16:00, 160 UAH (3) |\n");
        printf("__________________________________\n");
        printf("\t| 18:00, 180 UAH (4) |\n");
        printf("__________________________________\n");
        printf("\t| 20:00, 180 UAH (5) |\n");
        printf("__________________________________\n");
        printf("\t      Exit (0)\n");
        scanf("%d", &purchasing_function_menu_section);
        
        switch (purchasing_function_menu_section) {
            case 1:
                while (1) {
                    printf("Choosen time 10:00\n");
                    printf("Want another time? Enter 'y' to go back to the menu, or 'n' to continue\n");
                    getchar(); 
                    temp_confirm = getchar();
                    if (temp_confirm == 'y') {
                        printf("To close press y again\n");
                        break;
                    }    
                    if (temp_confirm == 'n') { 
                        printf("__________________________________\n");
                        while (1) {
                            printf("Choose a row\n");
                            printf("You can choose from '1' to '9'\n");
                            scanf("%d", &row);
                            if (row >= 1 && row <= 9) {
                                printf("You have chosen row %d\n", row);
                                break;
                            } else {
                                printf("There is no such a row\n");
                                printf("Try a different number\n");
                            }
                        }
                        
                        while (1) {
                            printf("Now choose a seat\n");
                            printf("You can choose from '1' to '12'\n");
                            scanf("%d", &seat);
                            if (seat >= 1 && seat <= 12) {
                                printf("You have chosen seat %d\n", seat);
                                break;
                            } else {
                                printf("There is no such a seat\n");
                                printf("Try a different number\n");
                            }
                        }
                        printf("It will cost 120 UAH\n");
                        printf("Would you prefer popcorn or drinks?\n");
                        printf("__________________________________\n");
                        printf("Popcorn and drinks (3) +150 UAH\n");
                        printf("Only popcorn (2) +120 UAH\n");
                        printf("Only drinks (1) +30 UAH\n");
                        printf("Neither (any key)\n");
                        scanf("%d", &popcorn_menu);
                        switch (popcorn_menu) {
                            case 3: 
                                printf("Popcorn and drinks!\n");
                                money_spended += 150;
                                printf("To confirm press 'y', otherwise go back\n");
                                scanf(" %c", &temp_confirm); 
                                if (temp_confirm == 'y') { 
                                    money_spended += 120;
                                    money_spended_summary += money_spended;
                                    quantity_of_tickets++;
                                    printf("Purchase complete, you can see your purchase in the account history!\n");
                                    printf("More some more snacks? 'y' or 'n'\n");
                                    scanf(" %c", &temp_confirm); 
                                    if (temp_confirm == 'y'){
                                        
                                    }
                                    if(temp_confirm == 'n'){
                                        printf("Press 'n' again to leave\n");
                                        break;
                                    }
                                } else {
                                    quantity_of_tickets = 0;
                                    money_spended = 0;
                                    break;
                                }
                            case 2: 
                                printf("Only popcorn!\n");
                                money_spended += 120;
                                printf("To confirm press 'y', otherwise go back\n");
                                scanf(" %c", &temp_confirm); 
                                if (temp_confirm == 'y') { 
                                    money_spended += 120;
                                    money_spended_summary += money_spended;
                                    quantity_of_tickets++;
                                    printf("Purchase complete, you can see your purchase in the account history!\n");
                                    printf("More some more snacks? 'y' or 'n'\n");
                                    scanf(" %c", &temp_confirm); 
                                    if (temp_confirm == 'y'){
                                        
                                    }
                                    if(temp_confirm == 'n'){
                                        printf("Press 'n' again to leave\n");
                                        break;
                                    }
                                } else {
                                    quantity_of_tickets = 0;
                                    money_spended = 0;
                                    break;
                                }
                            case 1: 
                                printf("Only drinks!\n");
                                money_spended += 30;
                                printf("To confirm press 'y', otherwise go back\n");
                                scanf(" %c", &temp_confirm); 
                                if (temp_confirm == 'y') { 
                                    money_spended += 120;
                                    money_spended_summary += money_spended;
                                    quantity_of_tickets++;
                                    printf("Purchase complete, you can see your purchase in the account history!\n");
                                    printf("More some more snacks? 'y' or 'n'\n");
                                    scanf(" %c", &temp_confirm); 
                                    if (temp_confirm == 'y'){
                                        
                                    }
                                    if(temp_confirm == 'n'){
                                        printf("Press 'n' again to leave\n");
                                        break;
                                    }
                                } else {
                                    quantity_of_tickets = 0;
                                    money_spended = 0;
                                    break;
                                }
                            default: 
                                printf("Neither\n");
                                printf("To confirm press 'y', otherwise go back\n");
                                scanf(" %c", &temp_confirm); 
                                if (temp_confirm == 'y') { 
                                    money_spended += 120;
                                    money_spended_summary += money_spended;
                                    quantity_of_tickets++;
                                    printf("Purchase complete, you can see your purchase in the account history!\n");
                                } else {
                                    quantity_of_tickets = 0;
                                    money_spended = 0;
                                    break;
                                }
                        }
                        
                    }
                }
                break;
            // case 2:
            //     printf("You have chosen: Topol\n");
            //     printf("Purchase complete\n");
            //     break;
            // case 3:
            //     printf("You have chosen: RTR\n");
            //     printf("Purchase complete\n");
            //     break;
            // case 4:
            //     printf("You have chosen: RTR\n");
            //     printf("Purchase complete\n");
            //     break;
            // case 5:
            //     printf("You have chosen: RTR\n");
            //     printf("Purchase complete\n");
            //     break;  
                case 0:
                    printf("Exit to film catalog\n");
                    break;   
                default:
                    printf("Wrong number\n");
                    break;
        }
        if (purchasing_function_menu_section==0)
            {
                break;
            }
    }
    return_function = buy_tickets();   
}

int buy_tickets() {        
    
    int buy_tickets_menu_section, purchase, return_function;
    while (1) {
        printf("__________________________________\n");
        printf("\t|               |\n");
        printf("\t| Choose a time |\n");
        printf("\t|               |\n");
        printf("__________________________________\n");
        printf("\t|  Name 1 (1)   |\n");
        printf("__________________________________\n");
        printf("\t|  Name 2 (2)   |\n");
        printf("__________________________________\n");
        printf("\t|  Name 3 (3)   |\n");
        printf("__________________________________\n");
        printf("\t  Exit (0)\n");
        scanf("%d", &buy_tickets_menu_section);
        
        switch (buy_tickets_menu_section) {
            case 1:
                printf("You have chosen: Kyky kaka\n");
                purchase=purchasing_function();
                break;
            case 2:
                printf("You have chosen: Topol\n");
                purchase=purchasing_function();
                break;
            case 3:
                printf("You have chosen: RTR\n");
                purchase=purchasing_function();
                break;
            case 0:
                printf("Exit to film catalog\n");
                break; 
            default:
                printf("Wrong number\n");
                break;
        }
        if (buy_tickets_menu_section==0)
            {
                break;
            }
    }
    return_function = main();
}



int main() {
    int menu_section, info, buy;
    while (1) {
        printf("Choose menu section\n");
        printf("__________________________________\n");
        printf("\t Account(1)\t Buy(2)\n");
        scanf("%d", &menu_section);
        printf("__________________________________\n");
        
        switch (menu_section) {
            case 1:
                info = account_info();
                break;
            case 2:
                buy = buy_tickets();
                break;
            default:
                printf("Input another key\n");
                break;
        }
    }
    return 0;
}
