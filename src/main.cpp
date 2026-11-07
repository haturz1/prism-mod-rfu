#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

void banish(CCNode* victim) {
    victim->setVisible(false);
}

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false
        }
        
        auto bottomMenu = this->getChildByID("bottom-menu");
        
        if (!bottomMenu) return true;
        
        auto bottomMenu = this->getChildByID("bottom-menu");
        
        if (!bottomMenu) return true;
        
    }
}