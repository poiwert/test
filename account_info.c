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
