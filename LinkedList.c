/***********************************************
| This is the rex API
| usage: listed in the README.md file (that's why it's there)
| this program is an attempt to add more data structures to C
***********************************************/

/*declares intRecord, and in order to use this, you have to declare a variable of type intRecord, and create a pointer
pointing to the next node in the list(for a circular list, you need pointers for both before the node and after the node, 
I'm trying to save time). before you use the setIntRecordSize() function, you have to create an 'instance' of intRecord */
typedef struct intRecord{
    int size;
    int data[size];
}intRecord;

/* sets intRecord.size*/
void setIntRecordSize(int sizeToSet, intRecord theRecord){
    intRecord.size = sizeToSet;
}

/* returns intRecord.size */
int getIntRecordSize(){
    return intRecord.size;
}
/* declares charRecord, and as previously mentioned, you have to create pointers in creative ways to make this work,
and you have to create an instance to charRecord. this is either a string or a character value. */
typedef struct charRecord{
    int size;
    char data[size];
}charRecord;

/* again set charRecord.size */
void setCharRecordSize(int sizeToSet, charRecord theRecord){
    theRecord.size = sizeToSet;
}
