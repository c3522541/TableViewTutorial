//
//  TableViewTutorialAppDelegate.h
//  TableViewTutorial
//
//  Created by Sean Che on 11-06-16.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewTutorialViewController.h"
@interface TableViewTutorialAppDelegate : NSObject <UIApplicationDelegate> {
    TableViewTutorialViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end
