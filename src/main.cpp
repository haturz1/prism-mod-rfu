#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

void banish(CCNode* victim) {
    if (victim) victim->setVisible(false);
}

class $modify(PrismMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        for (auto ids = {"bottom-menu", "main-menu", "profile-menu", "right-side-menu", "social-media-menu", "more-games-menu", "close-menu"}) {
            if (auto md = this->getChildByIDRecursive(ids)) banish(md);
        }

        return true;
    }
};