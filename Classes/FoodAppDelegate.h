//
//  FoodAppDelegate.h
//  Food
//
//  Created by Samuel Goodwin on 10/21/08.
//  Copyright Goodwinlabs 2008. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FoodViewController;

@interface FoodAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    FoodViewController *viewController;
	NSDictionary *menu;
	UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) FoodViewController *viewController;
@property (nonatomic, retain) NSDictionary *menu;
@property (nonatomic, retain) UINavigationController *navigationController;
@end