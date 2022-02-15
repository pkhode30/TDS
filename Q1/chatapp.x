struct user{
    string username;
    int port;
    string msg;
};
program CHATAPP_PROG{
    version CHATAPP_VERS{
        string chatapp(user)=1;
    }=1;
}=0x23452222;