//
//  MyContactListener.h
//  little_pig
//
//  Created by cocoa on 12-4-16.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

//#ifndef little_pig_MyContactListener_h
//#define little_pig_MyContactListener_h



//#endif

#import "Box2D.h"
#import <set>
#import <algorithm>

class MyContactListener : public b2ContactListener
{
public:
    std::set<b2Body*> contacts;
    
    MyContactListener();
    ~MyContactListener();
    
    virtual void BeginContact(b2Contact* contact );
    virtual void EndContact(b2Contact* contact);
    virtual void PreSolve(b2Contact* contact,const b2Manifold * oldManifold);
    virtual void PostSolve(b2Contact* contact,const b2ContactImpulse* impulse);
    
};