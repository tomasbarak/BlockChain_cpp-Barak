string readLastBlock(string ruta, bool display){
    vector <vector<string>> blockChain;
    vector <string> blockParams;

	ifstream file;

	string frase;

	string line;

    int arreglo[6];
    int blockCount = 0;
    int lineCount = -1;

    string prevHash;

	file.open(ruta, ios::app);

	vector <string> types = {"senderID", "amount", "receiverID", "blockProof", "prevHash", "blockHash"};

	if(file.is_open()){

	while(getline(file, line, ',')){

            lineCount += 1;
            line = replaceLines(line, ' ');
            if(lineCount >= 6){
            blockCount += 1;
                blockChain.push_back(blockParams);
                lineCount = 0;
                blockParams = {};
                }else{

                }
                blockParams.push_back(line);
        }

        cout << "Total Proof: " <<blockCount << endl;
        cout << "Params: " << lineCount << endl << endl;

    for(int j = blockCount-1; j < blockChain.size();j++){
        for(int i = 0; i < 6; i++){
        if(display){
            cout << types[i] << ": ";
            cout << blockChain[j][i] << endl;
        }

        if(i == 4){
            prevHash = blockChain [j][i];
        }
        }
        if(display){
        cout << endl;
        }

	}

	}

	file.close();

	return prevHash;
}
