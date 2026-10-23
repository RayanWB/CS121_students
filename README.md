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
    + string getLastFirst()
    + void setLast First()
    + Address getAddress()
    + void setAddress()
    + Date getBorn()
    + void setBorn()
    + Date getGraduation()
    + void setGraduation()
}
class Address{
    # string street
    # string state
    # string city
    # string zip
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
# void Student::init(string studentString)
```
feed studentString into a string stream ss
define string nameLast
define string nameFirst
define string street
define string city
define string state
define string zip
define string dateBorn
define string dateGraduation
define int credits

with commas as delimiters, feed elements from ss into the defined variables

run setter functions of Student for each variable
```

# void Student::printStudent()
```
print first name and last name
print address street
print city, stat, zip
print birth date
print graduation date
print credit hours
print border

print last name, first name
```

# Address::Address()
```
initialize street
initialize city
initialize state
initialize zip
```
# void Address::init(street, city, state, zip)
```
Address::street = street
Address::city = city
Address::state = state
Address::zip = zip
```

# void Address::printAddress()
```
print street, print line break
print city
print state, comma
print zip
```

# Date::Date()
```
initialize dateString
initialize day
initialize month
initialize year
```

# void Date::printDate()
```
check month
    print month name in words
print day
print comma
print year
print line break
```

# Main file
```
import iostream
import student header
import address header
import date header

void int menu()

int main() {
    open student.csv file
    for each line in file
        create a student on the heap
        feed the current line into a string studentString
        initialize the student using studentString
    close file
    while(keepGoing)
        present menu (return keepGoing)
}
```
