//
//  shaderScene.h
//  mygame
//
//  Created by WU XIAO on 2014-12-05.
//
//

#ifndef __mygame__shaderScene__
#define __mygame__shaderScene__

#include <iostream>
#include "cocos2d.h"
#include "embossShader.h"
#include "HelloWorldScene.h"
#include "Julia.h"
class shaderScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    cocos2d::MenuItemFont * change;
    float machineScale;
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void setShaderwithccPosition(cocos2d::Sprite * sprite,const char* frag);
    void setShader(cocos2d::Sprite * sprite,const char* vert,const char* frag);
    void setBlur(cocos2d::Sprite * sprite);
    //void buildCustomUniforms();
    void menuBackCallback(cocos2d::Ref* pSender);
    void loadShader(const GLchar* vertexShader, const char* frag,cocos2d::Sprite * sprite);
    // implement the "static create()" method manually
    CREATE_FUNC(shaderScene);
};


#endif /* defined(__mygame__shaderScene__) */
