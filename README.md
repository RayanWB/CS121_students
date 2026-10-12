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
    + void init(address, dateBorn, dateGraduation)
}
class Address{
    - string street
    - string state
    - string city
    - string zip
    + Address()
    + void init(street, city, state, zip)
}
class Date{
    # string dateString
    # int month
    # int day
    # int year
    + Date()
    + void splitDate()
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
