#include <bits/stdc++.h>
using namespace std;

struct Question {
    string text;
    int marks;
};

vector<Question> readQuestionsFromFile(const string& filename) {
    vector<Question> questions;
    ifstream file(filename);

    if (file.is_open()) {
        Question q;
        while (getline(file, q.text) && file >> q.marks) {
            file.ignore();
            questions.push_back(q);
        }
        file.close();
    }
    return questions;
}
int main() {
    vector<Question> easyQuestions = readQuestionsFromFile("easy_questions.txt");
    vector<Question> mediumQuestions = readQuestionsFromFile("medium_questions.txt");
    vector<Question> hardQuestions = readQuestionsFromFile("hard_questions.txt");
    
    random_device r;
    mt19937 gen1(r());
    mt19937 gen2(r());
    mt19937 gen3(r());
    shuffle(easyQuestions.begin(),easyQuestions.end(),gen1);
    shuffle(mediumQuestions.begin(),mediumQuestions.end(),gen2);
    shuffle(hardQuestions.begin(),hardQuestions.end(),gen3);

    int e=0,m=0,h=0,e1,m1,h1;
    cout << "Enter total number EASY questions you would like in the paper: ";
    cin >> e1;
    cout << "Enter total number MEDIUM questions you would like in the paper: ";
    cin >> m1;
    cout << "Enter total number HARD questions you would like in the paper: ";
    cin >> h1;
    int sum = (e1*1) + (m1*3) + (h1*5);
    freopen("DSA_Paper.txt","w",stdout);
    cout << endl;

    cout << "                                                                    Nirma University                     " << endl;
    cout << "                                                                Insititute of Technology                    " << endl;
    cout << "                                                          Sessional Examination, November 2023                    " << endl;
    cout << "                                                      B. Tech in CSE & Int. CSE-MBA, Semester - III                    " << endl;
    cout << "                                                                2CS501 - DATA STRUCTURES                   " << endl;
    cout << endl;
    cout << endl;
    cout << "                   Roll No. _________                                                                             Supervisor's Initial _________" <<endl;
    cout << endl;
    cout << "                   Time: 2 hours                                                                                                 Max. Marks: " << sum; 
    cout << endl;
    cout << "                   _____________________________________________________________________________________________________________________________" << endl;
    cout << endl;
    cout << "                   Instructions:" << endl;
    cout << "                                               1. Attempt all the questions." << endl;
    cout << "                                               2. Figures to the right indicate full marks." << endl;
    cout << "                                               3. Assume suitable assumptions if required and specify them." << endl;
    cout << endl;
    cout << "                   Q-1     Answer the following EASY questions." << endl;
    cout << endl;
    for(const Question& q : easyQuestions) {
        if(e>e1) {
            break;
        }
        cout << "                           " << q.text << "     " << "[" << q.marks << "]" << endl;
        cout << endl;  
        e++; 
    }
    cout << "                   Q-2     Answer the following MEDIUM questions." << endl;
    cout << endl;
    for(const Question& q : mediumQuestions) {
        if(m>m1) {
            break;
        }
        cout << "                           " << q.text << "     " << "[" << q.marks << "]" << endl;
        cout << endl;   
        m++; 
    }
    cout << endl;
    cout << "                   Q-3     Answer the following HARD questions." << endl;
    cout << endl;
    for(const Question& q : hardQuestions) {
        if(h>h1) {
            break;
        }
        cout << "                           " << q.text << "     " << "[" << q.marks << "]" << endl;  
        cout << endl;
        h++; 
    }
    cout << endl;
    cout << "                   _____________________________________________________________________________________________________________________________" << endl;
    cout << endl;
    cout << "                                                                    x End Of Paper X                     " << endl;
    return 0;
}
