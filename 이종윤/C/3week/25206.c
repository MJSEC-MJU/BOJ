#include <stdio.h>
#include <string.h>

#define MAX_SUBJECTS 20


double get_grade(const char *grade) {
    if (strcmp(grade, "A+") == 0) return 4.5;
    if (strcmp(grade, "A0") == 0) return 4.0;
    if (strcmp(grade, "B+") == 0) return 3.5;
    if (strcmp(grade, "B0") == 0) return 3.0;
    if (strcmp(grade, "C+") == 0) return 2.5;
    if (strcmp(grade, "C0") == 0) return 2.0;
    if (strcmp(grade, "D+") == 0) return 1.5;
    if (strcmp(grade, "D0") == 0) return 1.0;
    if (strcmp(grade, "F") == 0) return 0.0;
    return -1;  
}

int main(void) {
    char subject[51];
    double credit;
    char grade[3];
    
    double total_points = 0.0;
    double total_credits = 0.0;
    
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        scanf("%s %lf %s", subject, &credit, grade);
        
        // P 등급인 경우는 계산에서 제외
        if (strcmp(grade, "P") == 0) {
            continue;
        }
        
        double grade_point = get_grade(grade);
        total_points += credit * grade_point;
        total_credits += credit;
    }
    
    double gpa = total_points / total_credits;
    printf("%.4lf\n", gpa);
    
    return 0;
}
