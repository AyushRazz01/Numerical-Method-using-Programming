A C++ project that implements numerical methods like Bisection, Newton-Raphson, Regula Falsi, Secant Method, and Gaussian methods:

📘 Numerical Methods in C++
This C++ project implements a collection of core Numerical Analysis techniques used for solving non-linear equations and systems of linear equations. Each algorithm is implemented for educational and practical purposes, demonstrating different approaches to finding roots and solving matrices.

🧮 Methods Implemented
Root-Finding Methods:
Bisection Method: A bracketing method for solving non-linear equations using interval halving.

Regula Falsi (False Position): A refinement of the Bisection Method using linear interpolation.

Newton-Raphson Method: A powerful open method using derivatives for rapid convergence.

Secant Method: Similar to Newton-Raphson but avoids direct derivative calculation.

Linear Algebra Methods:
Gauss Elimination: A direct method to solve a system of linear equations via forward elimination and back substitution.

Gauss-Jordan Elimination: An extended form of Gauss Elimination that reduces the matrix to reduced row echelon form.

Gauss-Jacobi Iteration: An iterative method for solving systems of linear equations using an initial guess.

Gauss-Seidel Iteration: A faster iterative method that updates values as soon as they are computed.

🛠️ Technologies Used
Language: C++

IDE: Code::Blocks / Visual Studio / g++

Console-based input/output

📂 Project Structure
bash
Copy
Edit
/numerical-methods-cpp
│
├── bisection.cpp
├── newton_raphson.cpp
├── regula_falsi.cpp
├── secant.cpp
├── gauss_elimination.cpp
├── gauss_jordan.cpp
├── gauss_jacobi.cpp
├── gauss_seidel.cpp
└── README.md
🚀 How to Run
Compile any file using a C++ compiler:

bash
Copy
Edit
g++ bisection.cpp -o bisection
./bisection
Follow the input prompts and get results.

📚 Applications
Engineering and scientific computation

Root solving in control systems

Matrix solving in structural analysis

Educational use in numerical analysis courses
