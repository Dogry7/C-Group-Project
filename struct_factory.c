#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "structs.h" /* event_manager_t, event_t */
#include "function_prototypes.h" /* init_admin_account() */

void init_event_manager(event_manager_t* event_manager)
{
    init_admin_account(&event_manager->admin_account);

    event_manager->users.head = NULL;
    event_manager->events.head = NULL;
    return;
}

void init_event(event_t* event, person_t* coordinator)
{
    event->patrons.head = NULL;
    event->staff.head = NULL;
    get_new_event_name(event->name);
    get_new_event_free_status(&event->free_event);
    get_new_event_type(event->event_type);

    event->coordinator = coordinator;

    return;
}

void init_admin_account(person_t* admin)
{
    strcpy(admin->username, "Admin");
    strcpy(admin->password, "Password");
    strcpy(admin->firstname, "Admin");
    strcpy(admin->lastname, "Account");
    admin->DOB.day = MIN_DAY;
    admin->DOB.month = MIN_MONTH;
    admin->DOB.year = MIN_YEAR;
}


void create_event(event_manager_t* event_manager, person_t* creator)
{

    /* Create an event struct */
    event_t* event = malloc(sizeof(event_t));
    /* Initialise the event structs values */
    init_event(event, creator);
    if(event_manager->events.head == NULL)
    {
        event_manager->events.head = init_node(event, sizeof(event_t));
    }else
    {
        list_add(&event_manager->events, (void*) event, sizeof(event_t));
    }
    return;
}