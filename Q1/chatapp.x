struct target{
    string ip<>;
    int port;
};
program CHATAPP_PROG{
    version CHATAPP_VERS{
        int chatapp(target)=1;
    }=1;
}=0x23452222;