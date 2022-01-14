#include "stdio.h"

enum Name {
    SUPER_MARIO,
    LUIGI,
    PIKACHU,
    YOSHI
};

enum Color {
    BLACK,
    BROWN,
    BLUE,
    GREEN
};

enum Occupation {
    PLUMBER,
    POOPER,
    BLOOPER,
    BEING_STOOPID,
};

struct Person {
    char name;
    char eye_color;
    char occupation;
    int age;
    int height;
};

char *name_to_string(enum Name name) {
    switch (name)
    {
        case SUPER_MARIO:
            return "Super Mario";
        case LUIGI:
            return "Luigi";
        case PIKACHU:
            return "Pikachu";
        case YOSHI:
            return "Yoshi";
    }
};

char *color_to_string(enum Color color) {
    switch (color)
    {
        case BLACK:
            return "Black";
        case BROWN:
            return "Brown";
        case BLUE:
            return "Blue";
        case GREEN:
            return "Green";
    }
};

char *occupation_to_string(enum Occupation occupation) {
    switch (occupation)
    {
        case PLUMBER:
            return "Plumber";
        case POOPER:
            return "Pooper";
        case BLOOPER:
            return "Blooper";
        case BEING_STOOPID:
            return "Being Stoopid";
    }
};

char main() {
    struct Person people[] = {
        {SUPER_MARIO, BROWN, PLUMBER, 30, 5},
        {LUIGI, BROWN, PLUMBER, 30, 6},
        {PIKACHU, BLACK, BEING_STOOPID, 2, 1}
    };
    for (int i = 0; i < 3; i++) {
        struct Person person = people[i];
        printf("%s \n - Eye Color: %s\n - Occupation: %s\n - Age: %d\n",
            name_to_string(person.name), color_to_string(person.eye_color),
            occupation_to_string(person.occupation), person.age);
    };
}
