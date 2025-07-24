#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class DocumentEditor{

};

class Document{

};

// persistence abstraction
class Persistence{
    public:
        virtual void save(string data) = 0;
};

class FileStorage : public Persistence{

};

class DatabaseStorage : public Persistence{
    
};

class DocumentElement{
    public:
        virtual string render() = 0;
};

class TextElement : public DocumentElement{

};

class ImageElement : public DocumentElement{

};

class NewLine : public DocumentElement{

};

class TabSpace : public DocumentElement{

};

class DocumentRenderer{

};

