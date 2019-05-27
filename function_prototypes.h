/* Header file for event_manager.c function prototypes */

#ifndef C_GROUP_PROJECT_PROTOTYPES_H
    #include "structs.h" /* event_t */
    #define C_GROUP_PROJECT_PROTOTYPES_H

    /* menus.c */
    void menu_login(event_manager_t* event_manager);
    void menu_main(event_manager_t* event_manager);
    void menu_admin(event_manager_t* event_manager);
    void menu_edit(event_manager_t* event_manager, int event_num);
    void print_menu_login(void);
    void print_menu_main(char* current_logged_in_username);
    void print_menu_admin(void);

    /* data_validation.c */
    int valid_int(char* input);
    int convert_int(char* input);
    int username_taken(event_manager_t* event_manager, char* username);

    /* user_input.c */
    void get_user_login(char* username, char* password);
    void get_event_login(int* event_id, char* event_password);
    int scan_int(void);
    int scan_int_min_max(int min_value, int max_value);
    int response_yes(void);
    void join_event(event_manager_t* event_manager);
    void edit_event(event_manager_t* event_manager);
    void add_patron(event_t* event, event_manager_t* event_manager);
    void add_staff(event_t* event, event_manager_t* event_manager);
    void remove_patron(event_t* event, event_manager_t* event_manager);
    void remove_staff(event_t* event, event_manager_t* event_manager);

    /* user_factory.c */
    void get_new_user_username(event_manager_t event_manager, char* username);
    void get_new_user_password(char* password, int user_index);
    void get_new_user_firstname(char* firstname);
    void get_new_user_lastname(char* lastname);
    void get_new_user_DOB(date_t* DOB);

    /* event_factory.c */
    void get_new_event_name(char* event_name);
    void get_new_event_free_status(int* event_free_status);
    void get_new_event_type(char* event_type);

    /* accounts.c */
    void create_new_user(event_manager_t event_manager, person_t* user);
    void account_creation(event_manager_t* event_manager);
    int login(event_manager_t* event_manager);

    /* struct_factory.c */
    void init_event_manager(event_manager_t* event_manager);
    void init_event(event_t* event, person_t* coordinator);
    void init_staff(event_t* event, person_t* staff);
    void init_admin_account(person_t* admin);
    void create_event(event_manager_t* event_manager, person_t* creator);

    /* print.c */
    void print_event_name(event_t* event, int event_index);
    void print_event_details(event_t* event, int event_index);
    void list_event_names(event_manager_t event_manager);
    void print_user_details(person_t user, int user_index);
    void list_all(event_manager_t* event_manager);
    void print_menu_login(void);
    void print_menu_main(char* current_logged_in_username);
    void print_menu_admin(void);
    void print_menu_edit(char* event_name);
    void print_menu_edit_staff(void);
    void print_menu_edit_patrons(void);

    /* edit_event.c */
    void edit_name(event_t* event);
    void edit_type(event_t* event);
    void edit_location(event_t* event);
    void edit_date_time(event_t* event);
    void edit_staff(event_manager_t* event_manager, int event_num);
    void edit_patrons(event_manager_t* event_manager, int event_num);

    /* encrypt.c */
    void caeser_cipher(const int shift, const char* plaintext,
                                              char* ciphertext);
    int xor_encrypt_file(const char* key, FILE* input, FILE* output);

    /* search.c */
    int search_event(linked_list_t* list, char* event_name);
    int search_event_edit(linked_list_t* list);
    int search_event_join(linked_list_t* list);
    int search_user(linked_list_t* list, char* username);
    int search_user_add(linked_list_t* list);
    int search_user_remove(linked_list_t* list);

    /* display.c */
    void display_event(event_t* events, int event_count);

    /* TODO
    void add_event(event_manager_t* event_manager);
    void display_event(event_manager_t* event_manager);
    void add_database(event_manager_t* event_manager);
    void load_database(event_manager_t* event_manager);
    Perhaps add more prototype functions if necessary,
    also need to put people on different tasks for these functions*/

#endif /*C_GROUP_PROJECT_PROTOTYPES_H*/
