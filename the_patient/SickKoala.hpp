class SickKoala
{
public:
  void setName(char *name);
  char *getName(void);
  void poke(void);
  bool takeDrug(char *drug);
  void overdrive(char *str);
  
  SickKoala(); // constructor
  ~SickKoala(); // destructor
private:
  char *koalaName;
};
