//
//  XMLParser.h
//  TableViewTutorial
//
//  Created by Sean Che on 11-07-04.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TableViewTutorialAppDelegate, Book;

@interface XMLParser : NSObject {
    NSMutableString *currentElementValue;
    
    TableViewTutorialAppDelegate *appDelegate;
    Book *aBook;
}

- (XMLParser *) initXMLParser;

@end
