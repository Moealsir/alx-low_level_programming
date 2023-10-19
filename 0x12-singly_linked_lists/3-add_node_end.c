#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
   list_t *new, *tmp;


   if (str == NULL)
       return (NULL);
   new = malloc(sizeof(list_t));
   if (new == NULL)
       return (NULL);
   new->str = strdup(str);
   if (new->str == NULL)
   {
       free(new);
       return (NULL);
   }
   new->len = strlen(new->str);
   new->next = NULL;
   if (*head == NULL)
   {
       *head = new;
       return (new);
   }
   tmp = *head;
   while (tmp->next)
       tmp = tmp->next;
   tmp->next = new;
   return (new);
}
