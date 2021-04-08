string replaceLines(string line, char replacement){

    string lineConstruct = "";

    for(int i = 0; i < line.size(); i++){
        if(line[i] != '\n'){
            lineConstruct = lineConstruct + line[i];
        }
    }
    return lineConstruct;
}
