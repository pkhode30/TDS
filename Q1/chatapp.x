struct data{
    char msg[80];
};

program CHATAPP_PROG{
    version CHATAPP_VERS{
        string chat(data)=1;
    }=1;
}=0x23452111;