#ifndef CAPACITY_H
#define CAPACITY_H

#include <string>
#include <list>
#include <iostream>


/** 
* Class Capacity . upgraded implementation for tests purposes
* @author Armand
*
**/

class Capacity
{

	public :

    /**
    * Default constructor
    * 
    *
    **/
    					Capacity();
    /**
    * Constructor
    * 
    *
    **/
    					Capacity(std::string type,int durabilty);
    /**
    * Destructor
    * 
    *
	**/

  						~Capacity();
    /**
    * getType
    * basic getter
    *
    **/

    std::string			getType();
    /**
    * getdurabilty
    * basic getter
    *
    **/
    int					getDurabilty();
    /**
    * setType
    * basic setter
    *
    **/
    void				setType(std::string type);
    /**
    * setdurabilty
    * basic setter
    *
    **/
    void				setDurabilty(int durabilty);
    /**
    * setActive
    * basic setter
    *
    **/
    void                setActive(bool active);
    /**
    * getActive
    * basic getter
    *
    **/
    bool                getActive();



        void decreaseDurability();

        Effect getEffect();

        void setEffect(Effect effect);

	protected : 

		std::string		type;
		int 			durabilty;
        bool            active;
        Effect*         effect;



};
#endif // CAPACITY_H