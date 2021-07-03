#!/bin/bash

# person
protoc -I=./ --cpp_out=./ person.proto
# address book
protoc -I=./ --cpp_out=./ addressBook.proto
