//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//class TextEditor
//{
//private:
//    string text;
//    stack<string> undoStack;
//    stack<string> redoStack;
//
//public:
//    TextEditor()
//    {
//        text = "";
//    }
//
//    void typeText(string newText)
//    {
//        undoStack.push(text);     
//        text += newText;          
//
//        
//        while (!redoStack.empty())
//            redoStack.pop();
//
//        cout << "Text after typing: " << text << endl;
//    }
//
//    void deleteText(int count)
//    {
//        if (count > text.length())
//            count = text.length();
//
//        undoStack.push(text);     
//        text.erase(text.length() - count, count);
//
//        
//        while (!redoStack.empty())
//            redoStack.pop();
//
//        cout << "Text after deletion: " << text << endl;
//    }
//
//    void undo()
//    {
//        if (undoStack.empty())
//        {
//            cout << "Nothing to undo!" << endl;
//            return;
//        }
//
//        redoStack.push(text);     
//        text = undoStack.top();
//        undoStack.pop();
//
//        cout << "After undo: " << text << endl;
//    }
//
//    void redo()
//    {
//        if (redoStack.empty())
//        {
//            cout << "Nothing to redo!" << endl;
//            return;
//        }
//
//        undoStack.push(text);     
//        text = redoStack.top();
//        redoStack.pop();
//
//        cout << "After redo: " << text << endl;
//    }
//
//    void showText()
//    {
//        cout << "Current Text: " << text << endl;
//    }
//};
//
//int main()
//{
//    TextEditor editor;
//    int choice;
//    string input;
//    int count;
//
//    do
//    {
//        cout << endl;
//        cout << "1. Type Text" << endl;
//        cout << "2. Delete Text" << endl;
//        cout << "3. Undo" << endl;
//        cout << "4. Redo" << endl;
//        cout << "5. Show Text" << endl;
//        cout << "0. Exit" << endl;
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        cin.ignore(); 
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter text: ";
//            getline(cin, input);
//            editor.typeText(input);
//            break;
//
//        case 2:
//            cout << "Enter number of characters to delete: ";
//            cin >> count;
//            editor.deleteText(count);
//            break;
//
//        case 3:
//            editor.undo();
//            break;
//
//        case 4:
//            editor.redo();
//            break;
//
//        case 5:
//            editor.showText();
//            break;
//
//        case 0:
//            cout << "Exiting..." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}