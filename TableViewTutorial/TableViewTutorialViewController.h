//
//  TableViewTutorialViewController.h
//  TableViewTutorial
//
//  Created by Sean Che on 11-06-16.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DataController, TableViewTutorialAppDelegate;
@interface TableViewTutorialViewController : UITableViewController {
    DataController *dataController;
    UIView *myView;
    TableViewTutorialAppDelegate *appDelegate;
    
}

@property (nonatomic, retain) DataController *dataController;
@property (nonatomic, retain) UIView *myView;

@end
