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

  /**
   * @brief Get the name of the student.
   * @return The name of the student as a string.
   */
  std::string getName() const;

  /**
   * @brief Get the age of the student.
   * @return The age of the student as an integer.
   */
  int getAge() const;

  /**
   * @brief Get the student ID.
   * @return The student ID as an integer.
   */
  int getStudentID() const;

  /**
   * @brief Set the name of the student.
   * @param name The new name for the student.
   */
  void setName(const std::string& name);

  /**
   * @brief Set the age of the student.
   * @param age The new age for the student.
   */
  void setAge(int age);

  /**
   * @brief Set the student ID.
   * @param studentID The new student ID.
   */
  void setStudentID(int studentID);

  /**
   * @brief Print information about the student.
   */
  void printInfo() const;



private:
  std::string name; ///< The name of the student.
  int age;          ///< The age of the student.
  int studentID;    ///< The uniqe student ID.

}


#endif // STUDENT_HPP
