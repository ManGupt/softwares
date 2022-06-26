int scancode()
{
 _AH=0;
 geninterrupt(22);
 return(_AH);
}