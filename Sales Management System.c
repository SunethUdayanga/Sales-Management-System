///Sales Management System///

#include <stdio.h>

int y,c,d,e,f,g,h,m,n,p;
char z;

///inventory array
int k=4,l=2;
int inventory[4][2];

///main interface
void main(){
    system("cls");
    system("color F1");
    printf("                  ____________________________________________________________\n");
    printf("                >>                                                            <<\n");
    printf("                >>                 --------------------------                 <<\n");
    printf("                >>                   SALES MANAGMENT SYSTEM                   <<\n");
    printf("                >>                 --------------------------                 <<\n");
    printf("                >>                                                            <<\n");
    printf("                >>          (1). Instructions                                 <<\n");
    printf("                >>          (2). Inventory                                    <<\n");
    printf("                >>          (3). New Sale                                     <<\n");
    printf("                >>          (4). Add Item                                     <<\n");
    printf("                >>          (5). Clear Inventory                              <<\n");
    printf("                >>          (6). About                                        <<\n");
    printf("                >>          (7). Exit                                         <<\n");
    printf("                >>                                                            <<\n");
    printf("                >>                 --------------------------                 <<\n");
    printf("                >>                                                            <<\n");
    printf("                >>____________________________________________________________<<\n");
    printf("\n                >> ======== Enter Your Choice : ");
    scanf("%d",&y);
    if (y==1){
        instruct();
        }
    else if (y==2){
        display();
        }
    else if (y==3){
        n_sale();
        }
    else if (y==4){
        input();
        }
    else if (y==5){
        clean();
        }
    else if (y==6){
        about();
    }
    else if (y==7){
        system("exit");
    }
    else {
        system("cls");
        printf("\n-- Wrong Input --\n\n");
        system("pause");
        system("exit");
    }
}

///Instruction window
int instruct(){
    system("cls");
    printf("\n\n     -----------------------------------------------------\n");
    printf("     > First you need to add items to inventory           \n");
    printf("     > This system can only add 4 items                   \n");
    printf("     > Please add all 4 items                             \n");
    printf("     -----------------------------------------------------\n");
    printf("     -----------------------------------------------------\n");
    printf("     > You can find my information in about section      \n\n\n");
    system("pause");
    main();
}

/// inventory input function
int input(){
    system("cls");
    printf("\n *** You can only add 4 items ***\n\n");
    for (int i=0;i<k;i++){
        printf("\n > Enter Item code : ");
        scanf("%d",&inventory[i][0]);
        printf(" > Enter Item price : ");
        scanf("%d",&inventory[i][1]);
    }
    printf("\n\n  >> Data successfully added  \n\n<< ");
    system("pause");
    main();
}

/// inventory display function
int display(){
    system("cls");
    printf("\n\n            -----------------------------------------\n");
    printf("              | Item code |     -    |   Price   |  \n");
    printf("            -----------------------------------------\n");
    for (int i=0;i<k;i++){
            printf("         ");
            for (int j=0;j<l;j++){
                printf("     |     %d     |   ",inventory[i][j]);
            }
            printf("\n");
            printf("            -----------------------------------------\n\n");
    }
    system("pause");
    main();
}

/// clear inventory
int clean(){
    for (int i=0;i<k;i++){
            for (int j=0;j<l;j++){
                inventory[i][j] = 0;
            }
    }
    main();
}

/// new sell function
int n_sale(){
    system("cls");
    printf("\n    -----------------------------------------------------\n");
    printf("     | Item code |    |   Price   |  \n");
    printf("    -----------------------------------------------------\n");
    for (int i=0;i<k;i++){
            printf("  ");
            for (int j=0;j<l;j++){
                printf("   |     %d     | ",inventory[i][j]);
            }
            printf("\n");
            printf("    -----------------------------------------------------\n");
    }
    printf("\n    > Start new sell ---> \n\n");
    ns_ext();
}

/// my information
int about(){
    system("cls");
    printf("\n\n  -----------------------------------");
    printf("\n  -- About Me -----------------------");
    printf("\n  -----------------------------------");
    printf("\n  -- Name : Suneth Udayanga        --");
    printf("\n  -- Reg No : ITT1819088           --");
    printf("\n  -- Index No : 1045               --");
    printf("\n  -- Email : sunethuw@gmail.com    --");
    printf("\n  -----------------------------------\n\n\n");
    system("pause");
    main();
}

/// new sell operation
int ns_ext(){
    printf("  Press 1 to add item or 0 to end : ");
    scanf("%d",&e);
    if (e == 1){
        printf("\n -----------------------------\n");
        printf("\n > Enter item code : ");
        scanf("%d",&c);
        printf("\n > Enter quantity : ");
        scanf("%d",&d);
        h=0;
        f=0;
        for (int i=0;i<k;i++){
            for (int j=0;j<l;j++){
                p = inventory[i][j];
                if (p==c){
                    h=j+1;
                    f = inventory[i][h];
                    n=n+(f*d);
                    i=k;
                    j=l;
                }
            }
        }
        if (f==0){
            printf("\n  >> Item not found...! <<\n\n");
            system("pause");
            ns_ext();
        }
        else {
            printf("  >> Amount : %d \n\n",n);
            system("pause");
            ns_ext();
        }
    }
    else {
        printf("\n\n Total amount : %d\n\n",n);
        system("pause");
        n=0;
        main();
    }
}




