#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

void banish(CCNode* victim) {
    victim->setVisible(false);
}

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }
        
        for (auto ids : {"bottom-menu", "main-menu", "right-side-menu", "social-media-menu", "more-games-menu", "close-menu", "main-menu-bg"}) {
            if (auto md = this->getChildByIDRecursive(ids)) banish(md);
        }
        
        return true;                     
    }
};