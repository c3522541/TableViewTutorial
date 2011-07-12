//
//  Book.m
//  TableViewTutorial
//
//  Created by Sean Che on 11-07-04.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "Book.h"


@implementation Book
@synthesize title, author, summary, bookID;

- (void) dealloc {
    
    [summary release];
    [author release];
    [title release];
    [super dealloc];
}
@end
