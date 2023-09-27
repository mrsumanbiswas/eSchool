#ifdef person_HPP
#define person_HPP

#include <string>

/**
* @brief Represents a `person` object
*/

/**
 * @brief Represents basic personal information for a person.
 */
struct PersonalInfo {
    std::string name;            ///< The full name of the person.
    std::string dateOfBirth;     ///< The date of birth of the person (e.g., "YYYY-MM-DD").
    std::string gender;          ///< The gender of the person (e.g., Male, Female, Non-binary).
    int age;                     ///< The age of the person.
    std::vector<std::string> languagesSpoken; ///< List of languages spoken by the person.
    std::string citizenship;     ///< The citizenship status or country of origin.
    int uniqueID;                ///< Unique identifier for the person.
};

/**
 * @brief Represents contact information for a person.
 */
struct ContactInfo {
    std::string email;
    std::string mobilePhoneNumber;
    std::string homePhoneNumber;
    std::string address;
};

/**
 * @brief Represents emergency contact information for a person.
 */
struct EmergencyContact {
    std::string name;
    std::string phoneNumber;
};

/**
 * @brief Represents personal interests and hobbies of a person.
 */
struct Interests {
    std::vector<std::string> hobbies; ///< List of hobbies.
    std::vector<std::string> interests; ///< List of interests.
};










class person{
public:
  /**
  * @brief Default constructor for the Person class.
  */
  Person(); // Default constructor

  /**
  * @brief Parameterized constructor for the Person class.
  * @param name The name of the person.
  * @param age The age of the person.
  * @param ID The unique person ID.
  */
  Person(const std::string* name, int age, int ID);

  /**
   * @brief Destructor for the Person class.
   */
  ~Person();

  /**
   * @brief Get the name of the person.
   * @return The name of the person as a string.
   */
  std::string getName() const;

  /**
   * @brief Get the age of the person.
   * @return The age of the person as an integer.
   */
  int getAge() const;

  /**
   * @brief Get the person ID.
   * @return The person ID as an integer.
   */
  int getPersonID() const;

  /**
   * @brief Set the name of the person.
   * @param name The new name for the person.
   */
  void setName(const std::string& name);

  /**
   * @brief Set the age of the person.
   * @param age The new age for the person.
   */
  void setAge(int age);

  /**
   * @brief Set the person ID.
   * @param ID The new person ID.
   */
  void setPersonID(int ID);

  /**
   * @brief Print information about the person.
   */
  void printInfo() const;



private:
  std::string name; ///< The name of the person.
  int age;          ///< The age of the person.
  int ID;    ///< The uniqe person ID.

}


#endif // person_HPP
