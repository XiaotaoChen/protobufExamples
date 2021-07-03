#include <fstream>
#include <iostream>
#include <string>

#include "person.pb.h"
using namespace std;

// Main function:  Reads the entire address book from a file,
//   adds one person based on user input, then writes it back out to the same
//   file.
int main(int argc, char* argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  if (argc != 2) {
    cerr << "Usage:  " << argv[0] << " PERSON_FILE" << endl;
    return -1;
  }

  cxtExample::Person person;

  {
    // Read the existing address book.
    fstream input(argv[1], ios::in | ios::binary);
    if (!input) {
      cout << argv[1] << ": File not found.  Creating a new file." << endl;
    } else if (!person.ParseFromIstream(&input)) {
      cerr << "Failed to parse person." << endl;
      return -1;
    }
  }

  // Add an person.
  person.set_name("hello");
  person.set_id(1);
  std::string tel = "110";
  // std::string* phone = person.add_phones();
  // phone = &tel;
  person.add_phones("110");

  // print info
  cout << "to save below person info:" << std::endl;
  cout << "Person ID: " << person.id() << endl;
  cout << "  Name: " << person.name() << endl;

  for (int j = 0; j < person.phones_size(); j++) {
    cout << "phone " << j << " : " << person.phones(j) << endl;
  }

  {
    // Write the new address book back to disk.
    fstream output(argv[1], ios::out | ios::trunc | ios::binary);
    if (!person.SerializeToOstream(&output)) {
      cerr << "Failed to write person." << endl;
      return -1;
    }
  }

  // Optional:  Delete all global objects allocated by libprotobuf.
  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}