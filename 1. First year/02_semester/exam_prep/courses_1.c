#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Course {
    long long id;
    char name[129];
    char lecturer[65];
    char startDate[11];
    int studentsCount;
} course;

typedef struct Student {
    char name[65];
    long long facultyNumber;
    int coursesCount;
    int coursesNumbers[10];
} student;

int saveCourses(course *courses, int numCourses, char lecturer[65], char startDate[11], char endDate[11]) {
    FILE *textFile = fopen("course_info.txt", "w");

    if (textFile == NULL) {
        printf("Error opening the txt file");
        return 1;
    }

    int startMonth, startDay, startYear;
    int endMonth, endDay, endYear;

    sscanf(startDate, "%d.%d.%d", &startDay, &startMonth, &startYear);
    sscanf(endDate, "%d.%d.%d", &endDay, &endMonth, &endYear);

    int start = startYear * 10000 + startMonth * 100 + startDay;
    int end = endYear * 10000 + endMonth * 100 + endDay;

    int allCourses = 0;
    for (int i = 0; i < numCourses; i++) {
        int courseMonth, courseDay, courseYear;

        sscanf(courses[i].startDate, "%d.%d.%d", &courseMonth, &courseDay, &courseYear);
        int courseDateNum = courseYear * 10000 + courseMonth * 100 + courseDay;

        if (strcmp(courses[i].lecturer, lecturer) == 0 && courseDateNum >= start && coursesDateNum <= end) {
            fprintf(textFile, "%lld:%s:%s-%d\n", courses[i].id, courses[i].name, courses[i].startDate, courses[i].studentsCount);
            allCourses++;
        }
    }

    fclose(textFile);
    return allCourses;
}

int enrollStudentInCourse(course *courses, int numCourses, student *students, int numStudents, long long facultyNum, long long courseId) {
    int courseIdx = -1;
    int studentIdx = -1;

    for (int i = 0; i < numCourses; i++) {
        if (courses[i].id == courseId) {
            courseIdx = i;
            break;
        }
    }

    for (int i = 0; i < numStudents; i++) {
        if (students[i].facultyNumber == facultyNum) {
            studentIdx = i;
            break;
        }
    }

    if (courseIdx == -1 || studentIdx == -1) {
        return -1;
    }

    for (int i = 0; i < students[studentIdx].coursesCount; i++) {
        if (students[studentIdx].coursesNumbers[i] == courseId) {
            printf("The student has already enrolled in this course");
            return 0;
        }
    }

    if (courses[courseIdx].studentsCount >= 30) {
        printf("There is no more space in this course.");
        return 0;
    }

    if (students[studentIdx].coursesCount >= 10) {
        printf("The student has already enrolled in 10 other courses");
        return 0;
    }

    courses[courseIdx].studentsCount++;

    students[studentIdx].coursesNumbers[students[studentIdx].coursesCount] = courseId;
    students[studentIdx].coursesCount++;

    FILE *binaryFile = fopen("course_student.bin", "ab");

    if (binaryFile == NULL) {
        printf("Cannot open binary file.");
        return -1;
    }

    fwrite(&courseId, sizeof(long long), 1, binaryFile);
    fwrite(&facultyNum, sizeof(long long), 1, binaryFile);

    fclose(binaryFile);

    return 1;
}

void deleteCourses(course **courses, int *numCourses, char date[11]) {
    int day, month, year;

    sscanf(date, "%d.%d.%d", &day, &month, &year);
    int givenDateNum = year * 10000 + month * 100 + day;

    int counter = 0;
    for (int i = 0; i < *numCourses; i++) {
        int courseDay, courseMonth, courseYear;

        sscanf((*courses)[i].startDate, "%d.%d.%d", &courseDay, &courseMonth, &courseYear);
        int courseDateNum = courseYear * 10000 + courseMonth * 100 + courseDay;

        if (courseDateNum >= givenDateNum) {
            (*courses)[counter] = (*courses)[i];
            counter++;
        }
    }

    if (counter == *numCourses) {
        printf("No courses found.\n");
    } else {
        *numCourses = counter;
        *courses = realloc(*courses, (*numCourses) * sizeof(course));
    }
}

int main() {
    int coursesNum, studentsNum;

    printf("Enter courses num: ");
    scanf("%d", &coursesNum);

    if (coursesNum <= 0) {
        printf("Invalid number of courses");
        return 1;
    }

    printf("Enter students num: ");
    scanf("%d", &studentsNum);

    if (studentsNum <= 0) {
        printf("Invalid number of students");
        return 1;
    }

    course *courses = malloc(coursesNum * sizeof(course));

    if (courses == NULL) {
        printf("Memory for courses failed.");
        return 1;
    }

    for (int i = 0; i < coursesNum; i++) {
        printf("Enter course ID: ");
        scanf("%lld", &courses[i].id);

        getchar();

        printf("Enter course name: ");
        fgets(courses[i].name, 129, stdin);

        printf("Enter lecturer: ");
        fgets(courses[i].lecturer, 65, stdin);

        printf("Enter start date: ");
        scanf("%10s", courses[i].startDate);
        getchar();

        courses[i].studentsCount = 0;
    }

    student *students = malloc(studentsNum * sizeof(student));

    if (students == NULL) {
        printf("Memory for students failed.");
        return 1;
    }

    for (int i = 0; i < studentsNum; i++) {
        printf("Enter student name: ");
        fgets(students[i].name, 65, stdin);

        printf("Enter student faculty number: ");
        scanf("%lld", &students[i].facultyNumber);
        getchar();

        students[i].coursesCount = 0;

        for (int j = 0; j < 10; j++) {
            students[i].coursesNumbers[j] = 0;
        }
    }

    free(courses);
    free(students);

    return 0;
}
