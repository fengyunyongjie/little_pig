//
//  HelloWorldLayer.h
//  little_pig
//
//  Created by  on 12-4-15.
//  Copyright __MyCompanyName__ 2012年. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
	b2World* world;
	GLESDebugDraw *m_debugDraw;
    
    b2Fixture *armFixture;
    b2Body *armBody;
    b2Body *groundBody;
    b2RevoluteJoint *armJoint;
    b2MouseJoint *mouseJoint;
    
    NSMutableArray *bullets;
    int currentBullet;
    
    b2Body *bulletBody;
    b2WeldJoint *bulletJoint;
    
    BOOL releasingArm;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
