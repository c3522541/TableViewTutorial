//
//  XMLParser.m
//  TableViewTutorial
//
//  Created by Sean Che on 11-07-04.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "XMLParser.h"
#import "TableViewTutorialAppDelegate.h"
#import "Book.h"

@implementation XMLParser

- (XMLParser *) initXMLParser
{
    [super init];
    
    appDelegate = (TableViewTutorialAppDelegate *)[[UIApplication sharedApplication] delegate];
    
    return self;
}

- (void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName attributes:(NSDictionary *)attributeDict
{
    if ([elementName isEqualToString:@"Books"])
    {
        //initialize the array
        appDelegate.books = [[NSMutableArray alloc] init];
    }
    else if ([elementName isEqualToString:@"Book"])
    {
        //initialize the book.
        aBook =   [[Book alloc] init];
        
        //extract the attribute here.
        aBook.bookID = [[attributeDict objectForKey:@"id"] integerValue];
        
        NSLog(@"Reading id value :%i", aBook.bookID);
    }
    NSLog(@"Processing Element: %@", elementName);
}

- (void)parser:(XMLParser *)parser foundCharacters:(NSString *)string
{
    if(!currentElementValue)
    {
        currentElementValue = [[NSMutableString alloc] initWithString:string];
    }
    else
    {
        [currentElementValue appendString:string];
//        [currentElementValue setString:string];
    }
    NSLog(@"Processing Value: %@", currentElementValue);
}

@end
