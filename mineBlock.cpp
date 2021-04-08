#include <bits/stdc++.h>

uintmax_t mineBlock(string ruta, string prevHash, int blockProof){

    ofstream file;
    string senderID;
    string receiverID;
    int amount;

    file.open(ruta, ios::app);

    cout << "Type your sender ID: ";
    cin >> senderID;

    cout << "Type the receiver ID: ";
    cin >> receiverID;

    cout << "Amount to send: ";
    cin >> amount;

    hash <string> blockHash;

    uintmax_t hashing = blockHash(prevHash + senderID + receiverID);



    if(file.is_open()){
        file << senderID + ',' + to_string(amount) + ',' + receiverID + ',' + to_string(blockProof) + ','+ prevHash + ',' + to_string(hashing) + ',' + '\n';

        cout << endl <<"The block has been generated" << endl << endl;

        cout << "senderID: " << senderID << endl;
        cout << "amount: " << amount << endl;
        cout << "receiverID: " << receiverID << endl;
        cout << "blockProof: " << blockProof << endl;
        cout << "prevHash: " << prevHash << endl;
        cout << "hashing: " << hashing << endl;
    }



    return hashing;
}
