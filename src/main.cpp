#include <Geode/Geode.hpp>
#include <Geode/modify/CreatorLayer.hpp>

using namespace geode::prelude;



 
class $modify(Ohio, CreatorLayer) {

   static void onModify(auto& self) {
        self.setHookPriority("CreatorLayer::init", -26902);
    }

    bool init() {
        if (!CreatorLayer::init()) return false;

        auto menu = this->getChildByID("creator-buttons-menu");
        
        auto mappacks = menu->getChildByID("map-packs-button");
 
        if(mappacks) {
              menu->removeChild(mappacks);
              menu->updateLayout();
        }
        return true;
    }
};







    





        
