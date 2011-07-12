//
//  Book.h
//  TableViewTutorial
//
//  Created by Sean Che on 11-07-04.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Book : NSObject {
    NSInteger bookID;
    NSString *title; //Same name as the Entity Name.
    NSString *author; //Same name as the Entity Name.
    NSString *summary; //Same name as the Entity Name.
    
}

@property (nonatomic, readwrite) NSInteger bookID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSString *summary;

@end
