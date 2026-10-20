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
    + Student()
    + ~Student()
    + void init(string studentString)
    + void printStudent()
}
class Address{
    - string street
    - string state
    - string city
    - string zip
    + Address()
    + void init(street, city, state, zip)
    + void printAddress()
    + string getStreet()
    + void setStreet()
    + string getCity()
    + void setCity()
    + string getState()
    + void setState()
    + string getZip()
    + void setZip()
}
class Date{
    # string dateString
    # int month
    # int day
    # int year
    + Date()
    + void init(string dateString)
    + void splitDate()
    + void printDate()
}
Student-->Address
Student-->Date
```

# Student::Student()
```
initialize studentLine
initialize nameFirst
initialize nameLast
initialize credits
initialize address on heap
initialize dateBorn on heap
initialize dateGraduation on heap
```

# Student::~Student()
```
delete address from heap
delete dateBorn from heap
delete dateGraduation from heap
```

# Address::Address()
```
initialize street
initialize city
initialize state
initialize zip
```

# Date::Date()
```
initialize dateString
initialize day
initialize month
initialize year
```
