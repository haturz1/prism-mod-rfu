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
        
        auto mainMenu = this->getChildByID("main-menu");
        
        auto profileMenu = this->getChildByID("profile-menu");
        
        auto rightSideMenu = this->getChildByID("right-side-menu");
        
        auto socialMediaMenu = this->getChildByID("social-media-menu");
   
        auto moreGamesMenu = this->getChildByID("more-games-menu");
        
        auto closeMenu = this->getChildByID("close-menu");
        
        banish(bottomMenu);
        
        banish(mainMenu);
        
        banish(profileMenu);
        
        banish(rightSideMenu);
        
        banish(socialMediaMenu);
    
        banish(moreGamesMenu);

        banish(closeMenu);
        return true;
        
    }
};