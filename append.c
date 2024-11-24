#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phonebook.h"

void appendRecords(struct Node** head, struct PhoneRecord record) {
  // Allocate memory for the new node
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  // Check for memory allocation failure
  if (newNode == NULL) {
    printf("Memory allocation failed. Please try again.\n");
    return;
  }

  // Store the record data in the new node
  newNode->record = record;

  // Set the next pointer of the new node to the current head
  newNode->next = *head;

  // Update the head pointer to point to the new node
  *head = newNode;

  printf("Record added successfully.\n");
}
