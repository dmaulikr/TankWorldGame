//
//  BulletModelManager.h
//  TankWorld
//
//  Created by 学宝 陈 on 12-4-27.
//  Copyright (c) 2012年 C-SOFT. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BulletModel;
@interface BulletModelManager : NSObject
{
    
}

+ (BulletModelManager *)shareBulletModelManager;


//移动炮弹
- (BOOL)moveForBulletModel:(BulletModel *)aBulletModel;

@end
