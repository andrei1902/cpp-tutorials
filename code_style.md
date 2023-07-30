# Naming convention

## Files
- **Good**: `employee_record.cpp` – Descriptive and uses lower case letters with underscores.
- **Bad**: `ER.cpp` – Not descriptive and uses abbreviations.

### Variables
- **Good**: `employee_age` – Descriptive, uses lower case letters with underscores.
- **Bad**: `e1` – Single character, not descriptive.

### Constants
- **Good**: `MAX_EMPLOYEES` – Descriptive, uses upper case letters with underscores.
- **Bad**: `maxe` – Not descriptive and does not follow the convention.

### Classes
- **Good**: `EmployeeRecord` – Descriptive, starts with a capital letter, and uses CamelCase.
- **Bad**: `employee` – Does not start with a capital letter. 
- **Bad**: `Employees` – Uses plural form, which should be avoided for class names.

### Functions
- **Good**: `CalculateSalary` – Descriptive, starts with a capital letter, and uses CamelCase.
- **Bad**: `calc` – Not descriptive and does not use CamelCase.

### Namespaces
- **Good**: `payroll_system` – Descriptive, uses lower case letters with underscores.
- **Bad**: `PS` – Not descriptive and uses abbreviations.

### What To Use
- Nouns: For classes, objects, and variables. Example: `EmployeeRecord employee_record;`
- Verbs: For functions. Example: `CalculateSalary();`

### What Not To Use
- Plural form: For classes. **Bad**: `class Employees {...};`
- Abbreviations: Can be confusing. **Bad**: `int eN; // employee Number`
