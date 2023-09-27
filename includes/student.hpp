#ifdef STUDENT_HPP
#define STUDENT_HPP

#include <string>

/**
* @brief Represents a `student` object
*/

class student{
public:
  /**
  * @brief Default constructor for the Student class.
  */
  Student(); // Default constructor

  /**
  * @brief Parameterized constructor for the Student class.
  * @param name The name of the student.
  * @param age The age of the student.
  * @param studentID The unique student ID.
  */
  Student(const std::string* name, int age, int studentID);

  /**
   * @brief Destructor for the Student class.
   */
  ~Student();

  
private:
  std::string name; ///< The name of the student.
  int age;          ///< The age of the student.
  int studentID;    ///< The uniqe student ID.

}


#endif // STUDENT_HPP
