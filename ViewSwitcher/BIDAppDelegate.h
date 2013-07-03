//
//  BIDAppDelegate.h
//  ViewSwitcher
//
//  Created by panda zheng on 13-4-27.
//  Copyright (c) 2013年 panda zheng. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BIDSwitchViewController;

@interface BIDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) BIDSwitchViewController *switchViewController;

@end
