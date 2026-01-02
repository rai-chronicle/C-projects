#include <stdio.h>

/* ===================== CONSTANTS ===================== */

#define MAX_FEATURES 5
#define MAX_PROJECTS 5
#define MAX_FOCUS 5

/* ===================== STRUCTURES ===================== */

typedef struct {
    const char *name;
    const char *features[MAX_FEATURES];
    int feature_count;
} Project;

typedef struct {
    const char *level;
    const char *focus[MAX_FOCUS];
    int focus_count;
    Project projects[MAX_PROJECTS];
    int project_count;
} Category;

/* ===================== DATA ===================== */

Category categories[] = {

    {
        "Beginner",
        { "basics", "loops", "arrays", "functions" },
        4,
        {
            {
                "Simple Calculator",
                {
                    "Supports addition, subtraction, multiplication, division",
                    "Menu-driven program"
                },
                2
            },
            {
                "Number Guessing Game",
                {
                    "Random number generation",
                    "Limited attempts",
                    "Score calculation"
                },
                3
            },
            {
                "Student Grade Calculator",
                {
                    "Input marks",
                    "Calculate average",
                    "Assign grade and result"
                },
                3
            },
            {
                "Palindrome / Armstrong Number Checker",
                {
                    "Check palindrome numbers",
                    "Check Armstrong numbers",
                    "Uses loops and conditionals"
                },
                3
            },
            {
                "ATM Simulation",
                {
                    "PIN verification",
                    "Balance check",
                    "Deposit and withdraw"
                },
                3
            }
        },
        5
    },

    {
        "Intermediate",
        { "structures", "pointers", "file handling" },
        3,
        {
            {
                "Student Management System",
                {
                    "Add student records",
                    "Update student records",
                    "Delete student records",
                    "Store data in files"
                },
                4
            },
            {
                "Library Management System",
                {
                    "Issue books",
                    "Return books",
                    "Track availability using files"
                },
                3
            },
            {
                "Bank Management System",
                {
                    "Create account",
                    "Deposit money",
                    "Withdraw money",
                    "Transaction history"
                },
                4
            },
            {
                "Contact Management System",
                {
                    "Save contacts to a file",
                    "Search contacts by name",
                    "Search contacts by number"
                },
                3
            },
            {
                "Quiz Application",
                {
                    "Load MCQs from a file",
                    "Score calculation"
                },
                2
            }
        },
        5
    },

    {
        "Advanced",
        { "data structures", "algorithms", "modular design" },
        3,
        {
            {
                "Snake Game (Console)",
                {
                    "Grid-based movement",
                    "Score tracking"
                },
                2
            },
            {
                "File Compression Tool",
                {
                    "Basic Huffman Encoding"
                },
                1
            },
            {
                "Mini Compiler / Interpreter",
                {
                    "Tokenize input",
                    "Simple expression evaluation"
                },
                2
            },
            {
                "Text Editor (Console-based)",
                {
                    "Open text files",
                    "Edit text",
                    "Save files"
                },
                3
            },
            {
                "Operating System Process Scheduler",
                {
                    "FCFS scheduling algorithm",
                    "SJF scheduling algorithm",
                    "Round Robin scheduling algorithm"
                },
                3
            }
        },
        5
    }
};

int CATEGORY_COUNT = 3;

/* ===================== FUNCTIONS ===================== */

void printProjects(void) {
    for (int i = 0; i < CATEGORY_COUNT; i++) {
        printf("\n=== %s Projects ===\n", categories[i].level);

        printf("Focus Areas: ");
        for (int f = 0; f < categories[i].focus_count; f++) {
            printf("%s", categories[i].focus[f]);
            if (f < categories[i].focus_count - 1)
                printf(", ");
        }
        printf("\n\n");

        for (int p = 0; p < categories[i].project_count; p++) {
            printf("• %s\n", categories[i].projects[p].name);

            for (int k = 0; k < categories[i].projects[p].feature_count; k++) {
                printf("   - %s\n", categories[i].projects[p].features[k]);
            }
            printf("\n");
        }
    }
}

/* ===================== MAIN ===================== */

int main(void) {
    printProjects();
    return 0;
}
