# NIC Checker in C++

This program is designed to validate the basic information of a person using their CNIC (Computerized National Identity Card). It compares the CNIC number entered by the user through a Data Sheet to check for the District, Division, Province & Code, and then outputs the result.

![ScreenShot](https://raw.githubusercontent.com/asherfraz/NIC-Checker-in-Cpp-FOP/main/screen.png)

## Features

- **Validation of CNIC information**
  - District
  - Division
  - Province
  - Code
- User input through console
- Data comparison with an attached Data Sheet
- Outputs the validation results

## Technologies Used

- **C++ Programming Language**
- **Functions**
- **File Handling**
- **Switch Statements**
- **Arrays**

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC)
- A code editor (e.g., Dev Cpp, Visual Studio Code, etc.)

### Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/asherfraz/NIC-Checker-in-Cpp-FOP-.git
    ```

2. Navigate to the project directory:

    ```bash
    cd NIC-Checker-in-Cpp-FOP-
    ```

3. Open the project in your preferred code editor.

## Usage

1. Ensure the Data Sheet file is in the same directory as the source code.
2. Compile the program:

    ```bash
    g++ -o nic_checker NIC_CARD_CHECKER_Ver_2.cpp
    ```

3. Run the executable:

    ```bash
    ./nic_checker
    ```

4. Enter the CNIC number when prompted.
5. The program will output the district, division, province, and code corresponding to the entered CNIC.

## File Structure

- `NIC_CARD_CHECKER_Ver_2.cpp`: The main source code file containing the program logic.
- `data_sheet.txt` (example name): The data file containing information about districts, divisions, provinces, and codes.

## Contributors

- [Asher Fraz](https://github.com/asherfraz)
- [Hamzah Khalid](https://github.com/HamzahKhalid)
- [Ameer Yousuf Ali Bhatti](https://github.com/ameeryousufalibhatti)
