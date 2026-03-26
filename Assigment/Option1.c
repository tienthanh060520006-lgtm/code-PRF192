#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float price;
    int stock;
} Item;


int main() {
    const char *filePath = "products.bin";
    int option, amount;

    do {
        printf("\n=== Inventory Management ===\n");
        printf("1. Write New Items\n");
        printf("2. Append Items\n");
        printf("3. Show All Items\n");
        printf("4. Edit Item\n");
        printf("5. Quit\n");

        printf("Select an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("How many items to write: ");
                scanf("%d", &amount);
                saveItems(filePath, amount);
                break;

            case 2:
                printf("How many items to append: ");
                scanf("%d", &amount);
                addMoreItems(filePath, amount);
                break;

            case 3:
                displayItems(filePath);
                break;

            case 4:
                updateItem(filePath);
                break;

            case 5:
                printf("Exiting.\n");
                break;

            default:
                printf("Invalid option. Try again.\n");
        }

    } while (option != 5);

    return 0;
}

// Write (overwrite) items
void saveItems(const char *file, int count) {
    FILE *fp = fopen(file, "wb");
    if (!fp) {
        printf("Cannot open file.\n");
        return;
    }

    Item temp;
    for (int i = 0; i < count; i++) {
        printf("\nItem %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &temp.id);
        printf("Name: ");
        getchar();
        fgets(temp.name, 50, stdin);
        temp.name[strcspn(temp.name, "\n")] = '\0';
        printf("Price: ");
        scanf("%f", &temp.price);
        printf("Stock: ");
        scanf("%d", &temp.stock);

        fwrite(&temp, sizeof(Item), 1, fp);
    }

    fclose(fp);
    printf("Items saved successfully.\n");
}

// Append items
void addMoreItems(const char *file, int count) {
    FILE *fp = fopen(file, "ab");
    if (!fp) {
        printf("Cannot open file.\n");
        return;
    }

    Item temp;
    for (int i = 0; i < count; i++) {
        printf("\nNew Item %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &temp.id);
        printf("Name: ");
        getchar();
        fgets(temp.name, 50, stdin);
        temp.name[strcspn(temp.name, "\n")] = '\0';
        printf("Price: ");
        scanf("%f", &temp.price);
        printf("Stock: ");
        scanf("%d", &temp.stock);

        fwrite(&temp, sizeof(Item), 1, fp);
    }

    fclose(fp);
    printf("Items appended successfully.\n");
}

// Read items
void displayItems(const char *file) {
    FILE *fp = fopen(file, "rb");
    if (!fp) {
        printf("File not found.\n");
        return;
    }

    Item temp;

    printf("\n-----------------------------------------------------\n");
    printf("%-10s %-20s %-10s %-10s\n", "ID", "Name", "Price", "Stock");
    printf("-----------------------------------------------------\n");

    while (fread(&temp, sizeof(Item), 1, fp)) {
        printf("%-10d %-20s %-10.2f %-10d\n",
               temp.id, temp.name, temp.price, temp.stock);
    }

    printf("-----------------------------------------------------\n");

    fclose(fp);
}

// Modify item
void updateItem(const char *file) {
    FILE *fp = fopen(file, "rb+");
    if (!fp) {
        printf("File not found.\n");
        return;
    }

    int searchID;
    printf("Enter ID to update: ");
    scanf("%d", &searchID);

    Item temp;
    int found = 0;

    while (fread(&temp, sizeof(Item), 1, fp)) {
        if (temp.id == searchID) {
            found = 1;

            printf("New Name: ");
            getchar();
            fgets(temp.name, 50, stdin);
            temp.name[strcspn(temp.name, "\n")] = '\0';

            printf("New Price: ");
            scanf("%f", &temp.price);

            printf("New Stock: ");
            scanf("%d", &temp.stock);

            fseek(fp, -sizeof(Item), SEEK_CUR);
            fwrite(&temp, sizeof(Item), 1, fp);

            printf("Item updated successfully.\n");
            break;
        }
    }

    if (!found)
        printf("Item not found.\n");

    fclose(fp);
}