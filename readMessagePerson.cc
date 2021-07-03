#include <fstream>
#include <iostream>
#include <string>

#include "person.pb.h"
using namespace std;

// Main function:  Reads the entire address book from a file and prints all
//   the information inside.
int main(int argc, char* argv[]) {
  // Verify that the version of the library that we linked against is
  // compatible with the version of the headers we compiled against.
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  if (argc != 2) {
    cerr << "Usage:  " << argv[0] << " PERSON" << endl;
    return -1;
  }

  cxtExample::Person person;

  {
    // Read the existing address book.
    fstream input(argv[1], ios::in | ios::binary);
    if (!person.ParseFromIstream(&input)) {
      cerr << "Failed to parse person." << endl;
      return -1;
    }
  }

  cout << "Person ID: " << person.id() << endl;
  cout << "  Name: " << person.name() << endl;

  for (int j = 0; j < person.phones_size(); j++) {
    cout << "phone " << j << " : " << person.phones(j) << endl;
  }

  // Optional:  Delete all global objects allocated by libprotobuf.
  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}