#include <stdio.h>
#include <string.h>
#include "phonebook.h"

void changeRecords(struct Node* head, int index) {
  if (!head || index < 1) {
    printf("Invalid index. Please try again.\n");
    return;
  }

  struct Node* current = head;
  int count = 1;

  while (current && count < index) {
    current = current->next;
    count++;
  }

  if (!current) {
    printf("Invalid index. Please try again.\n");
    return;
  }

  char fieldToChange[50];
  printf("Enter the field to change (firstName, middleName, lastName, mobileNumber, email): ");
  scanf("%s", fieldToChange);

  if (strcmp(fieldToChange, "firstName") == 0) {
    printf("Enter new first name: ");
    scanf("%s", current->record.firstName);
  } else if (strcmp(fieldToChange, "middleName") == 0) {
    printf("Enter new middle name: ");
    scanf("%s", current->record.middleName);
  } else if (strcmp(fieldToChange, "lastName") == 0) {
    printf("Enter new last name: ");
    scanf("%s", current->record.lastName);
  } else if (strcmp(fieldToChange, "mobileNumber") == 0) {
    printf("Enter new mobile number: ");
    scanf("%s", current->record.mobileNumber);
  } else if (strcmp(fieldToChange, "email") == 0) {
    printf("Enter new email: ");
    scanf("%s", current->record.email);
  } else {
    printf("Invalid field name. Please try again.\n");
    return;
  }

  printf("Record changed successfully.\n");
}
