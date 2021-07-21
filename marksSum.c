# C-HackerRank-Solutions-Medium-Level-
HackerRank Medium Level Solution In C Language


//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int total=0,i=0;
  if(gender=='g'){
      i++;
  }
  for(;i<number_of_students;i=i+2){
      total=total+marks[i];
  }
  return total;
}


