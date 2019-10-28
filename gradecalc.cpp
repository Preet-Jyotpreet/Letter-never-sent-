#include"gradecalc.hpp"

void gradeCalc(int* pointArr, int* weightArr, StudentInfo* student_info,
        const unsigned int SCORESIZE, const unsigned int STUSIZE) {
    std::cout<<"TOTAL SCORES\n";
    for(unsigned int i=0; i< STUSIZE; i++) {
        std::cout << student_info[i].studentId << " " << student_info[i].studentName << " ";
        double finalScore = 0;
        for (unsigned int j=0; j<SCORESIZE; j++){
            finalScore += (double(student_info[i].scores[j])/double(pointArr[j])) *
                double(weightArr[j]);
        }
        std::cout<< finalScore << std::endl;
        student_info[i].stuFinalScore = finalScore;

    }







}
