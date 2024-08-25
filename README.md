# Question_Paper_Generator
Overview
The Question_Paper_PDF_Generator is a C++ application designed to automate the creation of question papers in PDF format. This tool allows you to specify the number of easy, medium, and hard questions to be included in the exam paper, and it generates a formatted question paper with the selected questions.

Features
Randomized Question Selection: The tool randomly selects questions from provided files containing easy, medium, and hard questions.
Customizable Question Counts: Users can specify how many easy, medium, and hard questions they want in the final paper.
Automatic Formatting: The generated question paper includes university headers, exam details, and formatted question sections.
Prerequisites
C++ compiler
Standard Template Library (STL) for handling vectors and file streams
Text files containing the questions (easy_questions.txt, medium_questions.txt, hard_questions.txt)
File Structure
easy_questions.txt: Contains easy-level questions with their respective marks.
medium_questions.txt: Contains medium-level questions with their respective marks.
hard_questions.txt: Contains hard-level questions with their respective marks.
How to Use
Prepare the Input Files:

Create three text files: easy_questions.txt, medium_questions.txt, and hard_questions.txt.
Each file should contain questions, with each question followed by its corresponding marks on a new line.
Compile the Program:

Use a C++ compiler to compile the source code.
Example command: g++ Question_Paper_PDF_Generator.cpp -o Question_Paper_PDF_Generator
Run the Program:

Execute the compiled program.
Input the number of easy, medium, and hard questions when prompted.
Generated Output:

The program generates a text file named DSA_Paper.txt containing the formatted question paper.
Example Input Files
easy_questions.txt

css
Copy code
What is a data structure?
1
Define a linked list.
1
medium_questions.txt

sql
Copy code
Explain binary trees with examples.
3
Discuss the applications of stacks.
3
hard_questions.txt

css
Copy code
Implement a hash table from scratch.
5
Design an algorithm for a red-black tree.
5
Future Enhancements
Integrate a PDF library to directly generate and save the question paper as a PDF.
Enhance user interface to allow question file selection through a GUI.
Implement question weight balancing for more precise control over total marks.
Contact
For any issues or feature requests, please contact the project maintainer at [your_email@example.com].
