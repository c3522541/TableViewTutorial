//
//  TableViewTutorialViewController.h
//  TableViewTutorial
//
//  Created by Sean Che on 11-06-16.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataController;
@interface TableViewTutorialViewController : UITableViewController {
    DataController *dataController;
    UIView *myView;
}

@property (nonatomic, retain) DataController *dataController;
@property (nonatomic, retain) UIView *myView;

@end
