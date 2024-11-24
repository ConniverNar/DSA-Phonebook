#include <stdio.h>
#include <stdlib.h>
#include "phonebook.h"

void deleteRecords(struct Node** head, int index) {
  if (!*head || index < 1) {
    printf("Invalid index. Please try again.\n");
    return;
  }

  struct Node* prev = NULL;
  struct Node* current = *head;
  int count = 1;

  while (current && count < index) {
    prev = current;
    current = current->next;
    count++;
  }

  if (!current) {
    printf("Invalid index. Please try again.\n");
    return;
  }

  if (prev) {
    prev->next = current->next;
  } else {
    *head = current->next;
  }
  free(current);
  printf("Record deleted successfully.\n");
}
