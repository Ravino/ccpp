std::vector <int> createReadVector (std:: string path) {

  std::vector <int> vec;

  std::ifstream dataFile (path);


  while (dataFile) {

    std::string str;


    std::getline (dataFile, str);


    if (str != "\0") {

      vec. push_back (std::stoi (str));

    }

  }


  return vec;

}



