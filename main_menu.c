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
//add