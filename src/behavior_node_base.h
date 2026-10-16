#pragma once

#include <godot_cpp/classes/resource.hpp>

namespace godot {

class BehaviorNodeBase : public Resource 
{
    GDCLASS(BehaviorNodeBase, Resource);
    
    private:
            
    protected:
        static void _bind_methods();

    public:

    BehaviorNodeBase();
    ~BehaviorNodeBase();


};


} //END: namespace godot
