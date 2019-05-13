std::vector <std:: string> createReadVector (std:: string path) {

  std::vector <std:: string> vec;

  std::ifstream dataFile (path);


  while (dataFile) {

    std::string str;


    std::getline (dataFile, str);


    if (str != "\0") {

      vec. push_back (str);

    }

  }


  return vec;

}



