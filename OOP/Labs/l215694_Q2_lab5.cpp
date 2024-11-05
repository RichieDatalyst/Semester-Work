#include <iostream>
using namespace std;

class Task {
private:
    string title;
    string description;
    bool isComplete;

public:
    Task(string taskTitle, string taskDescription) {
        title = taskTitle;
        description = taskDescription;
        isComplete = false;
    }

    void Complete() {
        isComplete = true;
    }

    void Incomplete() {
        isComplete = false;
    }

    void PrintStatus() {
        cout << "Task : " << title << endl;
        cout << "Description : " << description << endl;
        cout << "Completion Status : ";
        if (isComplete) {
            cout << "Complete";
        } else {
            cout << "Incomplete";
        }
        cout << endl;
    }
};
int main() {
    Task task("Project", "Complete the first phase");
    // Declare a pointer to a member function of the Task class
    void (Task::*completionPtr)();
    int userInput;
    cout << "Enter 0 to mark the task as incomplete or 1 to mark it as complete : ";
    cin >> userInput;
    if (userInput == 0) {
        completionPtr = &Task::Incomplete;
    } else if (userInput == 1) {
        completionPtr = &Task::Complete;
    } else {
        cout << "Invalid input. Task status remains unchanged." << endl;
        return 0;
    }
    // Call the member function pointed to by completionPtr to update the task's completion status
    (task.*completionPtr)();
    task.PrintStatus();
    return 0;
}
