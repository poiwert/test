#include <stdio.h>
#include <string.h>
#define bool int
#define true 1
#define false 0
int check_movie_watched=0,quantity_of_tickets,money_spended_summary,choose_film,row,seat, popcorn_menu;
char quit_key[20],back_key[20],active_session[20],temp_confirm;
int choose_another_time = 1;



int description_function() {
    while (1) {
        printf("(Enter 'exit' to go back to the main menu)\n");
        printf("\tDescription\n");
        
        if (check_movie_watched == 0) {
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
        printf("(Enter 'exit' to go back to the main menu)\n");
        
        int account_info_menu_section, desc;
        printf("Pick info that you want to see\n");
        printf("Description(1) Next session(2) Liked films(3)\n");
        scanf("%d", &account_info_menu_section);
        
        switch (account_info_menu_section) {
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

        scanf("%s", quit_key);
        
        if (strcmp(quit_key, "exit") == 0) {
            break;
        }
    }
    
    return 0;
}

#include <string.h>

int purchasing_function() {
    int purchasing_function_menu_section,menu_navigation;
    while (1) {
        printf("(Enter 'exit' to go back to the main menu)\n");
        printf("Choose a time\n");
        printf("\t(1) 10:00\n");
        printf("\t(2) 12:00\n");
        printf("\t(3) 16:00\n");
        printf("\t(4) 18:00\n");
        printf("\t(5) 20:00\n");
        scanf("%d", &purchasing_function_menu_section);
        
        switch (purchasing_function_menu_section) {
            case 1:
                while (1) {
                    printf("Choosen time 10:00\n");
                    printf("Want another time? Enter 'y' to go back to the menu, or 'n' to continue\n");
                    getchar(); 
                    temp_confirm = getchar();
                    if (temp_confirm == 'y') {
                            choose_another_time = true; // Set the flag to true
                            break; 
                        } else if (temp_confirm == 'n') {
                            choose_another_time = false; // Set the flag to false
                            break; 
                        } else {
                            printf("Invalid input. "); 
                            printf("Want another time? Enter 'y' to go back to the menu, or 'n' to continue\n");
                        }
                    }
                    
                    if (!choose_another_time) { 
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
                        printf("Neither (0)\n");
                        scanf("%d", &popcorn_menu);
                        switch (popcorn_menu) {
                            case 3: 
                                printf("Popcorn and drinks!\n");
                                money_spended_summary += 150;
                                break;
                            case 2: 
                                printf("Only popcorn!\n");
                                money_spended_summary += 120;
                                break;
                            case 1: 
                                printf("Only drinks!\n");
                                money_spended_summary += 30;
                                break;
                            case 0: 
                                printf("Neither\n");
                                break;
                            default: 
                                printf("Wrong key\n");
                                break;
                        }
                        
                        printf("To confirm press 'y', otherwise go back\n");
                        scanf(" %c", &temp_confirm); 
                        if (temp_confirm == 'y') { 
                            money_spended_summary += 120;
                            printf("Purchase complete, you can see your purchase in the account history!\n");
                            printf("More tickets? 'y' & 'n'");
                            scanf(" %c", &temp_confirm); 
                            if (temp_confirm == 'y'){
                                
                            }
                            if(temp_confirm == 'n') break;
                        } else {
                            money_spended_summary = 0;
                            break;
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
            // default:
            //     printf("Wrong number\n");
            //     break;
        }
        
        scanf("%s", quit_key);
        
        if (strcmp(quit_key, "exit") == 0) {
            break;
        }
    }
}

#include <string.h>

int buy_tickets() {        
    
    int buy_tickets_menu_section, purchase;
    while (1) {
        printf("(Enter 'exit' to go back to the main menu)\n");
        printf("There are 3 films to choose from:\n");
        printf("\t(1) Kyky kaka\n");
        printf("\t(2) Topol\n");
        printf("\t(3) RTR\n");
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
            default:
                printf("Wrong number\n");
                break;
        }
        
        scanf("%s", quit_key);
        
        if (strcmp(quit_key, "exit") == 0) {
            break;
        }
    }
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
