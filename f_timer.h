class ftimer{
private:
    unsigned long int starttime;
    unsigned long int duration;
    bool active;

public:
    ftimer();
    ftimer(unsigned long int t);
    void setDuration(unsigned long int td);
    void startNow();
    bool isExpired(); //timer can only expire when active!
    bool isActive();
    void deactivate();
};
