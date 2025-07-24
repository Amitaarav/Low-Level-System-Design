#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class DocumentEditor{
    private:
        vector<string> documentElements;
        string renderedDocument;

    public:
        void addText(string text){
            documentElements.push_back(text);
        }

        void addImage(string imagePath){
            documentElements.push_back(imagePath);
        }

        string renderDocument(){
            if(renderedDocument.empty()){
                string result;
                for(auto element : documentElements){
                    if(element.size() > 4 && element.substr(element.size()-4) == ".png" || element.substr(element.size()-4) == ".jpg"){
                        result += "[Image: " + element + "]" + "\n";
                    }
                    else{
                        result += element + "\n";
                    }
                }
                renderedDocument = result;
            }
            return renderedDocument;
        }

        void saveToFile(){
            ofstream file("document.txt");

            if(file.is_open()){
                file << renderDocument();
                file.close();
                cout <<"Document saved to document.txt" <<endl;
            }
            else{
                cout << "Error: Unable to open the file for writing." <<endl;
            }
        }
};

int main(){
    DocumentEditor editor;
    editor.addText("Hello, this is a document editor.");
    editor.addImage("image1.png");
    editor.addText("This is an image.");
    editor.addImage("image2.jpg");
    cout << editor.renderDocument() <<endl;
    editor.saveToFile();
    return 0;
}