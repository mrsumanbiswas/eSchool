#ifdef PERSON_HPP
#define PERSON_HPP

#include <string>

/**
 * @brief Represents basic personal information for a person.
 */
struct PersonalInfo {
    std::string name;            ///< The full name of the person.
    std::string dateOfBirth;     ///< The date of birth of the person (e.g., "DD-MM-YYYY").
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

/**
* @brief Represents a `person` object
*/
class Person{
public:
  /**
  * @brief Default constructor for the Person class.
  */
  Person(); // Default constructor

  /**
   * @brief Destructor for the Person class.
   */
  ~Person();

private:
  PersonalInfo personalInfo; ///< Personal information of the person.
  ContactInfo contactInfo; ///< Contact information of the person.
  EmergencyContact emergencyContact; ///< Emergency contact of the person.
  Interests interests; ///< Interests of the person.   
}


#endif // PERSON_HPP
