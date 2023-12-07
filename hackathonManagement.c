#hackathon management application
#code by Srinjan
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct event {
    char *name;
    char type[4];
    int no_part;
    int rev;
    char eid[5];
    char *date_and_time;
} *e;

int i;


int decl() {
    e[0].name="BitsAthon";
e[0].rev=1000;
e[0].date_and_time="11-12-23";
e[0].no_part=0;

e[1].name="Lunatic Byte";
e[1].rev=10;
e[1].date_and_time="11-12-23";
e[1].no_part=0;

e[2].name="Mind Hack Zombies";
e[2].rev=20;
e[2].date_and_time="11-12-23";
e[2].no_part=0;

e[3].name="Cobra Tech";
e[3].rev=30;
e[3].date_and_time="12-12-23";
e[3].no_part=0;

e[4].name="Cycle Thugs";
e[4].rev=40;
e[4].date_and_time="12-12-23";
e[4].no_part=0;

e[5].name="Cookie Byte";
e[5].rev=50;
e[5].date_and_time="12-12-23";
e[5].no_part=0;

e[6].name="Ode to Code";
e[6].rev=60;
e[6].date_and_time="13-12-23";
e[6].no_part=0;

e[7].name="Debug Thugs";
e[7].rev=70;
e[7].date_and_time="13-12-23";
e[7].no_part=0;

e[8].name="Troff Junkies";
e[8].rev=80;
e[8].date_and_time="13-12-23";
e[8].no_part=0;

e[9].name="Sinister Ping Bot";
e[9].rev=90;
e[9].date_and_time="14-12-23";
e[9].no_part=0;

e[10].name="Angry Nerds";
e[10].rev=100;
e[10].date_and_time="14-12-23";
e[10].no_part=0;

e[11].name="Soul Celestia";
e[11].rev=110;
e[11].date_and_time="14-12-23";
e[11].no_part=0;

e[12].name="Monad Amry";
e[12].rev=120;
e[12].date_and_time="15-12-23";
e[12].no_part=0;

e[13].name="Bro Code";
e[13].rev=130;
e[13].date_and_time="15-12-23";
e[13].no_part=0;

e[14].name="405 Found";
e[14].rev=140;
e[14].date_and_time="15-12-23";
e[14].no_part=0;

}



int count() {
return 15;
}

int read_c() {
    for (int j = 0; j < i; j++) {
        printf("Event's Serial Number: %d\n",j);
        printf("Event Name: %s\n", e[j].name);
        printf("Number of Participants: %d\n", e[j].no_part);
        printf("Revenue: %d\n", e[j].rev);
        printf("Day and Time: %s\n", e[j].date_and_time);
        printf("*********************\n");
    }
    return 0;
}

void day() {
    int rev = 0 , temp=0;
    for (int i = 0; i < 15;i= i+3) {
        for (int j = 0; j < 15; j++) {

            if (strcmp(e[i].date_and_time, e[j].date_and_time) == 0) {
                temp=e[j].rev*e[j].no_part;
                rev=rev+temp;
            } }
                printf("%s : %d\n",e[i].date_and_time, rev);
                rev=0;


    }
}

void eve() {
    int rev = 0;
    for (int j = 0; j < 15; j++) {
        rev = (e[j].rev * e[j].no_part);
        printf("%s : %d\n", e[j].name, rev);
    }
}

void consolidate() {
    printf("Consolidate Report :\n");


}

void total() {
    int rev = 0;
    for (int j = 0; j < 15; j++) {
        rev = rev + (e[j].rev * e[j].no_part);
    }
    printf("Total Revenue is: %d", rev);
}

int end() {
    printf("\t\tThanks for Trying this program \n\n\t\t  A Program by OMPS113345\n");
    exit(0);
}

int back() {
    printf("\nType \"back\" to go to the previous page\n>>");
    char st[5];
    char b[5] = "back";
    scanf(" %s", st);
    if (strcmp(st, "back") == 0) {
        printf("\n");
    } else {
        printf("Invalid input, program is exiting !!!");
        exit(0);
    }
    return 0;
}

int menu();
int reg() {
    char temp[255];
    printf("Enter Name\n>>");
    scanf(" %s", temp);
    printf("Enter serial no. of event to enroll\n>>");
    int sr;
    scanf(" %d", &sr);
    if(sr<16){
            e[sr-1].no_part++;}
            else{
            printf("Invalid input \nOperation Failed");
            return 1;
    }
    return 0;
}

int start() {
    printf("\n\tHackathon Management\n\n");
    printf("1.Display All Events\n");
    printf("2.Register an Event\n");
    printf("3.Day-wise Revenue\n");
    printf("4.Event-wise Revenue\n");
    printf("5.Total Revenue\n");
    printf("6.Consolidate\n");
    printf("7.Go back to menu\n");
    printf("8.Exit\n");
    printf(">>");
    int ch;
    scanf(" %d", &ch);
    switch (ch) {
        case 1:
            printf("\n\tDisplay all events\n\n");
            read_c();
            printf("\nOperation Completed\n");
            back();
            start();
            break;
        
        case 2:
            printf("\n\tRegister\n\n");
            if (reg() == 0) {
                printf("\nOperation Completed\n");
            }
            back();
            start();
            break;
        
        case 3:
            printf("\n\tDay-wise revenue\n\n");
            day();
            printf("\nOperation Completed\n");
            back();
            start();
            break;
        
        case 4:
            printf("\n\tEvent-wise revenue\n\n");
            eve();
            printf("\nOperation Completed\n");
            back();
            start();
            break;
        
        case 5:
            printf("\n\tTotal Revenue\n\n");
            total();
            printf("\nOperation Completed\n");
            back();
            start();
            break;
        
        case 6:
            printf("\n\tConsolidate\n\n");
            consolidate();
            printf("\nOperation Completed\n");
            back();
            start();
            break;
        
        case 7:
            menu();
            break;
            case 8:
            end();
        
        default:
            printf("Invalid input, program is exiting !!!");
            exit(0);
    }
}

int menu() {
    static int once = 0;
    if (once == 0) {
        printf("Hello fellow user, you have started the Contacts Program !\n");
        once++;
    }
    printf("\n\tMenu\n\n");
    printf("Use the resources below and type 4 to start\n(Enter number to choose the option)\n\n");
    printf("1.Disclaimer\n");
    printf("2.Info\n");
    printf("3.Contact Developer\n");
    printf("4.Start\n");
    printf("5.Exit\n");
    printf(">>");
    int ch;
    scanf(" %d", &ch);
    switch (ch) {
        case 1:
            printf("\n\tDisclaimer\n\n");
            printf("-->This program works the best when\n the user follows instructions\n-->Check Info for instructions");
            back();
            menu();
            break;
        
        case 2:
            printf("\nPRESENTING TO YOU TECHMANIA 2.0!!! THRILLS AND CHILLS WILL FILL UP YOUR MIND AS YOU VENTURE THORUGH THE AWESTRUCKING DOMAIN OF\n\n");
            printf(" TECHNOLOGY AND  FOR ANY HELP YA WE GOT YOUR BACK\n\n");
            //info();
            back();
            menu();
            break;
        
        case 3:
            printf("\n\tContact Developer\n\n");
            printf("For any queries or reporting bugs, contact OMPS/113345\n");
            printf("pratyaykatwa@gmail.com\n");
            printf("7001452752/OMPS\n");
            back();
            menu();
            break;
        
        case 4:
            start();
            break;
        
        case 5:
            end();
        
        default:
            printf("Invalid input, program is exiting !!!");
            exit(0);
    }
}

int main() {
    i = count();
    e = (struct event *)malloc(i * sizeof(struct event));
    if (e == NULL) {
        printf("Memory allocation failed ! Contact ADMIN!!!\n");
        return 1;
    }
    decl();
    menu();
    exit (0);
    free(e);
menu ();

}
