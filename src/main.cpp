#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/MenuGameLayer.hpp>

using namespace geode::prelude;

void banish(CCNode* victim) {
    victim->setVisible(false);
}

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }
        
        for (auto ids : {"bottom-menu", "main-menu", "right-side-menu", "social-media-menu", "more-games-menu", "close-menu"}) {
            if (auto md = this->getChildByIDRecursive(ids)) banish(md);
        }
        
        return true;                     
    }
};

class $modify(MenuGameLayer) {
    bool init() {
        if (!MenuGameLayer::init()) {
            return false;
        }

        if (auto bg = typeinfo_cast<CCSprite*>(this->getChildByName("background"))) {
            bg->setColor({140, 60, 220});
        }
        
        return true;
    }
};