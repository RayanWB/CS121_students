# CS121_students
Heap of students

# UML
```mermaid
class Student{
    - string studentLine
    - string nameFirst
    - string nameLast
    - int credits
    - Address* address
    - Date* dateBorn
    - Date* dateGraduation
    Student()
    ~Student()
}
class Address{
    - string street
    - string state
    - string city
    - string zip
    Address()
    void init(street, city, state, zip)
}
class Date{
    - string dateString
    - int month
    - int day
    - int year
    Date()
}
Student-->Address
Student-->Date
```
