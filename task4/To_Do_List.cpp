#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Task
{
private:
    string task;
    string status;

public:
    Task() {}
    Task(string t) : task(t), status("Pending") {}
    void setTask(string t) { task = t; }
    void setStatus(string s) { status = s; }
    string getTask() { return task; }
    string getStatus() { return status; }
};

class ToDoList
{
private:
    vector<Task> list;

public:
    void viewTask();
    void addTask(string t);
    void markAsDone(int n);
    void removeTask(int n);
};

int main()
{
    ToDoList Aditya;
    int choice;
    string t, s;
    cout << "To-Do List Program by Aditya" << endl;
    do
    {
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cin.ignore();
            cout << "Enter your task : ";
            getline(cin, t);
            Aditya.addTask(t);
            break;
        }
        case 2:
        {
            Aditya.viewTask();
            break;
        }
        case 3:
        {
            int n;
            cout << "Enter the task number to mark as done : ";
            cin >> n;
            Aditya.markAsDone(n);
            break;
        }
        case 4:
        {
            int n;
            cout << "Enter the task to remove : ";
            cin >> n;
            Aditya.removeTask(n);
            break;
        }
        case 5:
        {
            cout << "Exiting..." << endl;
            break;
        }
        default:
            cout << "Wrong Choice" << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}

void ToDoList::addTask(string t)
{
    Task task(t);
    list.push_back(task);
    viewTask();
}
void ToDoList::viewTask()
{
    int size = list.size();
    if (size == 0)
    {
        cout << "List is Empty" << endl;
        return;
    }
    // string t, s;
    cout << "To-Do Lists :" << endl;
    cout << "-----------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        // t = list[i].getTask();
        // s = list[i].getStatus();
        // cout << t << "\t" << s << endl;
        cout << i << ". " << list[i].getTask() << "\t" << list[i].getStatus() << endl;
    }
    cout << "-----------------------------------" << endl;
}
void ToDoList::markAsDone(int n)
{
    int size = list.size();
    if (n < 0 || n > size)
    {
        cout << "Wrong Index" << endl;
        return;
    }
    list[n].setStatus("Completed");
    viewTask();
}
void ToDoList::removeTask(int n)
{
    int size = list.size();
    if (n < 0 || n > size)
    {
        cout << "Wrong Index" << endl;
        return;
    }
    list.erase(list.begin() + n);
    viewTask();
}
