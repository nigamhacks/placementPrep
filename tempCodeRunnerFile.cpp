~Node(){
    int value=this->data;
    //freed memory 
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory is free for node with data "<< value <<endl;
}