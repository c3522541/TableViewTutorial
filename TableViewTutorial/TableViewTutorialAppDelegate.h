//
//  TableViewTutorialAppDelegate.h
//  TableViewTutorial
//
//  Created by Sean Che on 11-06-16.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewTutorialViewController.h"
#import "MyNaviViewController.h"
@interface TableViewTutorialAppDelegate : NSObject <UIApplicationDelegate> {
    TableViewTutorialViewController *viewController;
    NSMutableArray *books;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) NSMutableArray *books;
@end
