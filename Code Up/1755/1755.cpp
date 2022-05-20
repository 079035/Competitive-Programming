#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, extension, dic[14][2];
    dic[0][0]="dib";
    dic[0][1]="Paint.Picture";
    dic[1][0]="doc";
    dic[1][1]="Word.Document.8";
    dic[2][0]="docx";
    dic[2][1]="Word.Document.12";
    dic[3][0]="htm";
    dic[3][1]="htmfile";
    dic[4][0]="html";
    dic[4][1]="htmlfile";
    dic[5][0]="hwp";
    dic[5][1]="Hwp.Document.96";
    dic[6][0]="hwpx";
    dic[6][1]="Hwp.Document.hwpx.96";
    dic[7][0]="hwt";
    dic[7][1]="Hwp.Document.hwt.96";
    dic[8][0]="jpe";
    dic[8][1]="jpegfile";
    dic[9][0]="jpeg";
    dic[9][1]="jpegfile";
    dic[10][0]="jpg";
    dic[10][1]="jpegfile";
    dic[11][0]="ppt";
    dic[11][1]="PowerPoint.Show.8";
    dic[12][0]="pptx";
    dic[12][1]="PowerPoint.Show.12";
    dic[13][0]="pptxml";
    dic[13][1]="powerpointxmlfile";
    cin >> input;
    int start;
    for (int i = 0; i < input.length(); i++)
        if (input[i] == '.')
            start = i;
    for (int i = start+1; i < input.length(); i++)
    {
        extension+=input[i];
    }
        //cout<<extension<<endl;
    for(int i=0;i<14;i++){
        if(extension==dic[i][0]){
            cout<<dic[i][1]<<endl;
            break;
        }
    }
    return 0;
}