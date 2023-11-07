#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

// instructions page
void aboutApplication()
{
  cout << "\t ** ____ ABOUT THE APPLICATION ____ **" << endl;
  cout << "Welcome to our Password Management Application! This application is designed to help you securely store and manage your passwords and sensitive information. We understand the importance of keeping your online accounts safe, and our tool is built with your security and convenience in mind." << endl;

  cout << endl
       << "Why Choose Our Password Manager:" << endl;

  cout << "1. Security First: Your security is our top priority. We use industry-standard encryption techniques to safeguard your sensitive information." << endl;
  cout << "2. Convenience: Say goodbye to forgotten passwords. Our password manager helps you generate, store, and manage your passwords hassle-free." << endl;
  cout << "3. Peace of Mind: Rest easy knowing your online accounts are protected. No need to worry about weak or duplicated passwords anymore." << endl;

  cout << "4.User Privacy: We respect your privacy. Your data is stored securely, and we do not have access to your stored passwords." << endl;

  cout << endl
       << "Contact Us:" << endl;
  cout << "Have questions or feedback? We'd love to hear from you! Contact our support team at support@passwordmanager.com for assistance or inquiries." << endl;

  cout << endl
       << "Thank you for choosing our Password Management Application. We are committed to providing you with a reliable and secure solution for your password management needs. " << endl
       << endl;
  return;
}

void howToUse()
{
  cout << "\t ** ____ HOW TO USE THE APPLICATION ____ **" << endl;

  cout << "Welcome to our Password Management Application! Here's a step-by-step guide on how to make the most out of our secure and convenient tool: " << endl;

  cout << endl
       << "**1. Login or Create an Account:**" << endl;

  cout << "  - Login: If you already have an account, click on the 'Login' button. Enter your username and password to access your password vault." << endl;

  cout << "   - Create a New Account: If you are a new user, click on the 'Create Account' button. Provide a unique username and a strong password. Remember, your password is your first line of defense. Choose a combination of uppercase and lowercase letters, numbers, and special characters to create a robust password. " << endl;

  cout << endl
       << "**2. Manage Your Passwords:**" << endl;

  cout << "- Create a New Password: Once logged in, click on the 'Add New Password' button. Provide the necessary details, such as the website URL, username, and a strong, unique password. If you need help creating a secure password, you can use our built-in password generator." << endl;

  cout << " - Remove a Password: If you want to remove a stored password, select the password entry you wish to delete and click on the 'Remove' button. Confirm your action to permanently delete the password from your vault. " << endl;

  cout << "   - Update an Existing Password: To update an existing password (for example, if you've changed the password for one of your online accounts), select the password entry, click on the 'Edit' button, and make the necessary changes. Remember to save your edits. " << endl;

  cout << endl
       << "**3. Stay Secure:**" << endl;

  cout << "   - Use the Password Strength Meter: When creating or updating passwords, pay attention to the password strength meter. Aim for a strong password to enhance your account security. The meter will provide feedback on the strength of your password and offer suggestions for improvement. " << endl;

  cout << "- Regularly Update Your Passwords: For added security, consider updating your passwords regularly, especially for critical accounts like email and banking services. Our application makes it easy to update your stored passwords whenever you need to." << endl;

  cout << endl
       << "That's it! By following these simple steps, you can effectively manage your passwords, keep your accounts secure, and enjoy peace of mind while browsing online. If you have any questions or encounter any issues, don't hesitate to contact our support team at support@passwordmanager.com. \n Thank you for choosing our Password Management Application! " << endl;

  return;
}

// ENCRYPTION AND DECRYPTION USING CAESAR CYPHER

string encryptCaesarCipher(const string &password, int shift)
{
  string encryptedPassword = password;

  for (char &character : encryptedPassword)
  {
    if (isalpha(character))
    {
      char base = isupper(character) ? 'A' : 'a';
      character = (character - base + shift) % 26 + base;
    }
  }

  return encryptedPassword;
}

string decryptCaesarCipher(const string &encryptedPassword, int shift)
{
  return encryptCaesarCipher(encryptedPassword, 26 - shift);
}

// STORING THE PASSWORDS ENTERED BY THE USER

struct PasswordEntry
{
  string website;
  string username;
  string password;
};

vector<PasswordEntry> passwordDatabase;

void saveToCSV(const string &loggeduser, const vector<PasswordEntry> &entries)
{
  ofstream file(loggeduser + "_data.csv");
  if (!file.is_open())
  {
    cout << "Error opening " << loggeduser << " database for writing." << endl;
    return;
  }

  for (const auto &entry : entries)
  {
    file << entry.website << "," << entry.username << "," << entry.password << "\n";
  }

  file.close();
}

vector<PasswordEntry> readFromCSV(const string &loggeduser)
{
  vector<PasswordEntry> userEntries;
  ifstream file(loggeduser + "_data.csv");
  if (!file.is_open())
  {
    cout << "Error opening " << loggeduser << " database for reading." << endl;
    return userEntries;
  }

  string line;
  while (getline(file, line))
  {
    stringstream ss(line);
    string website, uname, pwd;
    getline(ss, website, ',');
    getline(ss, uname, ',');
    getline(ss, pwd, ',');
    PasswordEntry entry = {website, uname, pwd};
    userEntries.push_back(entry);
  }

  file.close();
  return userEntries;
}

void addPasswordEntry(const string &loggeduser, const string &website, const string &username, const string &password)
{
  string pass = encryptCaesarCipher(password, 5);
  PasswordEntry entry = {website, username, pass};
  passwordDatabase.push_back(entry);
  saveToCSV(loggeduser, passwordDatabase);
}

void viewPasswordEntries(const string &loggeduser, const string &website, const string &username)
{
  vector<PasswordEntry> userEntries = readFromCSV(loggeduser);
  string pass;
  int flag=0;
  for (const auto &entry : userEntries)
  {
    if (entry.website == website)
    {
      cout << "Website: " << entry.website << "\n";
      cout << "Username: " << entry.username << "\n";
      pass = decryptCaesarCipher(entry.password, 5);
      cout << "Password: " << pass << "\n\n";
      flag+=1;
    }
  }
  if (flag==0){
    cout<<"The entry of the website named "<<website<<" not found!"<<endl;
  }
}

void updatePasswordEntry(const string &loggeduser, const string &website, const string &newPassword, const string &username)
{
  vector<PasswordEntry> userEntries = readFromCSV(loggeduser);
  for (auto &entry : userEntries)
  {
    if (entry.website == website)
    {
      entry.password = encryptCaesarCipher(newPassword, 5);
      saveToCSV(loggeduser, userEntries);
      return;
    }
  }
}

void deletePasswordEntry(const string &loggeduser, const string &website, const string &username)
{
  vector<PasswordEntry> userEntries = readFromCSV(username);
  userEntries.erase(remove_if(userEntries.begin(),
                              userEntries.end(),
                              [website](const PasswordEntry &entry)
                              { return entry.website == website; }),
                    userEntries.end());
  saveToCSV(username, userEntries);
}

// frontend of the application
void dashboard(string loggedUser)
{
  int choice;
  string website, username, password;
  string response = "yes";
  string loggeduser = loggedUser;

  while (response == "yes" || response == "YES" || response == "sure" || response == "y")
  {

    cout << endl
         << "==========================================================" << endl;
    cout << "\t ** ____ PASSWORD MANAGER ____ **" << endl;
    cout << "\t\t1. Add password" << endl;
    cout << "\t\t2. View password" << endl;
    cout << "\t\t3. Update password" << endl;
    cout << "\t\t4. Delete password" << endl;
    cout << "\t\t5. Exit" << endl;
    cout << "\t\t111. About this application" << endl;
    cout << "\t\t222. How to use this application" << endl;
    cout << "==========================================================" << endl
         << endl;

    cout << ">> Enter your choice: ";
    cin >> choice;
    cout << endl
         << "------------------------------------------" << endl
         << endl;

    string encryptPwd;

    switch (choice)
    {

    case 1:
      cout << ">> Enter website: ";
      cin >> website;
      cout << ">> Enter username: ";
      cin >> username;
      cout << ">> Enter password: ";
      cin >> password;
      encryptPwd = encryptCaesarCipher(password, 5);
      addPasswordEntry(loggeduser, website, username, encryptPwd);
      break;

    case 2:
      cout << ">> Enter website: ";
      cin >> website;
      viewPasswordEntries(loggeduser, website, username);
      break;

    case 3:
      cout << ">> Enter website: ";
      cin >> website;
      cout << ">> Enter new password: ";
      cin >> password;
      updatePasswordEntry(loggeduser, website, password, username);
      break;

    case 4:
      cout << ">> Enter website: ";
      cin >> website;
      deletePasswordEntry(loggeduser, website, username);
      break;

    case 5:
      cout << "Exiting..." << endl;
      break;

    case 111:
      aboutApplication();
      break;

    case 222:
      howToUse();
      break;

    default:
      cout << "Invalid choice. Please try again." << endl;
    }

    cout << endl
         << "------------------------------------------" << endl
         << endl;

    cout << "Do you want to continue using this application (yes/no) : ";
    cin >> response;
    cout << "------------------------------------------" << endl;
  }
  cout << "Successfully logged out from "<< loggedUser <<" account!" << endl;

  return;
}

void signup(const string &name, const string &username, const string &email, const string &password)
{

  try
  {
    ofstream file("userdetails.csv", ios::app);
    if (!file.is_open())
    {
      throw runtime_error("Error opening the database");
    }

    string pass = encryptCaesarCipher(password, 5);

    file << username << "," << name << "," << email << "," << pass << endl;

    if (file.fail())
    {
      throw runtime_error("Error writing in the database");
    }

    file.close();

    cout << "Data stored successfully in the database" << endl;
  }
  catch (const exception &e)
  {
    cout << "Error: " << string(e.what()) << endl;
  }
  return;
}

void login(const string &username, const string &password)
{

  ifstream file("userdetails.csv");
  if (!file.is_open())
  {
    throw runtime_error("Error opening the database");
  }

  string line;
  while (getline(file, line))
  {
    istringstream iss(line);
    string uname, usrname, mail, pwd;

    if (getline(iss, uname, ',') &&
        getline(iss, usrname, ',') &&
        getline(iss, mail, ',') &&
        getline(iss, pwd, ','))
    {
      pwd = decryptCaesarCipher(pwd, 5);

      if (usrname == username && pwd == password)
      {
        cout << "Login successful. Welcome, " << uname << "!" << endl;
        dashboard(uname);
      }
    }
  }

  cout << "User does not exist. Please sign up first." << endl;
  return;
}

int main()
{
  string response = "yes";
  int choice;
  string pwd, cpwd;             // password and confirm password
  string name, username, email; // details of the user

  while (response == "yes" || response == "YES" || response == "sure" || response == "y")
  {

    cout << endl
         << "==========================================" << endl;
    cout << "\t ** ____ PASSWORD MANAGER ____ **" << endl;
    cout << "\t\t1. Login to existing account" << endl;
    cout << "\t\t2. Create a New Account" << endl;
    cout << "\t\t3. About this application" << endl;
    cout << "\t\t4. How to use this application" << endl;

    cout << "==========================================" << endl
         << endl;

    cout << ">> Enter your choice: ";
    cin >> choice;
    cout << endl
         << "------------------------------------------" << endl
         << endl;

    switch (choice)
    {
    case 1:
      // login to the existing account
      cout << ">> Enter your unique username: ";
      cin >> username;
      cout << ">> Enter your password: ";
      cin >> pwd;
      login(username, pwd);
      break;

    case 2:
      // signup for the new account
      cout << ">> Enter your full name: ";
      cin >> name;
      cout << ">> Enter your unique username: ";
      cin >> username;
      cout << ">> Enter your email: ";
      cin >> email;
      cout << ">> Enter your password: ";
      cin >> pwd;
      cout << ">> Confirm Password: ";
      cin >> cpwd;
      if (pwd == cpwd)
      {
        signup(name, username, email, pwd);
      }
      else
      {
        cout << "The passwords do not match! TRY AGAIN" << endl;
      }
      break;

    case 3:
      aboutApplication();
      break;

    case 4:
      howToUse();
      break;

    default:
      cout << "Invalid choice. Please try again." << endl;
    }

    cout << endl
         << "------------------------------------------" << endl
         << endl;

    cout << "Do you want to continue using this application (yes/no) : ";
    cin >> response;
    cout << "------------------------------------------" << endl;
  }
  cout << "Successfully terminated the application!" << endl;

  return 0;
}