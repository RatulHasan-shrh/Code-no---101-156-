#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter day month year: ");
 scanf("%d %d %d", &day, &month, &year);

            printf("\nDifferent Date Formats:\n");

    printf("DD/MM/YYYY  : %02d/%02d/%04d\n", day, month, year);
     printf("MM-DD-YYYY  : %02d-%02d-%04d\n", month, day, year);
      printf("YYYY.MM.DD  : %04d.%02d.%02d\n", year, month, day);
        printf("DD-Mon-YYYY : %02d-", day);

    switch (month) {
                 case 1:  printf("Jan"); break;
                  case 2:  printf("Feb"); break;
                     case 3:  printf("Mar"); break;
                      case 4:  printf("Apr"); break;
                        case 5:  printf("May"); break;
                         case 6:  printf("Jun"); break;
                            case 7:  printf("Jul"); break;
      
        case 8:  printf("Aug"); break;
       case 9:  printf("Sep"); break;
     case 10: printf("Oct"); break
   case 11: printf("Nov"); break;
 case 12: printf("Dec"); break;
    }
  

    printf("-%04d\n", year);

    return 0;
}
